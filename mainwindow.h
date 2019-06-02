#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QtOpenGL/qgl.h>
#include <GL/glu.h>
#include "glwidgetcpp.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButtonQuit_clicked();

    void on_doubleSpinBoxX_valueChanged(double arg1);

    void on_doubleSpinBoxY_valueChanged(double arg1);

    void on_doubleSpinBoxZ_valueChanged(double arg1);

    void on_doubleSpinBoxRadius_valueChanged(double arg1);

    void on_checkBoxWireframe_clicked(bool checked);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

