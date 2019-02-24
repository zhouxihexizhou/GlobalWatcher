/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QTreeView *treeView;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1027, 623);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(870, 50, 121, 121));
        radioButton = new QRadioButton(groupBox);
        buttonGroup = new QButtonGroup(Widget);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 10, 115, 19));
        radioButton_2 = new QRadioButton(groupBox);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 30, 115, 19));
        radioButton_3 = new QRadioButton(groupBox);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 50, 115, 19));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 80, 93, 28));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 131, 16));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 50, 621, 541));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 20, 81, 16));
        treeView = new QTreeView(Widget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(30, 50, 181, 541));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("Widget", "\345\210\227\350\241\250", 0));
        radioButton_2->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0));
        radioButton_3->setText(QApplication::translate("Widget", "\350\260\203\347\224\250\346\254\241\346\225\260", 0));
        pushButton->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("Widget", "\346\272\220\351\241\271\347\233\256\346\226\207\344\273\266\345\210\227\350\241\250\357\274\232", 0));
        label_2->setText(QApplication::translate("Widget", "\346\226\207\344\273\266\345\206\205\345\256\271\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
