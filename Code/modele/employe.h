#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "modele/personne.h"

class Employe:protected Personne
{
public:
    Employe(QString _nom, QString _Prenom, bool _sexe, QString _nationalite, QDate _naissance, QString _poste);
    ~Employe();
private:
    QString _poste;
};

#endif // EMPLOYE_H
