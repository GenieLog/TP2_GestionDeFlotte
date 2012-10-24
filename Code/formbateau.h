#ifndef FORMBATEAU_H
#define FORMBATEAU_H

#include <QWidget>
#include "modele/bateau.h"

namespace Ui {
    class FormBateau;
}

class FormBateau : public QWidget
{
    Q_OBJECT

public:
    explicit FormBateau(QWidget *parent = 0);
    ~FormBateau();

    Bateau *bateau;

private:
    Ui::FormBateau *ui;

private slots:
    void on_doubleSpinBox_valueChanged(double );
    void on_pushButton_2_clicked();
};

#endif // FORMBATEAU_H
