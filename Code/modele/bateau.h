#ifndef BATEAU_H
#define BATEAU_H

#include <QDate>
#include <QString>

typedef enum {
    AUCUN,
    P_HAUTURIER,
    P_COTES,
// il faut se renseigner sur les != types de permis
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
    QString getMarque(void);
    QDate getMiseEnEau(void);
private:
    unsigned int id_bateau;
    QString marque;
    QDate mise_en_eau;

};

#endif // BATEAU_H
