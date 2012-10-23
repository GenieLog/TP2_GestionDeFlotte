#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H
#include <QDataStream>
#include <QFile>

class Serializable
{
public:
    virtual ~Serializable() {}
    virtual void load(QDataStream & i) = 0;
    virtual void save() = 0;
    static QFile savefile;
};

#endif // SERIALIZABLE_H
