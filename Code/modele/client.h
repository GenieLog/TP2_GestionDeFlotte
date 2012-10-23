#ifndef CLIENT_H
#define CLIENT_H
#include "modele/personne.h"

#include "serializable.h"

class Client : public Serializable, protected Personne
{
public:
    Client(QString _nom, QString _prenom, bool _sexe, QString _nationalite, QDate _naissance);
    void setPermis(QString permis){ _permis = permis; }
    virtual void load(QDataStream & i);
    virtual bool save();
private:
    QString _permis;
};

#endif // CLIENT_H
