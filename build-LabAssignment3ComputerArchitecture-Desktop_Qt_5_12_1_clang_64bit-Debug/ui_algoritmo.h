/********************************************************************************
** Form generated from reading UI file 'algoritmo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGORITMO_H
#define UI_ALGORITMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Algoritmo
{
public:
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLineEdit *mediaLineEdit;
    QPushButton *seleccionarpushButton;
    QPushButton *pushButton;

    void setupUi(QWidget *Algoritmo)
    {
        if (Algoritmo->objectName().isEmpty())
            Algoritmo->setObjectName(QString::fromUtf8("Algoritmo"));
        Algoritmo->resize(551, 400);
        formLayout = new QFormLayout(Algoritmo);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(Algoritmo);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit = new QLineEdit(Algoritmo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(Algoritmo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(Algoritmo);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(Algoritmo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(Algoritmo);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(Algoritmo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(Algoritmo);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(Algoritmo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(Algoritmo);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label = new QLabel(Algoritmo);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(8, QFormLayout::LabelRole, label);

        mediaLineEdit = new QLineEdit(Algoritmo);
        mediaLineEdit->setObjectName(QString::fromUtf8("mediaLineEdit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, mediaLineEdit);

        seleccionarpushButton = new QPushButton(Algoritmo);
        seleccionarpushButton->setObjectName(QString::fromUtf8("seleccionarpushButton"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, seleccionarpushButton);

        pushButton = new QPushButton(Algoritmo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(10, QFormLayout::SpanningRole, pushButton);


        retranslateUi(Algoritmo);

        QMetaObject::connectSlotsByName(Algoritmo);
    } // setupUi

    void retranslateUi(QWidget *Algoritmo)
    {
        Algoritmo->setWindowTitle(QApplication::translate("Algoritmo", "Algoritmo Ordenacion", nullptr));
        label_6->setText(QApplication::translate("Algoritmo", "Ejecucion 1", nullptr));
        label_2->setText(QApplication::translate("Algoritmo", "Ejecucion 2", nullptr));
        label_3->setText(QApplication::translate("Algoritmo", "Ejecucion 3", nullptr));
        label_4->setText(QApplication::translate("Algoritmo", "Ejecucion 4", nullptr));
        label_5->setText(QApplication::translate("Algoritmo", "Ejecucion 5", nullptr));
        label->setText(QApplication::translate("Algoritmo", "Media", nullptr));
        seleccionarpushButton->setText(QApplication::translate("Algoritmo", "Seleccionar Archivo/Ejecutar", nullptr));
        pushButton->setText(QApplication::translate("Algoritmo", "Media", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Algoritmo: public Ui_Algoritmo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORITMO_H
