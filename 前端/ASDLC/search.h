#ifndef SEARCH_H
#define SEARCH_H

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
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = 0);
    ~search();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::search *ui;
};

#endif // SEARCH_H





