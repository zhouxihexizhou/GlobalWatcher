#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Variable query"));
}
void search::on_pushButton_clicked()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    QFile dataFile("C:\\Users\\1026524517\\Desktop\\global_variable.txt");

            if (dataFile.open(QFile::ReadOnly|QIODevice::Text))
            {
                QTextStream data(&dataFile);
                QStringList fonts;
                QString line;
                while (!data.atEnd())//逐行读取文本，并去除每行的回车
                        {line = data.readLine();
                        line.remove('\n');
                        fonts<<line;}
                 ui->listWidget->addItems(fonts);//把各行添加到listwidget
            }
}
void search::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    this->close();
}
void search::on_listWidget_doubleClicked(const QModelIndex &index)
{
    ui->listWidget_2->clear();
    QString variablename=index.data().toString();
    int p=0;

    QFile outFile("C:\\Users\\1026524517\\Desktop\\out.txt");
    if (outFile.open(QFile::ReadOnly|QIODevice::Text))
    {
        QTextStream outdata(&outFile);
        QStringList outfonts;
        QString outline;
        while (!outdata.atEnd())//逐行读取文本，并去除每行的回车
                {outline = outdata.readLine();
                outline.remove('\n');
                if(p==1)
                {
                    outfonts<<outline;
                    p=0;
                    continue;
                }
                if(outline==variablename)
                {
                    p=1;
                    continue;
                }
                    }
        //删除重复的调用函数
            for (int i = 0; i < outfonts.count(); i++)
            {
                for (int k = i + 1; k <  outfonts.count(); k++)
                {
                    if ( outfonts.at(i) ==  outfonts.at(k))
                    {
                        outfonts.removeAt(k);
                        k--;
                    }
                }
            }

         ui->listWidget_2->addItems(outfonts);//把各行添加到listwidget
    }
}

search::~search()
{
    delete ui;
}
