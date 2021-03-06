#include "imagen.h"
#include "ui_imagen.h"

using namespace std;

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

void Imagen::on_pushButton_clicked()
{


    int x=0;
    QString algoritmo2 = QFileDialog::getOpenFileName(this, tr("Select a file to open"), "/Users/Alejandro/Downloads", tr("Image Files (*.png *.jpg *.bmp)"));
    ui->lineEdit->setText(algoritmo2);
    QPixmap pixMap(algoritmo2);
    QImage imgen = pixMap.toImage();
    QImage imgen2 = pixMap.toImage();
    QSize sizeImage = imgen.size();
    int width = sizeImage.width(), height = sizeImage.height();
    QPixmap foto =QPixmap(width,height);
    QImage final = foto.toImage();




    QTime myTimer;
    myTimer.start();
     // Recorrer pixel de la imagen
    for (int i = 0; i < width; i++)
    {
        for (int e = 0; e < height; e++)
        {
            QRgb color = imgen.pixel(i, e);
            int gray = qGray(color);
            final.setPixel(i,e, qRgb(gray, gray, gray));

        }
    }
    QImage negativo = imgen2.convertToFormat(QImage::Format_ARGB32);
    negativo.invertPixels();
    int nMiliseconds = myTimer.elapsed();
    string numero=std::to_string(nMiliseconds);

    if (auxPrint==0&&x==0) {
        ui->tiempo1->setText(QString::fromStdString(numero));
        QString ruta = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                             | QFileDialog::DontResolveSymlinks);

        QString rutaneg = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                             | QFileDialog::DontResolveSymlinks);
        ruta.append("/foto1.png");
        final.save(ruta);
        rutaneg.append("/foto1neg.png");
        negativo.save(rutaneg);
        x++;
        auxPrint++;
        ui->lineEdit_2->setText(ruta);

    }

    if (auxPrint==1&&x==0) {
        ui->tiempo2->setText(QString::fromStdString(numero));
        QString ruta = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                                    | QFileDialog::DontResolveSymlinks);
        QString rutaneg = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                             | QFileDialog::DontResolveSymlinks);
        ruta.append("/foto2.png");
        final.save(ruta);
        rutaneg.append("/foto2neg.png");
        negativo.save(rutaneg);
        x++;
        auxPrint++;
        ui->lineEdit_2->setText(ruta);
    }

    if (auxPrint==2&&x==0) {
        ui->tiempo3->setText(QString::fromStdString(numero));
        QString ruta = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                                    | QFileDialog::DontResolveSymlinks);
        QString rutaneg = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                             | QFileDialog::DontResolveSymlinks);
        ruta.append("/foto3.png");
        final.save(ruta);
        rutaneg.append("/foto3neg.png");
        negativo.save(rutaneg);
        x++;
        auxPrint++;
        ui->lineEdit_2->setText(ruta);
    }

    if (auxPrint==3&&x==0) {
        ui->tiempo4->setText(QString::fromStdString(numero));
        QString ruta = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                                    | QFileDialog::DontResolveSymlinks);
        QString rutaneg = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                             | QFileDialog::DontResolveSymlinks);
        ruta.append("/foto4.png");
        final.save(ruta);
        rutaneg.append("/foto4neg.png");
        negativo.save(rutaneg);
        x++;
        auxPrint++;
        ui->lineEdit_2->setText(ruta);
    }

    if (auxPrint==4&&x==0) {
        ui->tiempo5->setText(QString::fromStdString(numero));
        QString ruta = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
        QString rutaneg = QFileDialog::getExistingDirectory(this,tr("Guardar foto"),"",QFileDialog::ShowDirsOnly
                                                                             | QFileDialog::DontResolveSymlinks);
        ruta.append("/foto5.png");
        final.save(ruta);
        rutaneg.append("/foto5neg.png");
        negativo.save(rutaneg);
        x++;
        auxPrint++;
        ui->lineEdit_2->setText(ruta);
    }
    suma = suma+ nMiliseconds;
}

void Imagen::on_pushButton_2_clicked()
{
    media=suma/5;
    std::string txt;
    txt=std::to_string(media);
    ui->mediaLineEdit->setText(QString::fromStdString(txt));
}
