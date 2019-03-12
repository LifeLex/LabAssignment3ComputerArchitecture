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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Algoritmo
{
public:

    void setupUi(QWidget *Algoritmo)
    {
        if (Algoritmo->objectName().isEmpty())
            Algoritmo->setObjectName(QString::fromUtf8("Algoritmo"));
        Algoritmo->resize(400, 300);

        retranslateUi(Algoritmo);

        QMetaObject::connectSlotsByName(Algoritmo);
    } // setupUi

    void retranslateUi(QWidget *Algoritmo)
    {
        Algoritmo->setWindowTitle(QApplication::translate("Algoritmo", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Algoritmo: public Ui_Algoritmo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORITMO_H
