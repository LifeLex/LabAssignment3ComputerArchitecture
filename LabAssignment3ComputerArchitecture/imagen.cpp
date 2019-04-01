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
    QString directorioOrigen = QFileDialog::getExistingDirectory(this, tr(""), "Origen",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    QString directorioDestino = QFileDialog::getExistingDirectory(this, tr(""), "Destino",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->lineEdit->setText(directorioOrigen);
    ui->lineEdit_2->setText(directorioDestino);

    QDir origen;
    origen.absoluteFilePath(directorioOrigen);

    QDir destino;
    destino.absoluteFilePath(directorioDestino);

    QStringList fileFilter; //Filtro para el tipo de archivo
    origen.setNameFilters(QStringList()<< "*.png"<< "*.jpg");
    QStringList infoList = origen.entryList(fileFilter, QDir::Files);//Solo Imagenes no directorios
    int total = infoList.count();//#archivos en carpeta

    QImage imagen;

    //Inicio Tiempo
    QTime myTimer;
    QElapsedTimer timer;
    myTimer.start();
    timer.start();
    unsigned clockstart= clock();



    for (int i = 0; i < total; ++i) {
        QFileInfo fileInfo = infoList.at(i); //Coger elemento de la lista
        imagen.load(directorioOrigen + "/" + fileInfo.filePath());//Cargar imagen a traves de la ruta

        //B&W
        for (int i=0;i<imagen.width();i++) {
            for (int j = 0; j < imagen.height(); ++j) {
                QRgb pixelData = imagen.pixel(i,j);
                int red = qRed(pixelData);
                imagen.setPixel(i,j,qRgb(0,0,0));
                pixelData= imagen.pixel(i,j);
                int red2= qRed(pixelData);
            }
        }
        //NEGATIVO
        imagen.convertToFormat(QImage::Format_ARGB32);
        imagen.invertPixels();



        //Guardar
        imagen.save(directorioDestino+ "/" +fileInfo.filePath());
    }


    //Final Tiempo
    unsigned clockend= clock();
    double finalTime = (double(clockstart-clockend)/CLOCKS_PER_SEC);
    int nMiliseconds = myTimer.elapsed();
    int nanosecs= timer.nsecsElapsed();
    std::string txt;
    txt=std::to_string(nMiliseconds);


}
