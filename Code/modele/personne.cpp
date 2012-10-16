#include "personne.h"

#include <QString>

Personne::Personne(QString _nom, QString _prenom, bool _sexe)
{
    this->nom = _nom;
    this->prenom = _prenom;
    this->sexe = _sexe;
}
