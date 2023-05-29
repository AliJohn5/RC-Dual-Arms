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
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    MainWindow4::CustomLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_15;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_21;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_27;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *take_first;
    QPushButton *take_second;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow4)
    {
        if (MainWindow4->objectName().isEmpty())
            MainWindow4->setObjectName(QString::fromUtf8("MainWindow4"));
        MainWindow4->resize(800, 600);
        centralwidget = new QWidget(MainWindow4);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
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

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_2->addWidget(label_9);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_6->addWidget(label_11);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_6->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_7->addWidget(label_10);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_7->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_3->addWidget(label_15);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_3->addWidget(label_16);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_4->addWidget(label_21);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_4->addWidget(label_23);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_5->addWidget(label_27);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_5->addWidget(label_22);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        take_first = new QPushButton(centralwidget);
        take_first->setObjectName(QString::fromUtf8("take_first"));
        take_first->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_11->addWidget(take_first);

        take_second = new QPushButton(centralwidget);
        take_second->setObjectName(QString::fromUtf8("take_second"));
        take_second->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_11->addWidget(take_second);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
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

        horizontalLayout_9->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_10);


        verticalLayout_6->addLayout(verticalLayout_5);

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
        label_9->setText(QApplication::translate("MainWindow4", "X1: ", nullptr));
        label_6->setText(QString());
        label_11->setText(QApplication::translate("MainWindow4", "Y1: ", nullptr));
        label_7->setText(QString());
        label_10->setText(QApplication::translate("MainWindow4", "Z1: ", nullptr));
        label_8->setText(QString());
        label_15->setText(QApplication::translate("MainWindow4", "X2: ", nullptr));
        label_16->setText(QString());
        label_21->setText(QApplication::translate("MainWindow4", "Y2: ", nullptr));
        label_23->setText(QString());
        label_27->setText(QApplication::translate("MainWindow4", "Z2:", nullptr));
        label_22->setText(QString());
        take_first->setText(QApplication::translate("MainWindow4", "take first position", nullptr));
        take_second->setText(QApplication::translate("MainWindow4", "take second position", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow4", "publish to control", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow4: public Ui_MainWindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW4_H
