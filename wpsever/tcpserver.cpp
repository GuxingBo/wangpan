#include "tcpserver.h"
#include "ui_tcpserver.h"
#include <QByteArray>
#include <QDebug> // 调试
#include <QMessageBox> // 消息提示框
#include <QHostAddress>
#include "mytcpserver.h" // QTcpServer派生类实现监听和接收客户端的TCP连接

TcpServer::TcpServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TcpServer)
{
    ui->setupUi(this);
    DBOperate::getInstance().init(); // 连接数据库

}

TcpServer::~TcpServer()
{
    delete ui;
}



void TcpServer::on_pushButton_clicked()
{
    QString m_strIP = this->ui->ip_edit->text();
    QString m_usPort = this->ui->port_edit->text();
    MyTcpServer::getInstance().listen(QHostAddress(m_strIP),m_usPort.toUShort()); //监听
}
