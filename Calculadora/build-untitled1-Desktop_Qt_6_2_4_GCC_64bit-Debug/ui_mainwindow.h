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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *n1;
    QLabel *label_2;
    QDoubleSpinBox *n2;
    QHBoxLayout *horizontalLayout;
    QPushButton *sumar;
    QPushButton *restar;
    QPushButton *multiplicar;
    QPushButton *dividir;
    QSplitter *splitter;
    QLabel *label_3;
    QLabel *resultado;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(859, 645);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 30, 611, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        n1 = new QDoubleSpinBox(widget);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setMinimum(-100000000000000000.000000000000000);
        n1->setMaximum(100000000000000000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, n1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        n2 = new QDoubleSpinBox(widget);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setMinimum(-9999999999999999464902769475481793196872414789632.000000000000000);
        n2->setMaximum(9999999999999999438119489974413630815797154428513196965888.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, n2);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sumar = new QPushButton(widget);
        sumar->setObjectName(QString::fromUtf8("sumar"));

        horizontalLayout->addWidget(sumar);

        restar = new QPushButton(widget);
        restar->setObjectName(QString::fromUtf8("restar"));

        horizontalLayout->addWidget(restar);

        multiplicar = new QPushButton(widget);
        multiplicar->setObjectName(QString::fromUtf8("multiplicar"));

        horizontalLayout->addWidget(multiplicar);

        dividir = new QPushButton(widget);
        dividir->setObjectName(QString::fromUtf8("dividir"));

        horizontalLayout->addWidget(dividir);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter->addWidget(label_3);
        resultado = new QLabel(splitter);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        splitter->addWidget(resultado);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculadora Barata", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Numero 2", nullptr));
        sumar->setText(QCoreApplication::translate("MainWindow", "Suma", nullptr));
        restar->setText(QCoreApplication::translate("MainWindow", "Resta", nullptr));
        multiplicar->setText(QCoreApplication::translate("MainWindow", "Multiplicacion", nullptr));
        dividir->setText(QCoreApplication::translate("MainWindow", "DIvision", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Resultado", nullptr));
        resultado->setText(QCoreApplication::translate("MainWindow", "XXXXXXXXXXXXXXX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
