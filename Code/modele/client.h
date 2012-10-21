#ifndef CLIENT_H
#define CLIENT_H
#include "modele/personne.h"

#include "serializable.h"

class Client : public Serializable, protected Personne
{
public:
    Client(QString _nom, QString _prenom, bool _sexe, QString _nationalite, QDate _naissance);
    void setPermis(Permis permis){ _permis = permis; }
    virtual void load(QDataStream & i);
    virtual void save(QDataStream & o);
private:
    Permis _permis;
};

#endif // CLIENT_H
