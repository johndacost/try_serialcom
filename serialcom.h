#ifndef SERIALCOM_H
#define SERIALCOM_H

#include <QObject>
#include <QtSerialPort/QSerialPort>

class SerialCom : public QObject
{
    Q_OBJECT
public:
    explicit SerialCom(QObject *parent = 0);

signals:

public slots:


private:
    QSerialPort *serial;
    QStringList listPort;
    QString serialsName;
    void ConfigPort();
};

#endif // SERIALCOM_H
