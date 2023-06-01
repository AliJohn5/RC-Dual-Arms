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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
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
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    MainWindow4::CustomLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_3;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *take_first;
    QPushButton *take_second;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QFrame *line_3;
    QPlainTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow4)
    {
        if (MainWindow4->objectName().isEmpty())
            MainWindow4->setObjectName(QString::fromUtf8("MainWindow4"));
        MainWindow4->resize(835, 583);
        centralwidget = new QWidget(MainWindow4);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setBaseSize(QSize(0, 0));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Raised);
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(10);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new MainWindow4::CustomLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        horizontalLayout_7->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        horizontalLayout_7->addWidget(label_2);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(widget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_4->addWidget(lineEdit);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        line_2 = new QFrame(widget1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_6->addWidget(label_9);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_6->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_5->addWidget(label_11);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_5->addWidget(label_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_4->addWidget(label_10);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        take_first = new QPushButton(widget1);
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

        horizontalLayout_3->addWidget(take_first);

        take_second = new QPushButton(widget1);
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

        horizontalLayout_3->addWidget(take_second);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(widget1);
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

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line_3 = new QFrame(widget1);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        textEdit = new QPlainTextEdit(widget1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit{\n"
"background-color: rgb(85, 87, 83);\n"
"color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"padding: 10px;\n"
"}"));

        horizontalLayout->addWidget(textEdit);


        horizontalLayout_8->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        splitter->addWidget(widget1);

        verticalLayout_6->addWidget(splitter);

        MainWindow4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow4);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 835, 22));
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
        take_first->setText(QApplication::translate("MainWindow4", "take first position", nullptr));
        take_second->setText(QApplication::translate("MainWindow4", "take second position", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow4", "publish to control", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow4", "switch kinect on", nullptr));
        pushButton->setText(QApplication::translate("MainWindow4", "switch zero on", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow4: public Ui_MainWindow4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW4_H
