#ifndef IMAGEN_H
#define IMAGEN_H

#include <QWidget>

namespace Ui {
class Imagen;
}

class Imagen : public QWidget
{
    Q_OBJECT

public:
    explicit Imagen(QWidget *parent = nullptr);
    ~Imagen();

private:
    Ui::Imagen *ui;
};

#endif // IMAGEN_H
