#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkRenderer.h>
#include <QVTKInteractor.h>
#include <vtkInteractorStyle.h>
#include <vtkInteractorStyleSwitch.h>

template<typename T>
using vtkPtr = vtkSmartPointer<T>;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onDrawSphereClick();
    void onPickColor();

private:
    Ui::MainWindow *ui;

    vtkPtr<vtkGenericOpenGLRenderWindow> m_renderWindow;
    vtkPtr<vtkRenderer> m_renderer;
    vtkPtr<QVTKInteractor> m_interactor;
    vtkPtr<vtkInteractorStyleSwitch> m_interactorStyle;

    // state of Background and sphere colors
    float m_bgcR, m_bgcG, m_bgcB;
    float m_sphR, m_sphG, m_sphB;
};

#endif // MAINWINDOW_H
