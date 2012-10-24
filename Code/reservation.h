#ifndef RESERVATION_H
#define RESERVATION_H
#include <QDialog>
#include "add.h"
namespace Ui {
    class Reservation;
}

class Reservation : public QDialog
{
    Q_OBJECT

public:
    explicit Reservation(QWidget *parent = 0);
    ~Reservation();

protected slots:
    void openClient();
    void saveResa();
    void afficher();
    void remplir(QString, int);
    void init();

private:
    Ui::Reservation *ui;
    add *client;
};

#endif // RESERVATION_H
