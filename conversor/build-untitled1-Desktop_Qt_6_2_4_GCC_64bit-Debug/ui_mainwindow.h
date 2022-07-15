/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *resultado;
    QPushButton *boton;
    QLineEdit *dato;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 571, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        resultado = new QLabel(centralwidget);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(70, 490, 411, 51));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        resultado->setFont(font1);
        boton = new QPushButton(centralwidget);
        boton->setObjectName(QString::fromUtf8("boton"));
        boton->setGeometry(QRect(300, 340, 141, 61));
        QFont font2;
        font2.setPointSize(13);
        boton->setFont(font2);
        dato = new QLineEdit(centralwidget);
        dato->setObjectName(QString::fromUtf8("dato"));
        dato->setGeometry(QRect(120, 200, 511, 71));
        dato->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Convertir a horas, minutos y segundos", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingrese el tiempo expresado en segundos", nullptr));
        resultado->setText(QString());
        boton->setText(QCoreApplication::translate("MainWindow", "Convertir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
