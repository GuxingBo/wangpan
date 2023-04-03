#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QWidget>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpServer; }
QT_END_NAMESPACE

class TcpServer : public QWidget
{
    Q_OBJECT

public:
    TcpServer(QWidget *parent = nullptr);
    ~TcpServer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TcpServer *ui;
};
#endif // TCPSERVER_H
