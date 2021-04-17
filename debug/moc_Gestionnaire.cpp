/****************************************************************************
** Meta object code from reading C++ file 'Gestionnaire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Gestionnaire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Gestionnaire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gestionnaire_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gestionnaire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gestionnaire_t qt_meta_stringdata_Gestionnaire = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Gestionnaire"
QT_MOC_LITERAL(1, 13, 12), // "usagerAjoute"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "Usager*"
QT_MOC_LITERAL(4, 35, 6), // "usager"
QT_MOC_LITERAL(5, 42, 14) // "usagerSupprime"

    },
    "Gestionnaire\0usagerAjoute\0\0Usager*\0"
    "usager\0usagerSupprime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gestionnaire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Gestionnaire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Gestionnaire *_t = static_cast<Gestionnaire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->usagerAjoute((*reinterpret_cast< Usager*(*)>(_a[1]))); break;
        case 1: _t->usagerSupprime((*reinterpret_cast< Usager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Gestionnaire::*_t)(Usager * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gestionnaire::usagerAjoute)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Gestionnaire::*_t)(Usager * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gestionnaire::usagerSupprime)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gestionnaire::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gestionnaire.data,
      qt_meta_data_Gestionnaire,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Gestionnaire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gestionnaire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gestionnaire.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gestionnaire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gestionnaire::usagerAjoute(Usager * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gestionnaire::usagerSupprime(Usager * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
