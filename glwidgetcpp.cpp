#include "glwidgetcpp.h"
#include <GL/glut.h>
#include <GL/glu.h>
glwidgetcpp::glwidgetcpp(QWidget * parent):QGLWidget (parent)
{
    this->R = 1;
    this->wired = false;
    this->ang = 0.5;
    x = 0;
    y = 0;
    z = 0;

    connect(&timer,SIGNAL(timeout()), this, SLOT(updateGL()));
    timer.start(16);
}

void glwidgetcpp::initializeGL(){

    glClearColor(0.2,0.2,0.2,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
}

void glwidgetcpp::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,5, 0,0,0  ,0,1,0);
    glTranslatef(x,y,z);
    ang+=0.5;
    glRotatef(ang,1,1,1);
    glColor3f(1,0,0);
    if(wired)
        glutWireSphere(R,30,30);
    else
        glutSolidSphere(R,30,30);
}

void glwidgetcpp::resizeGL(int w, int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0,(float)w/h,0.01,100.0);
    updateGL();
}

