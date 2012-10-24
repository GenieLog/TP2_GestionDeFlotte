#ifndef CLIENT_H
#define CLIENT_H
#include "modele/personne.h"
#include <QTableWidgetItem>
<<<<<<< HEAD
#include <QString>
#include "serializable.h"
#include "modele/bateau.h"
=======

>>>>>>> d71853d4fc69b5d6b94f40015fc1fff9a64861e8

class Client :  public Personne
{
public:
    Client(QString _nom, QString _prenom, bool _sexe, QString _nationalite, QDate _naissance);
<<<<<<< HEAD
    void setPermis(Permis permis){ _permis = permis; }
    QString getPermis(void) ;
    virtual void load(QDataStream & i);
    virtual bool save();
=======
    void setPermis(QString permis){ _permis = permis; }
    bool save();
>>>>>>> d71853d4fc69b5d6b94f40015fc1fff9a64861e8
private:
    Permis _permis;
};

#endif // CLIENT_H
