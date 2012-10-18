#ifndef SKIPPER_H
#define SKIPPER_H

#include "modele/personne.h"

class Skipper:protected Personne
{
public :
    Skipper(QString _nom, QString _Prenom, bool _sexe, QString _nationalite, QDate _naissance);
    ~Skipper();
};

#endif // SKIPPER_H
