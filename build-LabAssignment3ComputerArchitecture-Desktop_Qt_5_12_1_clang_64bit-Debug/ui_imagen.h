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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Imagen
{
public:

    void setupUi(QWidget *Imagen)
    {
        if (Imagen->objectName().isEmpty())
            Imagen->setObjectName(QString::fromUtf8("Imagen"));
        Imagen->resize(533, 355);

        retranslateUi(Imagen);

        QMetaObject::connectSlotsByName(Imagen);
    } // setupUi

    void retranslateUi(QWidget *Imagen)
    {
        Imagen->setWindowTitle(QApplication::translate("Imagen", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Imagen: public Ui_Imagen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEN_H
