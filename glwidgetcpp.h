#ifndef GLWIDGETCPP_H
#define GLWIDGETCPP_H

#include <QtOpenGL/QGLWidget>
#include <GL/glut.h>
#include <QTimer>
#include<GL/glu.h>
class glwidgetcpp : public QGLWidget
{
    Q_OBJECT
public:
    explicit glwidgetcpp(QWidget * parent = 0);

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

    int R;
    double x,y,z;
    bool wired;

    float ang;
private:
    QTimer timer;
};

#endif // GLWIDGETCPP_H
