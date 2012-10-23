#include "modele/client.h"
#include <QTextStream>

QFile Serializable::savefile("bdd/clients.txt");
Client::Client(QString nom, QString prenom, bool sexe, QString nationalite, QDate naissance)
    : Personne(nom ,prenom, sexe, nationalite, naissance)
{_skipper = false;
}

void Client::load(QDataStream & in)
{
    in >> _nom >> _prenom >> _sexe >> _nationalite >> _naissance >> _skipper ; //permis.load();
}

bool Client::save()
{
    QFile file("bdd/clients.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return false;


    QTextStream flux(&file);

    flux.setCodec("UTF-8");

    flux << _nom << "   " << _prenom << "  " << _sexe << "  " << _nationalite << "  " << endl;

    return true;
}


