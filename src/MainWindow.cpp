#include <MainWindow.h>
#include "ui_mainwindow.h"

#include <QColorDialog>

#include <vtkSphereSource.h>
#include <vtkActor.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h> // for coloring the actor

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow),
  m_renderWindow(vtkPtr<vtkGenericOpenGLRenderWindow>::New()),
  m_renderer(vtkPtr<vtkRenderer>::New()),
  m_interactor(vtkPtr<QVTKInteractor>::New()),
  m_interactorStyle(vtkPtr<vtkInteractorStyleSwitch>::New()),
  m_sphR{1.0}, m_sphG{1.0}, m_sphB{1.0} {

  ui->setupUi(this);

  // Set up rendering (apparently this order matters!)
  m_renderWindow->AddRenderer(m_renderer);
  m_renderWindow->SetInteractor(m_interactor);
  ui->openGLWidget->setRenderWindow(m_renderWindow);
  m_interactor->SetInteractorStyle(m_interactorStyle);
  m_interactor->Initialize();

  // Set up background color
  m_bgcR = ui->doubleSpinBoxR_bgc->value();
  m_bgcG = ui->doubleSpinBoxG_bgc->value();
  m_bgcB = ui->doubleSpinBoxB_bgc->value();
  m_renderer->SetBackground(m_bgcR, m_bgcG, m_bgcB);

  // Set up UI connections
  QObject::connect(ui->drawSphere_button, &QPushButton::clicked,
    this, &MainWindow::onDrawSphereClick);
  QObject::connect(ui->colorButton, &QPushButton::clicked,
    this, &MainWindow::onPickColor);
  QObject::connect(ui->doubleSpinBoxR_bgc, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
    [=](double d){m_bgcR = d; m_renderer->SetBackground(m_bgcR, m_bgcG, m_bgcB); m_renderWindow->Render();});
  QObject::connect(ui->doubleSpinBoxG_bgc, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
    [=](double d){m_bgcG = d; m_renderer->SetBackground(m_bgcR, m_bgcG, m_bgcB); m_renderWindow->Render();});
  QObject::connect(ui->doubleSpinBoxB_bgc, QOverload<double>::of(&QDoubleSpinBox::valueChanged),
    [=](double d){m_bgcB = d; m_renderer->SetBackground(m_bgcR, m_bgcG, m_bgcB); m_renderWindow->Render();});
}

MainWindow::~MainWindow() {
  delete ui;
}

void
MainWindow::onDrawSphereClick() {

  // Create sphere and its properties
  vtkPtr<vtkSphereSource> sphereSource = vtkPtr<vtkSphereSource>::New();
  sphereSource->SetThetaResolution(12);
  sphereSource->SetPhiResolution(12);
  //sphereSource->SetEndPhi(135);
  sphereSource->SetEndTheta(315);
  sphereSource->SetLatLongTessellation(1);
  sphereSource->Update();

  // Create the actor where the sphere is rendered
  vtkPtr<vtkPolyDataMapper> sphereMapper = vtkPtr<vtkPolyDataMapper>::New();
  sphereMapper->SetInputData(sphereSource->GetOutput());
  vtkPtr<vtkActor> sphere = vtkPtr<vtkActor>::New();
  sphere->SetMapper(sphereMapper);

  // set the latest color as RGB %s
  sphere->GetProperty()->SetColor(m_sphR, m_sphG, m_sphB);

  // Add sphere actor to OpenGL
  m_renderer->AddViewProp(sphere);
  m_renderer->ResetCamera();
  m_renderWindow->Render();
}

void
MainWindow::onPickColor() {
  QColor color = QColorDialog::getColor(Qt::white, this,
    tr("Pick a color for the Sphere"), QColorDialog::DontUseNativeDialog);
  if (color.isValid()) {
    color.getRgbF(&m_sphR, &m_sphG, &m_sphB);
    this->onDrawSphereClick();
    ui->drawSphere_button->setDisabled(true);
  }
}