/****************************************************************************
** Meta object code from reading C++ file 'bool.h'
**
** Created: Tue 28. Feb 18:14:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../plugins/bool/bool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bool[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    6,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Bool[] = {
    "Bool\0\0checked\0setValue(bool)\0"
};

const QMetaObject Bool::staticMetaObject = {
    { &PropertyInterface::staticMetaObject, qt_meta_stringdata_Bool,
      qt_meta_data_Bool, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bool))
        return static_cast<void*>(const_cast< Bool*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< Bool*>(this));
    return PropertyInterface::qt_metacast(_clname);
}

int Bool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
