/****************************************************************************
** Meta object code from reading C++ file 'editconstructor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TimerApplication/Timer/editconstructor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editconstructor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_EditConstructor_t {
    uint offsetsAndSizes[22];
    char stringdata0[16];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[21];
    char stringdata8[14];
    char stringdata9[8];
    char stringdata10[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_EditConstructor_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_EditConstructor_t qt_meta_stringdata_EditConstructor = {
    {
        QT_MOC_LITERAL(0, 15),  // "EditConstructor"
        QT_MOC_LITERAL(16, 14),  // "showEditWindow"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 13),  // "QList<Timer>*"
        QT_MOC_LITERAL(46, 6),  // "timers"
        QT_MOC_LITERAL(53, 12),  // "QListWidget*"
        QT_MOC_LITERAL(66, 5),  // "listW"
        QT_MOC_LITERAL(72, 20),  // "editTimerInformation"
        QT_MOC_LITERAL(93, 13),  // "QList<Timer>&"
        QT_MOC_LITERAL(107, 7),  // "checker"
        QT_MOC_LITERAL(115, 11)   // "setTimeEdit"
    },
    "EditConstructor",
    "showEditWindow",
    "",
    "QList<Timer>*",
    "timers",
    "QListWidget*",
    "listW",
    "editTimerInformation",
    "QList<Timer>&",
    "checker",
    "setTimeEdit"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_EditConstructor[] = {

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
       1,    2,   38,    2, 0x0a,    1 /* Public */,
       7,    1,   43,    2, 0x0a,    4 /* Public */,
       9,    2,   46,    2, 0x0a,    6 /* Public */,
      10,    1,   51,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject EditConstructor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EditConstructor.offsetsAndSizes,
    qt_meta_data_EditConstructor,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_EditConstructor_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditConstructor, std::true_type>,
        // method 'showEditWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Timer> *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'editTimerInformation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Timer> &, std::false_type>,
        // method 'checker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Timer> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        // method 'setTimeEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Timer> &, std::false_type>
    >,
    nullptr
} };

void EditConstructor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditConstructor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showEditWindow((*reinterpret_cast< std::add_pointer_t<QList<Timer>*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 1: _t->editTimerInformation((*reinterpret_cast< std::add_pointer_t<QList<Timer>&>>(_a[1]))); break;
        case 2: _t->checker((*reinterpret_cast< std::add_pointer_t<QList<Timer>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2]))); break;
        case 3: _t->setTimeEdit((*reinterpret_cast< std::add_pointer_t<QList<Timer>&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *EditConstructor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditConstructor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditConstructor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EditConstructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
