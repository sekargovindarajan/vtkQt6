/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qvtkopenglnativewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVTKOpenGLNativeWidget *openGLWidget;
    QPushButton *drawSphere_button;
    QWidget *layoutWidget;
    QFormLayout *formLayoutSphere;
    QLabel *labelR;
    QDoubleSpinBox *doubleSpinBoxR;
    QLabel *labelG;
    QDoubleSpinBox *doubleSpinBoxG;
    QLabel *labelB;
    QDoubleSpinBox *doubleSpinBoxB;
    QWidget *layoutWidget_2;
    QFormLayout *formLayoutBackground;
    QLabel *labelR_bgc;
    QDoubleSpinBox *doubleSpinBoxR_bgc;
    QLabel *labelG_bgc;
    QDoubleSpinBox *doubleSpinBoxG_bgc;
    QLabel *labelB_bgc;
    QDoubleSpinBox *doubleSpinBoxB_bgc;
    QLabel *label;
    QFrame *line;
    QPushButton *colorButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(838, 602);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openGLWidget = new QVTKOpenGLNativeWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(115, 10, 711, 531));
        drawSphere_button = new QPushButton(centralwidget);
        drawSphere_button->setObjectName(QString::fromUtf8("drawSphere_button"));
        drawSphere_button->setGeometry(QRect(0, 430, 111, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setEnabled(false);
        layoutWidget->setGeometry(QRect(20, 310, 71, 85));
        formLayoutSphere = new QFormLayout(layoutWidget);
        formLayoutSphere->setObjectName(QString::fromUtf8("formLayoutSphere"));
        formLayoutSphere->setContentsMargins(0, 0, 0, 0);
        labelR = new QLabel(layoutWidget);
        labelR->setObjectName(QString::fromUtf8("labelR"));
        labelR->setEnabled(false);

        formLayoutSphere->setWidget(0, QFormLayout::LabelRole, labelR);

        doubleSpinBoxR = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxR->setObjectName(QString::fromUtf8("doubleSpinBoxR"));
        doubleSpinBoxR->setEnabled(false);
        doubleSpinBoxR->setWrapping(true);
        doubleSpinBoxR->setMaximum(1.000000000000000);
        doubleSpinBoxR->setSingleStep(0.050000000000000);
        doubleSpinBoxR->setValue(1.000000000000000);

        formLayoutSphere->setWidget(0, QFormLayout::FieldRole, doubleSpinBoxR);

        labelG = new QLabel(layoutWidget);
        labelG->setObjectName(QString::fromUtf8("labelG"));
        labelG->setEnabled(false);

        formLayoutSphere->setWidget(1, QFormLayout::LabelRole, labelG);

        doubleSpinBoxG = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxG->setObjectName(QString::fromUtf8("doubleSpinBoxG"));
        doubleSpinBoxG->setEnabled(false);
        doubleSpinBoxG->setWrapping(true);
        doubleSpinBoxG->setMaximum(1.000000000000000);
        doubleSpinBoxG->setSingleStep(0.050000000000000);
        doubleSpinBoxG->setValue(1.000000000000000);

        formLayoutSphere->setWidget(1, QFormLayout::FieldRole, doubleSpinBoxG);

        labelB = new QLabel(layoutWidget);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setEnabled(false);

        formLayoutSphere->setWidget(2, QFormLayout::LabelRole, labelB);

        doubleSpinBoxB = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxB->setObjectName(QString::fromUtf8("doubleSpinBoxB"));
        doubleSpinBoxB->setEnabled(false);
        doubleSpinBoxB->setWrapping(true);
        doubleSpinBoxB->setMaximum(1.000000000000000);
        doubleSpinBoxB->setSingleStep(0.050000000000000);
        doubleSpinBoxB->setValue(1.000000000000000);

        formLayoutSphere->setWidget(2, QFormLayout::FieldRole, doubleSpinBoxB);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 90, 71, 85));
        formLayoutBackground = new QFormLayout(layoutWidget_2);
        formLayoutBackground->setObjectName(QString::fromUtf8("formLayoutBackground"));
        formLayoutBackground->setContentsMargins(0, 0, 0, 0);
        labelR_bgc = new QLabel(layoutWidget_2);
        labelR_bgc->setObjectName(QString::fromUtf8("labelR_bgc"));

        formLayoutBackground->setWidget(0, QFormLayout::LabelRole, labelR_bgc);

        doubleSpinBoxR_bgc = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBoxR_bgc->setObjectName(QString::fromUtf8("doubleSpinBoxR_bgc"));
        doubleSpinBoxR_bgc->setWrapping(true);
        doubleSpinBoxR_bgc->setMaximum(1.000000000000000);
        doubleSpinBoxR_bgc->setSingleStep(0.050000000000000);
        doubleSpinBoxR_bgc->setValue(0.500000000000000);

        formLayoutBackground->setWidget(0, QFormLayout::FieldRole, doubleSpinBoxR_bgc);

        labelG_bgc = new QLabel(layoutWidget_2);
        labelG_bgc->setObjectName(QString::fromUtf8("labelG_bgc"));

        formLayoutBackground->setWidget(1, QFormLayout::LabelRole, labelG_bgc);

        doubleSpinBoxG_bgc = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBoxG_bgc->setObjectName(QString::fromUtf8("doubleSpinBoxG_bgc"));
        doubleSpinBoxG_bgc->setWrapping(true);
        doubleSpinBoxG_bgc->setMaximum(1.000000000000000);
        doubleSpinBoxG_bgc->setSingleStep(0.050000000000000);
        doubleSpinBoxG_bgc->setValue(0.500000000000000);

        formLayoutBackground->setWidget(1, QFormLayout::FieldRole, doubleSpinBoxG_bgc);

        labelB_bgc = new QLabel(layoutWidget_2);
        labelB_bgc->setObjectName(QString::fromUtf8("labelB_bgc"));

        formLayoutBackground->setWidget(2, QFormLayout::LabelRole, labelB_bgc);

        doubleSpinBoxB_bgc = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBoxB_bgc->setObjectName(QString::fromUtf8("doubleSpinBoxB_bgc"));
        doubleSpinBoxB_bgc->setWrapping(true);
        doubleSpinBoxB_bgc->setMaximum(1.000000000000000);
        doubleSpinBoxB_bgc->setSingleStep(0.050000000000000);
        doubleSpinBoxB_bgc->setValue(0.500000000000000);

        formLayoutBackground->setWidget(2, QFormLayout::FieldRole, doubleSpinBoxB_bgc);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 71, 20));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 240, 91, 20));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        colorButton = new QPushButton(centralwidget);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setGeometry(QRect(0, 400, 111, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 838, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qt6+Vtk9 First App", nullptr));
        drawSphere_button->setText(QCoreApplication::translate("MainWindow", "Draw Sphere", nullptr));
        labelR->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        labelG->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        labelB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        labelR_bgc->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        labelG_bgc->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        labelB_bgc->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Background", nullptr));
        colorButton->setText(QCoreApplication::translate("MainWindow", "Color Sphere", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
