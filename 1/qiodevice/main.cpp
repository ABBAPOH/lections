#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QDataStream>
#include <qbuffer.h>

void do_work(QIODevice *device)
{
    if (!device->open(QIODevice::ReadOnly)) {
        qWarning() << "Can't open device";
        return;
    }

    QByteArray data = device->readAll();
    qDebug() << data;
}

int main(int argc, char *argv[])
{
    QFile file("/Users/arch/admin.txt");
    if (file.size() < 1024*1024) {
        QByteArray data = file.readAll();
        QBuffer buf(&data);
        do_work(&buf);
    } else {
        do_work(&file);
    }
    return 0;
}
