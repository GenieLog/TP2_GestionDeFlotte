#ifndef SUIVI_BALADES_H
#define SUIVI_BALADES_H
#include <QDialog>
#include <Qdate>


namespace Ui {
    class Suivi_balades;
}

class Suivi_balades: public QDialog
{
    Q_OBJECT

public:
    explicit Suivi_balades(QWidget *parent = 0);
    ~Suivi_balades();

protected slots:
    void retour();


private:
    Ui::Suivi_balades *ui;
};

#endif // SUIVI_BALADES
