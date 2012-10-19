#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H
#include <QDataStream>

class Serializable
{
public:
    virtual ~Serializable() {}
    virtual void load(QDataStream & i) = 0;
    virtual void save(QDataStream & o) = 0;
};

#endif // SERIALIZABLE_H
