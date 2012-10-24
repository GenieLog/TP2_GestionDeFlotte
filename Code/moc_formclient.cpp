/****************************************************************************
** Meta object code from reading C++ file 'formclient.h'
**
** Created: Wed Oct 24 20:39:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormClient[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      97,   92,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormClient[] = {
    "FormClient\0\0form\0clientAdded(FormClient*)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0arg1\0"
    "on_comboBox_currentIndexChanged(QString)\0"
};

const QMetaObject FormClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormClient,
      qt_meta_data_FormClient, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormClient))
        return static_cast<void*>(const_cast< FormClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clientAdded((*reinterpret_cast< FormClient*(*)>(_a[1]))); break;
        case 1: on_pushButton_clicked(); break;
        case 2: on_pushButton_2_clicked(); break;
        case 3: on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FormClient::clientAdded(FormClient * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
