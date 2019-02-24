/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

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

class Ui_search
{
public:
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QStringLiteral("search"));
        search->resize(575, 593);
        listWidget = new QListWidget(search);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 211, 531));
        listWidget_2 = new QListWidget(search);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(240, 40, 211, 531));
        pushButton = new QPushButton(search);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 40, 93, 28));
        pushButton_2 = new QPushButton(search);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 80, 93, 28));
        label = new QLabel(search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(search);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 10, 141, 16));

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QApplication::translate("search", "Dialog", 0));
        pushButton->setText(QApplication::translate("search", "\346\237\245\350\257\242", 0));
        pushButton_2->setText(QApplication::translate("search", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("search", "\345\217\230\351\207\217\345\210\227\350\241\250", 0));
        label_2->setText(QApplication::translate("search", "\350\260\203\347\224\250\350\257\245\345\217\230\351\207\217\347\232\204\345\207\275\346\225\260", 0));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
