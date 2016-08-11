/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "lzylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_4;
    LZYLineEdit *userLineEdit;
    LZYLineEdit *passwdLineEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(800, 480);
        Dialog->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/bg.png);"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 90, 371, 241));
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/denglubeijing.png);"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 240, 261, 35));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/dengluanniu.png);"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 290, 71, 16));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/jizhumima.png);"));
        userLineEdit = new LZYLineEdit(Dialog);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(270, 160, 261, 31));
        QFont font;
        font.setFamily(QStringLiteral("Abyssinica SIL"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        userLineEdit->setFont(font);
        userLineEdit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/images/yonghuming.png);\n"
"font: 14pt \"Abyssinica SIL\";"));
        userLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        passwdLineEdit = new LZYLineEdit(Dialog);
        passwdLineEdit->setObjectName(QStringLiteral("passwdLineEdit"));
        passwdLineEdit->setGeometry(QRect(270, 200, 261, 31));
        passwdLineEdit->setFont(font);
        passwdLineEdit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/images/mima.png);\n"
"font: 14pt \"Abyssinica SIL\";"));
        passwdLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        passwdLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QString());
        pushButton->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
