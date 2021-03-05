#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include<QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serialPort = new QSerialPort(this);

    QStringList serialNamePort;

    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortRead()));

    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) {
       serialNamePort<<info.portName();
    }
    ui->portNumBX->addItems(serialNamePort);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::serialPortRead()
{
    QString buf;
    buf = QString(serialPort->readAll());
    ui->receiveEdit->appendPlainText(buf);
}

void MainWindow::on_sendBt_clicked()
{
   serialPort->write(ui->sendEdit->text().toLocal8Bit().data());
}

void MainWindow::on_OpenBt_clicked()
{
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity   checkBits;

    if(ui->BaudRateBX->currentText()=="9600")
    {
        baudRate = QSerialPort::Baud9600;
    }
    else if(ui->BaudRateBX->currentText()=="115200")
    {
        baudRate = QSerialPort::Baud115200;
    }

    if(ui->DataBitsBX->currentText() == "5")
    {
        dataBits = QSerialPort::Data5;
    }
    else if(ui->DataBitsBX->currentText() == "6")
    {
        dataBits = QSerialPort::Data6;
    }
    else if(ui->DataBitsBX->currentText() == "7")
    {
        dataBits = QSerialPort::Data7;
    }
    else if(ui->DataBitsBX->currentText() == "8")
    {
        dataBits = QSerialPort::Data8;
    }

    if(ui->StopBitsBX->currentText() == "1")
    {

        stopBits = QSerialPort::OneStop;
    }
    else if(ui->StopBitsBX->currentText() == "1.5")
    {

        stopBits = QSerialPort::OneAndHalfStop;
    }
    else if(ui->StopBitsBX->currentText() == "2")
    {

        stopBits = QSerialPort::TwoStop;
    }

    if(ui->checkBitBX->currentText() == "none")
    {
        checkBits = QSerialPort::NoParity;
    }

    serialPort->setPortName(ui->portNumBX->currentText());
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);


    if(serialPort->open(QIODevice::ReadWrite) == true)
    {
           QMessageBox::information(this,"提示","成功");
    }
    else
    {
        QMessageBox::critical(this,"提示","失败");
    }

}

void MainWindow::on_claseBt_clicked()
{
    serialPort->close();
}




