//#include <QCoreApplication>
//#include <QDebug>
#include <QtWidgets/QApplication>
#include <QSurfaceFormat>

#include <MainWindow.h>
#include <QVTKOpenGLNativeWidget.h>

int main (int argc, char * argv[]) {
  QApplication app(argc, argv);
  //qDebug() << "Hello World from App!";
  QSurfaceFormat::setDefaultFormat(QVTKOpenGLNativeWidget::defaultFormat());

  MainWindow mainWindow;
  mainWindow.show();

  return app.exec();
}