#ifndef PIC_H
#define PIC_H

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
class Pic;
}

class Pic : public QDialog
{
    Q_OBJECT

public:
    explicit Pic(QWidget *parent = 0);
    ~Pic();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::Pic *ui;
};

#endif // PIC_H
