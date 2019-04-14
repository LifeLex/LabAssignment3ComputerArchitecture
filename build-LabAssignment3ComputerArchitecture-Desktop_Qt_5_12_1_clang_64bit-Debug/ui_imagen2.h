/********************************************************************************
** Form generated from reading UI file 'imagen2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEN2_H
#define UI_IMAGEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Imagen2
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QProgressBar *progressBar;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Imagen2)
    {
        if (Imagen2->objectName().isEmpty())
            Imagen2->setObjectName(QString::fromUtf8("Imagen2"));
        Imagen2->resize(629, 469);
        groupBox = new QGroupBox(Imagen2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 581, 181));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 561, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 60, 561, 21));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 90, 561, 24));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 120, 561, 24));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 150, 551, 23));
        progressBar->setValue(0);
        groupBox_2 = new QGroupBox(Imagen2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 190, 581, 261));
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
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 200, 59, 16));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 30, 491, 24));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(80, 60, 491, 24));
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(80, 90, 491, 24));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(80, 120, 491, 24));
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(80, 150, 491, 24));
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(80, 190, 491, 24));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 230, 561, 24));

        retranslateUi(Imagen2);

        QMetaObject::connectSlotsByName(Imagen2);
    } // setupUi

    void retranslateUi(QWidget *Imagen2)
    {
        Imagen2->setWindowTitle(QApplication::translate("Imagen2", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Imagen2", "Seleccionar y convertir", nullptr));
        pushButton->setText(QApplication::translate("Imagen2", "Seleccionar", nullptr));
        pushButton_2->setText(QApplication::translate("Imagen2", "Convertir", nullptr));
        groupBox_2->setTitle(QApplication::translate("Imagen2", "Tiempos de Ejecucion", nullptr));
        label->setText(QApplication::translate("Imagen2", "Tiempo 1", nullptr));
        label_2->setText(QApplication::translate("Imagen2", "Tiempo 2", nullptr));
        label_3->setText(QApplication::translate("Imagen2", "Tiempo 3", nullptr));
        label_4->setText(QApplication::translate("Imagen2", "Tiempo 4", nullptr));
        label_5->setText(QApplication::translate("Imagen2", "Tiempo 5", nullptr));
        label_6->setText(QApplication::translate("Imagen2", "Media", nullptr));
        pushButton_3->setText(QApplication::translate("Imagen2", "Resetear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Imagen2: public Ui_Imagen2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEN2_H
