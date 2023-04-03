/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServer
{
public:
    QLineEdit *ip_edit;
    QLineEdit *port_edit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *TcpServer)
    {
        if (TcpServer->objectName().isEmpty())
            TcpServer->setObjectName(QString::fromUtf8("TcpServer"));
        TcpServer->resize(489, 289);
        TcpServer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ip_edit = new QLineEdit(TcpServer);
        ip_edit->setObjectName(QString::fromUtf8("ip_edit"));
        ip_edit->setGeometry(QRect(180, 50, 150, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ip_edit->setFont(font);
        port_edit = new QLineEdit(TcpServer);
        port_edit->setObjectName(QString::fromUtf8("port_edit"));
        port_edit->setGeometry(QRect(180, 120, 150, 25));
        port_edit->setFont(font);
        pushButton = new QPushButton(TcpServer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 200, 141, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(TcpServer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 100, 25));
        label->setFont(font);
        label_2 = new QLabel(TcpServer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 100, 25));
        label_2->setFont(font);

        retranslateUi(TcpServer);

        QMetaObject::connectSlotsByName(TcpServer);
    } // setupUi

    void retranslateUi(QWidget *TcpServer)
    {
        TcpServer->setWindowTitle(QCoreApplication::translate("TcpServer", "TcpServer", nullptr));
        pushButton->setText(QCoreApplication::translate("TcpServer", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        label->setText(QCoreApplication::translate("TcpServer", "\350\257\267\350\276\223\345\205\245IP\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("TcpServer", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpServer: public Ui_TcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
