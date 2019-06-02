#include "mainwindow.h"
#include <QApplication>
#include "glwidgetcpp.h"
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <QtOpenGL>
#include <QtOpenGL/qgl.h>

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
