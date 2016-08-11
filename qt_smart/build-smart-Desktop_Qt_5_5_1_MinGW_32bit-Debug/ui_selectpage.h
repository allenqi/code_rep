/********************************************************************************
** Form generated from reading UI file 'selectpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPAGE_H
#define UI_SELECTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectPage
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_5;

    void setupUi(QDialog *SelectPage)
    {
        if (SelectPage->objectName().isEmpty())
            SelectPage->setObjectName(QStringLiteral("SelectPage"));
        SelectPage->resize(800, 480);
        SelectPage->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/bg.png);"));
        pushButton_2 = new QPushButton(SelectPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 70, 201, 111));
        pushButton_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/woshiyi.png);"));
        pushButton_9 = new QPushButton(SelectPage);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(300, 290, 201, 111));
        pushButton_9->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/woshisan.png);"));
        pushButton_8 = new QPushButton(SelectPage);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(500, 290, 201, 111));
        pushButton_8->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/waidamen.png);"));
        pushButton_4 = new QPushButton(SelectPage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 180, 201, 111));
        pushButton_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/dixiashi.png);"));
        pushButton_3 = new QPushButton(SelectPage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 70, 201, 111));
        pushButton_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/cheku.png);"));
        pushButton_6 = new QPushButton(SelectPage);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(100, 180, 201, 111));
        pushButton_6->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/chufang.png);"));
        pushButton_7 = new QPushButton(SelectPage);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(100, 290, 201, 111));
        pushButton_7->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/waijing.png);"));
        pushButton = new QPushButton(SelectPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 70, 201, 111));
        pushButton->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/keting.png);"));
        pushButton_5 = new QPushButton(SelectPage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 180, 201, 111));
        pushButton_5->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/images/woshier.png);"));

        retranslateUi(SelectPage);

        QMetaObject::connectSlotsByName(SelectPage);
    } // setupUi

    void retranslateUi(QDialog *SelectPage)
    {
        SelectPage->setWindowTitle(QApplication::translate("SelectPage", "Dialog", 0));
        pushButton_2->setText(QString());
        pushButton_9->setText(QString());
        pushButton_8->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelectPage: public Ui_SelectPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPAGE_H
