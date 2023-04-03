/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClient
{
public:
    QPushButton *pushButton;
    QLineEdit *ip_edit;
    QLineEdit *port_edit;
    QPushButton *login_pb;
    QLineEdit *pwd_le;
    QLabel *pwd_lb;
    QLineEdit *name_le;
    QLabel *name_lb;
    QPushButton *regist_pb;
    QLabel *label_image;
    QLabel *label_text;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName(QString::fromUtf8("TcpClient"));
        TcpClient->resize(850, 500);
        TcpClient->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(TcpClient);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 140, 93, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);"));
        ip_edit = new QLineEdit(TcpClient);
        ip_edit->setObjectName(QString::fromUtf8("ip_edit"));
        ip_edit->setGeometry(QRect(550, 120, 150, 25));
        ip_edit->setFont(font);
        port_edit = new QLineEdit(TcpClient);
        port_edit->setObjectName(QString::fromUtf8("port_edit"));
        port_edit->setGeometry(QRect(550, 170, 150, 25));
        port_edit->setFont(font);
        login_pb = new QPushButton(TcpClient);
        login_pb->setObjectName(QString::fromUtf8("login_pb"));
        login_pb->setGeometry(QRect(510, 380, 200, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        login_pb->setFont(font1);
        login_pb->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);"));
        pwd_le = new QLineEdit(TcpClient);
        pwd_le->setObjectName(QString::fromUtf8("pwd_le"));
        pwd_le->setGeometry(QRect(550, 300, 200, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        pwd_le->setFont(font2);
        pwd_le->setEchoMode(QLineEdit::Password);
        pwd_lb = new QLabel(TcpClient);
        pwd_lb->setObjectName(QString::fromUtf8("pwd_lb"));
        pwd_lb->setGeometry(QRect(430, 300, 100, 30));
        pwd_lb->setFont(font2);
        name_le = new QLineEdit(TcpClient);
        name_le->setObjectName(QString::fromUtf8("name_le"));
        name_le->setGeometry(QRect(550, 240, 200, 30));
        name_le->setFont(font2);
        name_lb = new QLabel(TcpClient);
        name_lb->setObjectName(QString::fromUtf8("name_lb"));
        name_lb->setGeometry(QRect(430, 240, 100, 30));
        name_lb->setFont(font2);
        regist_pb = new QPushButton(TcpClient);
        regist_pb->setObjectName(QString::fromUtf8("regist_pb"));
        regist_pb->setGeometry(QRect(520, 440, 190, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        regist_pb->setFont(font3);
        regist_pb->setFlat(true);
        label_image = new QLabel(TcpClient);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(0, 0, 400, 500));
        label_text = new QLabel(TcpClient);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setGeometry(QRect(550, 30, 160, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        label_text->setFont(font4);
        label = new QLabel(TcpClient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 120, 100, 25));
        label->setFont(font);
        label_2 = new QLabel(TcpClient);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 170, 100, 25));
        label_2->setFont(font);
        pushButton_2 = new QPushButton(TcpClient);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(820, 0, 30, 30));
        pushButton_2->setFlat(true);

        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QWidget *TcpClient)
    {
        TcpClient->setWindowTitle(QCoreApplication::translate("TcpClient", "TcpClient", nullptr));
        pushButton->setText(QCoreApplication::translate("TcpClient", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        login_pb->setText(QCoreApplication::translate("TcpClient", "\347\241\256\350\256\244\347\231\273\345\275\225", nullptr));
        pwd_le->setText(QString());
        pwd_lb->setText(QCoreApplication::translate("TcpClient", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        name_le->setText(QString());
        name_lb->setText(QCoreApplication::translate("TcpClient", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        regist_pb->setText(QCoreApplication::translate("TcpClient", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\202\271\345\207\273\346\263\250\345\206\214", nullptr));
        label_image->setText(QString());
        label_text->setText(QCoreApplication::translate("TcpClient", "\346\254\242\350\277\216\344\275\277\347\224\250\347\275\221\347\233\230", nullptr));
        label->setText(QCoreApplication::translate("TcpClient", "\350\257\267\350\276\223\345\205\245IP\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("TcpClient", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\345\217\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TcpClient", "\342\235\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
