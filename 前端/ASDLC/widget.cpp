#include "widget.h"
#include "ui_widget.h"
QString sumfilepath;
QString startdialog;
QByteArray temp;
char* exefilepath;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->buttonGroup->setId(ui->radioButton, 0);
    ui->buttonGroup->setId(ui->radioButton_2, 1);
    ui->buttonGroup->setId(ui->radioButton_3, 2);
    this->setWindowTitle(QString("Global Watcher"));
    QFileSystemModel *model = new QFileSystemModel();
    ui->textEdit->setReadOnly(1);
    //行号获取
    //QTextDocument *document = ui->textEdit->document();
    //int nRowcnt=document->lineCount();
        model->setRootPath(QDir::currentPath());

        QStringList nameFilter;
        nameFilter << "*.cpp" << "*.h" << "*.c";
        model->setNameFilterDisables(false);
        model->setNameFilters(nameFilter);
        ui->treeView->setModel(model);
        ui->treeView->setRootIndex(model->index(QDir::currentPath()));
        ui->treeView->show();
        ui->treeView->setColumnHidden(1, true);
        ui->treeView->setColumnHidden(2, true);
        ui->treeView->setColumnHidden(3, true);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    int a=ui->buttonGroup->checkedId();
    switch(a)
    {
    case 0:
        list->show();
        break;
    case 1:
        Search->show();
        break;
    case 2:
        pic->show();
        break;
    }
}

void Widget::on_treeView_doubleClicked(const QModelIndex &index)
{
    ui->textEdit->clear();
    QModelIndex tempindex;
    tempindex=index;
    QString filepath;
    QString root=QDir::currentPath();
    QString rootindex=ui->treeView->rootIndex().data().toString();
    while(1)
    {
    if(tempindex.parent().data().toString()==rootindex)
    break;
    if(tempindex.parent().data().toString()!=rootindex)
    {
        if(filepath=="")
        filepath=tempindex.parent().data().toString()+filepath;
        else
        filepath=tempindex.parent().data().toString()+"/"+filepath;
        tempindex=tempindex.parent();
    }
    }
    QString filename=index.data().toString();
    sumfilepath=root+"/"+filepath+"/"+filename;
    startdialog="F:\\QT\\Global-Watcher\\global-watcher.exe "+sumfilepath+" --";
    QFile file;
    file.setFileName(sumfilepath);

        if (file.open(QIODevice ::ReadOnly))
        {
            QTextStream textStream(&file);
            while (!textStream.atEnd())
            {
                ui->textEdit->append(textStream.readLine());
            }
            file.close();
        }
        temp = startdialog.toLatin1();
        exefilepath=temp.data();
        system(exefilepath);
}
