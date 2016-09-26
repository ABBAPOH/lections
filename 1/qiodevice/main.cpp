#include <QtCore/QCoreApplication>
#include <QtCore/QFile>
#include <QtCore/QDebug>
#include <QtCore/QBuffer>

int do_work(QIODevice *device)
{
    if (!device->open(QIODevice::ReadOnly)) {
        qWarning() << "Can't open device";
        return 1;
    }

    QByteArray data = device->readAll();
    qDebug() << data;
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        qDebug() << "Usage: qiodevice filename";
        return 0;
    }

    QFile file(QString::fromLocal8Bit(argv[1]));
    // If file is small, read it to the buffer
    if (file.size() < 10*1024*1024) {
        if (!file.open(QIODevice::ReadOnly)) {
            qWarning() << "Can't open file";
            return 1;
        }
        QByteArray data = file.readAll();
        QBuffer buf(&data);
        return do_work(&buf);
    } else {
        return do_work(&file);
    }
    return 0;
}
