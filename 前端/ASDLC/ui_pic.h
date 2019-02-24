/********************************************************************************
** Form generated from reading UI file 'pic.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIC_H
#define UI_PIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pic
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Pic)
    {
        if (Pic->objectName().isEmpty())
            Pic->setObjectName(QStringLiteral("Pic"));
        Pic->resize(408, 576);
        pushButton = new QPushButton(Pic);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 80, 93, 28));
        pushButton_2 = new QPushButton(Pic);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 110, 93, 28));
        listWidget = new QListWidget(Pic);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 211, 531));
        listWidget_2 = new QListWidget(Pic);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(240, 30, 151, 31));
        label = new QLabel(Pic);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(Pic);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 10, 72, 15));

        retranslateUi(Pic);

        QMetaObject::connectSlotsByName(Pic);
    } // setupUi

    void retranslateUi(QDialog *Pic)
    {
        Pic->setWindowTitle(QApplication::translate("Pic", "Dialog", 0));
        pushButton->setText(QApplication::translate("Pic", "\346\230\276\347\244\272\345\217\230\351\207\217", 0));
        pushButton_2->setText(QApplication::translate("Pic", "\345\205\263\351\227\255", 0));
        label->setText(QApplication::translate("Pic", "\345\217\230\351\207\217\345\210\227\350\241\250", 0));
        label_2->setText(QApplication::translate("Pic", "\350\260\203\347\224\250\346\254\241\346\225\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Pic: public Ui_Pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIC_H
