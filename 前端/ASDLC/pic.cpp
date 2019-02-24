#include "pic.h"
#include "ui_pic.h"

Pic::Pic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pic)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Count"));
}

Pic::~Pic()
{
    delete ui;
}




void Pic::on_pushButton_clicked()
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

void Pic::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    this->close();
}

void Pic::on_listWidget_doubleClicked(const QModelIndex &index)
{
    ui->listWidget_2->clear();
    QString variablename=index.data().toString();
    int i=0;
    QFile outFile("C:\\Users\\1026524517\\Desktop\\out.txt");
    if (outFile.open(QFile::ReadOnly|QIODevice::Text))
    {
        QTextStream outdata(&outFile);
        QStringList outfonts;
        QString outline;
        while (!outdata.atEnd())//逐行读取文本，并去除每行的回车
                {outline = outdata.readLine();
                outline.remove('\n');
                if(outline==variablename)
                {
                    i=i+1;
                    continue;
                }
                    }
        QString count=QString::number(i);
        outfonts<<count;
        ui->listWidget_2->addItems(outfonts);
    }
}
