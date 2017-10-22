#include "serialcom.h"
#include <QDebug>
#include <QSerialPortInfo>
#include <QMessageBox>

SerialCom::SerialCom(QObject *parent) : QObject(parent)
{
    serial = new QSerialPort(0);
    QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();

    foreach (QSerialPortInfo port, availablePorts)
    {
        listPort.append(port.portName());
    }

    qDebug() << listPort;

    serial->setPortName(listPort.first());

     if (!serial->open(QIODevice::ReadWrite)) {
         QMessageBox::critical(NULL, "Error Open", serial->errorString());

     }

     ConfigPort();
}

/**
 * @brief SerialCom::ConfigPort
 */
void SerialCom::ConfigPort()
{
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    serial->setRequestToSend(true);
}

