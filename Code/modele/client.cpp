#include "modele/client.h"

QFile Serializable::savefile("bdd/clients.txt");
Client::Client(QString nom, QString prenom, bool sexe, QString nationalite, QDate naissance)
    : Personne(nom ,prenom, sexe, nationalite, naissance)
{_skipper = false;
}

void Client::load(QDataStream & in)
{
    in >> _nom >> _prenom >> _sexe >> _nationalite >> _naissance >> _skipper ; //permis.load();
}

void Client::save()
{
    this->savefile.open(QIODevice::WriteOnly);
    QDataStream out(&this->savefile);
    out << _nom << _prenom << _sexe << _nationalite << _naissance ;

}

