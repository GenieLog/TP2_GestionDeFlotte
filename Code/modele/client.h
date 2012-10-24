#ifndef CLIENT_H
#define CLIENT_H
#include "modele/personne.h"
#include <QTableWidgetItem>
#include <QString>
#include "serializable.h"
#include "modele/bateau.h"

class Client : public Serializable, public Personne
{
public:
    Client(QString _nom, QString _prenom, bool _sexe, QString _nationalite, QDate _naissance);
    void setPermis(Permis permis){ _permis = permis; }
    QString getPermis(void) ;
    virtual void load(QDataStream & i);
    virtual bool save();
private:
    Permis _permis;
};

#endif // CLIENT_H
