/****************************************************************************
** Meta object code from reading C++ file 'testsorts.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TimerApplication/Timer/testsorts.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testsorts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_TestSorts_t {
    uint offsetsAndSizes[12];
    char stringdata0[10];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[22];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TestSorts_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TestSorts_t qt_meta_stringdata_TestSorts = {
    {
        QT_MOC_LITERAL(0, 9),  // "TestSorts"
        QT_MOC_LITERAL(10, 18),  // "sortByTimeIncrease"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 18),  // "sortByTimeDecrease"
        QT_MOC_LITERAL(49, 21),  // "sortByTimeDescription"
        QT_MOC_LITERAL(71, 7)   // "findMin"
    },
    "TestSorts",
    "sortByTimeIncrease",
    "",
    "sortByTimeDecrease",
    "sortByTimeDescription",
    "findMin"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TestSorts[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestSorts::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestSorts.offsetsAndSizes,
    qt_meta_data_TestSorts,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TestSorts_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestSorts, std::true_type>,
        // method 'sortByTimeIncrease'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortByTimeDecrease'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortByTimeDescription'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findMin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestSorts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestSorts *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sortByTimeIncrease(); break;
        case 1: _t->sortByTimeDecrease(); break;
        case 2: _t->sortByTimeDescription(); break;
        case 3: _t->findMin(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestSorts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestSorts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestSorts.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestSorts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
