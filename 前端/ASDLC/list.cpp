#include "list.h"
#include "ui_list.h"

List::List(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::List)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("List view"));
    ui->textEdit->setReadOnly(1);
    ui->textEdit_2->setReadOnly(1);
}

List::~List()
{
    delete ui;
}

void List::on_pushButton_clicked()
{
    ui->textEdit->clear();
    ui->textEdit_2->clear();
    this->close();
}

void List::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
    ui->textEdit_2->clear();
    QFile fun;
    QFile var;
    fun.setFileName("C:\\Users\\1026524517\\Desktop\\global_function.txt");
    var.setFileName("C:\\Users\\1026524517\\Desktop\\global_variable.txt");
    if (fun.open(QIODevice ::ReadOnly))
    {
        QTextStream textStream(&fun);
        while (!textStream.atEnd())
        {
            ui->textEdit_2->append(textStream.readLine());
        }
        fun.close();
    }
    if (var.open(QIODevice ::ReadOnly))
    {
        QTextStream textStream(&var);
        while (!textStream.atEnd())
        {
            ui->textEdit->append(textStream.readLine());
        }
        var.close();
    }
}
