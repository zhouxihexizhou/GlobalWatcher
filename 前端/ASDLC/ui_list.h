/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_List
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *List)
    {
        if (List->objectName().isEmpty())
            List->setObjectName(QStringLiteral("List"));
        List->resize(856, 542);
        label = new QLabel(List);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(List);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 10, 131, 16));
        pushButton = new QPushButton(List);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 80, 93, 28));
        textEdit = new QTextEdit(List);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 221, 481));
        textEdit_2 = new QTextEdit(List);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(250, 40, 461, 481));
        pushButton_2 = new QPushButton(List);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 40, 93, 28));

        retranslateUi(List);

        QMetaObject::connectSlotsByName(List);
    } // setupUi

    void retranslateUi(QDialog *List)
    {
        List->setWindowTitle(QApplication::translate("List", "Dialog", 0));
        label->setText(QApplication::translate("List", "\345\205\250\345\261\200\345\217\230\351\207\217", 0));
        label_2->setText(QApplication::translate("List", "\350\260\203\347\224\250\345\205\250\345\261\200\345\217\230\351\207\217\345\207\275\346\225\260", 0));
        pushButton->setText(QApplication::translate("List", "\350\277\224\345\233\236", 0));
        pushButton_2->setText(QApplication::translate("List", "\346\230\276\347\244\272", 0));
    } // retranslateUi

};

namespace Ui {
    class List: public Ui_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
