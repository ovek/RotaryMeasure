/****************************************************************************
** Meta object code from reading C++ file 'qwt_polar_picker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwt_polar_picker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_polar_picker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QwtPolarPicker_t {
    QByteArrayData data[9];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QwtPolarPicker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QwtPolarPicker_t qt_meta_stringdata_QwtPolarPicker = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 8),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 13),
QT_MOC_LITERAL(4, 39, 3),
QT_MOC_LITERAL(5, 43, 22),
QT_MOC_LITERAL(6, 66, 6),
QT_MOC_LITERAL(7, 73, 8),
QT_MOC_LITERAL(8, 82, 5)
    },
    "QwtPolarPicker\0selected\0\0QwtPointPolar\0"
    "pos\0QVector<QwtPointPolar>\0points\0"
    "appended\0moved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPolarPicker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       1,    1,   37,    2, 0x06,
       7,    1,   40,    2, 0x06,
       8,    1,   43,    2, 0x06,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QwtPolarPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QwtPolarPicker *_t = static_cast<QwtPolarPicker *>(_o);
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const QwtPointPolar(*)>(_a[1]))); break;
        case 1: _t->selected((*reinterpret_cast< const QVector<QwtPointPolar>(*)>(_a[1]))); break;
        case 2: _t->appended((*reinterpret_cast< const QwtPointPolar(*)>(_a[1]))); break;
        case 3: _t->moved((*reinterpret_cast< const QwtPointPolar(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QwtPolarPicker::*_t)(const QwtPointPolar & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QwtPolarPicker::selected)) {
                *result = 0;
            }
        }
        {
            typedef void (QwtPolarPicker::*_t)(const QVector<QwtPointPolar> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QwtPolarPicker::selected)) {
                *result = 1;
            }
        }
        {
            typedef void (QwtPolarPicker::*_t)(const QwtPointPolar & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QwtPolarPicker::appended)) {
                *result = 2;
            }
        }
        {
            typedef void (QwtPolarPicker::*_t)(const QwtPointPolar & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QwtPolarPicker::moved)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QwtPolarPicker::staticMetaObject = {
    { &QwtPicker::staticMetaObject, qt_meta_stringdata_QwtPolarPicker.data,
      qt_meta_data_QwtPolarPicker,  qt_static_metacall, 0, 0}
};


const QMetaObject *QwtPolarPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPolarPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPolarPicker.stringdata))
        return static_cast<void*>(const_cast< QwtPolarPicker*>(this));
    return QwtPicker::qt_metacast(_clname);
}

int QwtPolarPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPicker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QwtPolarPicker::selected(const QwtPointPolar & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QwtPolarPicker::selected(const QVector<QwtPointPolar> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QwtPolarPicker::appended(const QwtPointPolar & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QwtPolarPicker::moved(const QwtPointPolar & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
