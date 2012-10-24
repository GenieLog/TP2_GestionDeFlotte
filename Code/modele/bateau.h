#ifndef BATEAU_H
#define BATEAU_H

#include <QDate>
#include <QString>


typedef enum {
    AUCUN,
    // il faut se renseigner sur les != types de permis bateau
    P_HAUTURIER,
    P_COTES
} Permis;

class TypeBateau
{
private:
    bool voile;
    unsigned int cylindree;
    unsigned int id_type;
    Permis permis;
};

class Bateau
{
public:
    Bateau(QString nom,QString marque, qint16 id_type, quint8 places, float prix, QDate MisALeau,float heures);
    QString getMarque(void) { return this->_marque; }
    QString getNom(void) { return this->_nom; }
    quint8 getPlaces(void) { return this->_places; }
    QDate getMiseEnEau(void) { return this->_MisALeau; }
    TypeBateau getTypeBateau(void) { return this->type; }
    bool save();
private:
    unsigned int id_bateau;
    QString _marque;
    QString _nom;
    QDate _MisALeau;
    float _prix;
    float _heures;
    quint8 _places;
    TypeBateau type;

};

#endif // BATEAU_H
