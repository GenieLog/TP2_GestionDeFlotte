#include "modele/employe.h"

Employe::Employe(QString nom, QString prenom, bool sexe, QString nationalite, QDate naissance, QString poste)
    : Personne(nom ,prenom, sexe, nationalite, naissance)
{
    _poste = poste;
}
