/****************************************************************************
** Meta object code from reading C++ file 'formbateau.h'
**
** Created: Wed Oct 24 20:39:45 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formbateau.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formbateau.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormBateau[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      50,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormBateau[] = {
    "FormBateau\0\0on_doubleSpinBox_valueChanged(double)\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject FormBateau::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormBateau,
      qt_meta_data_FormBateau, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormBateau::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormBateau::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormBateau::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormBateau))
        return static_cast<void*>(const_cast< FormBateau*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormBateau::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
