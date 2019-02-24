#ifndef LIST_H
#define LIST_H

#include <QDialog>
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
#include <QApplication>
#include <QFileDialog>
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
class List;
}

class List : public QDialog
{
    Q_OBJECT

public:
    explicit List(QWidget *parent = 0);
    ~List();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::List *ui;
};

#endif // LIST_H
