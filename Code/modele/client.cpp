#include "modele/client.h"

Client::Client(QString nom, QString prenom, bool sexe, QString nationalite, QDate naissance)
    : Personne(nom ,prenom, sexe, nationalite, naissance)
{
}

void Client::load(QDataStream & in)
{
    in >> _nom >> _prenom >> _sexe >> _nationalite >> _naissance >> _skipper ; //permis.load();
}

void Client::save(QDataStream & out)
{
    out << _nom << _prenom << _sexe << _nationalite << _naissance << _skipper; //permis.save();
}

