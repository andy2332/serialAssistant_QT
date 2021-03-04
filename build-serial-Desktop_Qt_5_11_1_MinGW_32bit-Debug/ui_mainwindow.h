/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *portNumBX;
    QComboBox *BaudRateBX;
    QComboBox *DataBitsBX;
    QComboBox *StopBitsBX;
    QComboBox *checkBitBX;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *OpenBt;
    QPushButton *claseBt;
    QPushButton *clearBt;
    QPushButton *sendBt;
    QPlainTextEdit *receiveEdit;
    QLineEdit *sendEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1631, 922);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        portNumBX = new QComboBox(centralWidget);
        portNumBX->setObjectName(QStringLiteral("portNumBX"));
        portNumBX->setGeometry(QRect(31, 543, 87, 21));
        BaudRateBX = new QComboBox(centralWidget);
        BaudRateBX->addItem(QString());
        BaudRateBX->addItem(QString());
        BaudRateBX->setObjectName(QStringLiteral("BaudRateBX"));
        BaudRateBX->setGeometry(QRect(31, 603, 87, 21));
        DataBitsBX = new QComboBox(centralWidget);
        DataBitsBX->addItem(QString());
        DataBitsBX->addItem(QString());
        DataBitsBX->addItem(QString());
        DataBitsBX->addItem(QString());
        DataBitsBX->setObjectName(QStringLiteral("DataBitsBX"));
        DataBitsBX->setGeometry(QRect(31, 663, 87, 21));
        StopBitsBX = new QComboBox(centralWidget);
        StopBitsBX->addItem(QString());
        StopBitsBX->addItem(QString());
        StopBitsBX->addItem(QString());
        StopBitsBX->setObjectName(QStringLiteral("StopBitsBX"));
        StopBitsBX->setGeometry(QRect(31, 723, 87, 21));
        checkBitBX = new QComboBox(centralWidget);
        checkBitBX->addItem(QString());
        checkBitBX->setObjectName(QStringLiteral("checkBitBX"));
        checkBitBX->setGeometry(QRect(31, 783, 87, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(154, 543, 45, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(154, 603, 45, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(154, 663, 45, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(154, 723, 45, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(154, 783, 45, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 790, 1292, 48));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(250);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        OpenBt = new QPushButton(layoutWidget);
        OpenBt->setObjectName(QStringLiteral("OpenBt"));

        horizontalLayout->addWidget(OpenBt);

        claseBt = new QPushButton(layoutWidget);
        claseBt->setObjectName(QStringLiteral("claseBt"));

        horizontalLayout->addWidget(claseBt);

        clearBt = new QPushButton(layoutWidget);
        clearBt->setObjectName(QStringLiteral("clearBt"));

        horizontalLayout->addWidget(clearBt);

        sendBt = new QPushButton(layoutWidget);
        sendBt->setObjectName(QStringLiteral("sendBt"));

        horizontalLayout->addWidget(sendBt);

        receiveEdit = new QPlainTextEdit(centralWidget);
        receiveEdit->setObjectName(QStringLiteral("receiveEdit"));
        receiveEdit->setGeometry(QRect(20, 10, 1561, 461));
        sendEdit = new QLineEdit(centralWidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        sendEdit->setGeometry(QRect(280, 550, 1311, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1631, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        BaudRateBX->setItemText(0, QApplication::translate("MainWindow", "9600", nullptr));
        BaudRateBX->setItemText(1, QApplication::translate("MainWindow", "115200", nullptr));

        DataBitsBX->setItemText(0, QApplication::translate("MainWindow", "5", nullptr));
        DataBitsBX->setItemText(1, QApplication::translate("MainWindow", "6", nullptr));
        DataBitsBX->setItemText(2, QApplication::translate("MainWindow", "7", nullptr));
        DataBitsBX->setItemText(3, QApplication::translate("MainWindow", "8", nullptr));

        StopBitsBX->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        StopBitsBX->setItemText(1, QApplication::translate("MainWindow", "1.5", nullptr));
        StopBitsBX->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        checkBitBX->setItemText(0, QApplication::translate("MainWindow", "none", nullptr));

        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        OpenBt->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        claseBt->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        clearBt->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        sendBt->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
