#include <QGuiApplication>
#include <QDebug>

#include "octree.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QImage img(":/image.png");
    OcTree tree(img);
    QRgb *palette = tree.palette();
    for (int i = 0; i < 256; i++)
        qDebug() << QColor(palette[i]);

    return 0;
}
