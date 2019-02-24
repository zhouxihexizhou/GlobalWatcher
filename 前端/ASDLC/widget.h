#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include "list.h"
#include "search.h"
#include "pic.h"
#include <QFileInfoList>
#include <QListWidgetItem>
#include <QDir>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QFileSystemModel>
#include <QFileDialog>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QFile>
#include <QIODevice>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <cstdlib>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void showFileInfoList(QFileInfoList list);


private slots:
    void on_pushButton_clicked();

    void on_treeView_doubleClicked(const QModelIndex &index);

private:
    Ui::Widget *ui;
    List *list=new List;
    search *Search=new search;
    Pic *pic=new Pic;
};

#endif // WIDGET_H
