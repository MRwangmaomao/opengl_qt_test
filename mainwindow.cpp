#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "glwidgetcpp.h"
#include <GL/glu.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonQuit_clicked()
{
    this->close();
}

void MainWindow::on_doubleSpinBoxX_valueChanged(double arg1)
{
    this->ui->openGLWidget->x=arg1;
}

void MainWindow::on_doubleSpinBoxY_valueChanged(double arg1)
{
    ui->openGLWidget->y=arg1;
}

void MainWindow::on_doubleSpinBoxZ_valueChanged(double arg1)
{
    ui->openGLWidget->z=arg1;
}

void MainWindow::on_doubleSpinBoxRadius_valueChanged(double arg1)
{
    ui->openGLWidget->R=arg1;
}

void MainWindow::on_checkBoxWireframe_clicked(bool checked)
{
    this->ui->openGLWidget->wired = checked;
}
