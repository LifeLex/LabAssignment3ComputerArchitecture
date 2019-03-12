#include "imagen.h"
#include "ui_imagen.h"

Imagen::Imagen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Imagen)
{
    ui->setupUi(this);
}

Imagen::~Imagen()
{
    delete ui;
}
