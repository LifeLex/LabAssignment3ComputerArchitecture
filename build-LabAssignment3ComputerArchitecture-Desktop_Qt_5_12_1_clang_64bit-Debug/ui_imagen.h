/********************************************************************************
** Form generated from reading UI file 'imagen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEN_H
#define UI_IMAGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Imagen
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *tiempo1;
    QLineEdit *tiempo2;
    QLineEdit *tiempo3;
    QLineEdit *tiempo4;
    QLineEdit *tiempo5;
    QLabel *label_6;
    QLineEdit *mediaLineEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Imagen)
    {
        if (Imagen->objectName().isEmpty())
            Imagen->setObjectName(QString::fromUtf8("Imagen"));
        Imagen->resize(533, 355);
        groupBox = new QGroupBox(Imagen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 0, 471, 121));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 90, 451, 24));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 451, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 60, 451, 24));
        groupBox_2 = new QGroupBox(Imagen);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 130, 471, 211));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 59, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 59, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 59, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 59, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 150, 59, 16));
        tiempo1 = new QLineEdit(groupBox_2);
        tiempo1->setObjectName(QString::fromUtf8("tiempo1"));
        tiempo1->setGeometry(QRect(80, 30, 381, 24));
        tiempo2 = new QLineEdit(groupBox_2);
        tiempo2->setObjectName(QString::fromUtf8("tiempo2"));
        tiempo2->setGeometry(QRect(80, 60, 381, 24));
        tiempo3 = new QLineEdit(groupBox_2);
        tiempo3->setObjectName(QString::fromUtf8("tiempo3"));
        tiempo3->setGeometry(QRect(80, 90, 381, 24));
        tiempo4 = new QLineEdit(groupBox_2);
        tiempo4->setObjectName(QString::fromUtf8("tiempo4"));
        tiempo4->setGeometry(QRect(80, 120, 381, 24));
        tiempo5 = new QLineEdit(groupBox_2);
        tiempo5->setObjectName(QString::fromUtf8("tiempo5"));
        tiempo5->setGeometry(QRect(80, 150, 381, 24));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 180, 61, 21));
        mediaLineEdit = new QLineEdit(groupBox_2);
        mediaLineEdit->setObjectName(QString::fromUtf8("mediaLineEdit"));
        mediaLineEdit->setGeometry(QRect(80, 180, 113, 24));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 180, 80, 24));

        retranslateUi(Imagen);

        QMetaObject::connectSlotsByName(Imagen);
    } // setupUi

    void retranslateUi(QWidget *Imagen)
    {
        Imagen->setWindowTitle(QApplication::translate("Imagen", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Imagen", "Seleccionar y convertir", nullptr));
        pushButton->setText(QApplication::translate("Imagen", "Seleccionar y Convertir", nullptr));
        groupBox_2->setTitle(QApplication::translate("Imagen", "Tiempos de Ejecucion", nullptr));
        label->setText(QApplication::translate("Imagen", "Tiempo 1", nullptr));
        label_2->setText(QApplication::translate("Imagen", "Tiempo 2", nullptr));
        label_3->setText(QApplication::translate("Imagen", "Tiempo 3", nullptr));
        label_4->setText(QApplication::translate("Imagen", "Tiempo 4", nullptr));
        label_5->setText(QApplication::translate("Imagen", "Tiempo 5", nullptr));
        label_6->setText(QApplication::translate("Imagen", "Media", nullptr));
        pushButton_2->setText(QApplication::translate("Imagen", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Imagen: public Ui_Imagen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEN_H
