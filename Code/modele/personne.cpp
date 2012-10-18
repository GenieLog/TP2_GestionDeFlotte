#include "modele/personne.h"

#include <QString>

Personne::Personne(QString nom, QString prenom, bool sexe, QString nationalite, QDate naissance)
{
    _nom = nom;
    _prenom = prenom;
    _sexe = sexe;
    _naissance = naissance;
    _nationalite = nationalite;
    _skipper = false;
}
