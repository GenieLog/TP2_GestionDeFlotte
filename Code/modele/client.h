#ifndef CLIENT_H
#define CLIENT_H
#include "modele/personne.h"
#include <QTableWidgetItem>


class Client :  public Personne
{
public:
    Client(QString _nom, QString _prenom, bool _sexe, QString _nationalite, QDate _naissance);
    void setPermis(QString permis){ _permis = permis; }
    bool save();
private:
    QString _permis;
};

#endif // CLIENT_H
