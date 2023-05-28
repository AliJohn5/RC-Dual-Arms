/********************************************************************************
** Form generated from reading UI file 'mainwindow4.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW4_H
#define UI_MAINWINDOW4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mainwindow4.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow4
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    MainWindow4::CustomLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow4)
    {
        if (MainWindow4->objectName().isEmpty())
            MainWindow4->setObjectName(QString::fromUtf8("MainWindow4"));
        MainWindow4->resize(800, 600);
        centralwidget = new QWidget(MainWindow4);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new MainWindow4::CustomLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(verticalLayout_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-width: 2px;\n"
"border-style: outset;\n"
"border-color:#8E3B35;\n"
"    background-color: #808080; /* Cornflower blue */\n"
"    color: #000000; /* White */\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px;}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#8E3B35;\n"
"    border-style: inset;\n"
"}"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow4);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow4->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow4);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow4->setStatusBar(statusbar);

        retranslateUi(MainWindow4);

        QMetaObject::connectSlotsByName(MainWindow4);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow4)
    {
        MainWindow4->setWindowTitle(QApplication::translate("MainWindow4", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_9->setText(QApplication::translate("MainWindow4", "X  : ", nullptr));
        label_6->setText(QString());
        label_11->setText(QApplication::translate("MainWindow4", "Y  : ", nullptr));
        label_7->setText(QString());
        label_10->setText(QApplication::translate("MainWindow4", "Z  : ", nullptr));
        label_8->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow4", "publish to control", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow4: public Ui_MainWindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW4_H
