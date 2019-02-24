// Declares clang::SyntaxOnlyAction.
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
// Declares llvm::cl::extrahelp.
#include "llvm/Support/CommandLine.h"

#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"

#include<iostream>
#include<vector>
using namespace std;


using namespace clang::tooling;
using namespace llvm;

using namespace clang;
using namespace clang::ast_matchers;



DeclarationMatcher globalVarMatcher = varDecl(
    hasGlobalStorage(),unless(hasAncestor(functionDecl()))
).bind("global_var");

DeclarationMatcher globalFunctionMatcher = functionDecl(
	hasDescendant(declRefExpr(
		to(
			varDecl(
				hasGlobalStorage(), unless(hasAncestor(functionDecl()))
			)
		)
	))
).bind("global_fun");


StatementMatcher globalMatcher = declRefExpr(
	to(
		varDecl(
			hasGlobalStorage()
		).bind("gvarName")
	) // to
	, hasAncestor(
		functionDecl().bind("function")
	)
).bind("globalReference");




class GlobalVarPrinter : public MatchFinder::MatchCallback {
public:
	virtual void run(const MatchFinder::MatchResult &Result) {
		if (const VarDecl * Decl = Result.Nodes.getNodeAs<VarDecl>("global_var")) {
			Decl->dump();
			cout << Decl->getQualifiedNameAsString() << ": ";
			cout << Decl->getType().getAsString() << endl;
		}
	}
};

class GlobalFunctionPrinter : public MatchFinder::MatchCallback {
public:
	virtual void run(const MatchFinder::MatchResult &Result) {
		if (const FunctionDecl * Decl = Result.Nodes.getNodeAs<FunctionDecl>("global_fun")) {
			Decl->dump();
			cout << Decl->getNameAsString() << ": ";
			cout << Decl->getCallResultType().getAsString();
			int paraNum = Decl->getNumParams();
			printf("(");
			for (int i = 0; i < paraNum; i++) {
				if (i)printf(", ");
				cout << Decl->getParamDecl(i)->getType().getAsString() << " ";
				cout << Decl->getParamDecl(i)->getNameAsString();
			}
			printf(")\n");
		}
	}
};

class GlobalPrinter : public MatchFinder::MatchCallback {
public:

	virtual void run(const MatchFinder::MatchResult &Result)
	{
		FunctionDecl const * func_decl =
			Result.Nodes.getNodeAs<FunctionDecl>("function");
		Expr const * g_var = Result.Nodes.getNodeAs<Expr>("globalReference");
		VarDecl const * var = Result.Nodes.getNodeAs<VarDecl>("gvarName");
		if (func_decl && var) {
			/*
			DeclarationNameInfo NameInfo = func_decl->getNameInfo();
			DeclarationName Name = NameInfo.getName();
			*/
			//cout << "变量名：";
			DeclarationName Name2 = var->getDeclName();
			cout << var->getNameAsString() << ": ";
			int paraNum = func_decl->getNumParams();
			cout << var->getType().getAsString() << "\n";
			cout << "所在函数：" << func_decl->getCallResultType().getAsString() << "  " << func_decl->getNameAsString();
			cout << "(";
			if (paraNum != 0)
			{
				for (int i = 0; i < paraNum; i++)
				{
					if (i != 0) cout << ",";
					cout << func_decl->getParamDecl(i)->getType().getAsString() << " ";
					cout << func_decl->getParamDecl(i)->getNameAsString();
				}
			}
			cout << ")" << endl;
			//Name2.dump();
		}
	}
};



// Apply a custom category to all command-line options so that they are the
// only ones displayed.
static llvm::cl::OptionCategory MyToolCategory("my-tool options");

// CommonOptionsParser declares HelpMessage with a description of the common
// command-line options related to the compilation database and input files.
// It's nice to have this help message in all tools.
static cl::extrahelp CommonHelp(CommonOptionsParser::HelpMessage);

// A help message for this specific tool can be added afterwards.
static cl::extrahelp MoreHelp("\nMore help text...");



int main(int argc, const char **argv) {
	CommonOptionsParser OptionsParser(argc, argv, MyToolCategory);
	ClangTool Tool(OptionsParser.getCompilations(),
		OptionsParser.getSourcePathList());

	GlobalVarPrinter globalVarPrinter;
	GlobalFunctionPrinter globalFunctionPrinter;
	GlobalPrinter globalPrinter;

	MatchFinder varFinder;
	varFinder.addMatcher(globalVarMatcher, &globalVarPrinter);

	freopen("global_variable.txt", "w", stdout);
	Tool.run(newFrontendActionFactory(&varFinder).get());
	varFinder.~MatchFinder();

	MatchFinder funFinder;
	funFinder.addMatcher(globalFunctionMatcher, &globalFunctionPrinter);

	freopen("global_function.txt", "w", stdout);
	Tool.run(newFrontendActionFactory(&funFinder).get());
	funFinder.~MatchFinder();

	MatchFinder finder;
	finder.addMatcher(globalMatcher, &globalPrinter);

	freopen("out.txt", "w", stdout);
	Tool.run(newFrontendActionFactory(&finder).get());
	finder.~MatchFinder();

	return 0;
}