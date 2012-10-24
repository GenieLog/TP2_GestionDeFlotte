#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H
#include <QDataStream>
#include <QFile>


/**
  *\obsolete
  */


class Serializable
{
public:
   virtual ~Serializable() {}
    virtual void load(QDataStream & i) = 0;
    virtual bool save();
    static QFile savefile;
};

#endif // SERIALIZABLE_H
