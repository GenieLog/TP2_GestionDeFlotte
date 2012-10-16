#include "personne.h"

#include <QString>

Personne::Personne(QString _nom, QString _prenom, bool _sexe)
{
    this->nom = _nom;
    this->prenom = _prenom;
    this->sexe = _sexe;
    this->naissance = QDate();
    this->nationalite = QString();
    this->skipper = false;
}

Skipper::Skipper(QString _nom, QString _prenom, bool _sexe):Personne(_nom, _prenom, _sexe)
{
    this->skipper = true;
}

Employe::Employe(QString _nom, QString _prenom, bool _sexe, QString _poste):Personne(_nom, _prenom, _sexe)
{
    this->poste = QString(_poste);
}

Client::Client(QString _nom, QString _prenom, bool _sexe):Personne(_nom, _prenom, _sexe)
{
    this->permis = AUCUN;
}
