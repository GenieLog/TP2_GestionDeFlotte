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
    Bateau();
    QString getMarque(void) { return this->marque; }
    QDate getMiseEnEau(void) { return this->mise_en_eau; }
    TypeBateau getTypeBateau(void) { return this->type_bateau; }
private:
    unsigned int id_bateau;
    QString marque;
    QDate mise_en_eau;
    TypeBateau type_bateau;

};

#endif // BATEAU_H
