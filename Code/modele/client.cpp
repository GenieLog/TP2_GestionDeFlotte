#include "modele/client.h"
#include <QTextStream>
#include <QtCore>
#include <QtDebug>

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
    int ID;
    QFile file("bdd/clients.txt");
    if(!file.exists())
   ID=0;
    else
    {
 file.open(QIODevice::ReadOnly);

 QString mot;
 QTextStream stream(&file);
 while(! stream.atEnd())
 {
    QString ligne = stream.readLine();
    mot = ligne [0];
 }

 ID=mot.toInt(); qDebug() << mot;
 ID++;
file.close();
    }
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return false;


    QTextStream flux(&file);

    flux.setCodec("UTF-8");

    flux << endl << ID <<"  " << _nom << "   " << _prenom << "  " << _sexe << "  " << _nationalite << "  " << endl;
    return true;
}



