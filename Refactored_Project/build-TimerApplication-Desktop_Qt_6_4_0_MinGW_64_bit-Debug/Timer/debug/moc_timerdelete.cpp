/****************************************************************************
** Meta object code from reading C++ file 'timerdelete.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TimerApplication/Timer/timerdelete.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timerdelete.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TimerDelete_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[13];
    char stringdata9[11];
    char stringdata10[24];
    char stringdata11[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TimerDelete_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TimerDelete_t qt_meta_stringdata_TimerDelete = {
    {
        QT_MOC_LITERAL(0, 11),  // "TimerDelete"
        QT_MOC_LITERAL(12, 14),  // "delChosenTimer"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 13),  // "QList<Timer>*"
        QT_MOC_LITERAL(42, 6),  // "timers"
        QT_MOC_LITERAL(49, 12),  // "QListWidget*"
        QT_MOC_LITERAL(62, 5),  // "listW"
        QT_MOC_LITERAL(68, 7),  // "QLabel*"
        QT_MOC_LITERAL(76, 12),  // "mainTimerLbl"
        QT_MOC_LITERAL(89, 10),  // "QTextEdit*"
        QT_MOC_LITERAL(100, 23),  // "mainTimerDescriptionLbl"
        QT_MOC_LITERAL(124, 12)   // "delAllTimers"
    },
    "TimerDelete",
    "delChosenTimer",
    "",
    "QList<Timer>*",
    "timers",
    "QListWidget*",
    "listW",
    "QLabel*",
    "mainTimerLbl",
    "QTextEdit*",
    "mainTimerDescriptionLbl",
    "delAllTimers"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TimerDelete[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   26,    2, 0x0a,    1 /* Public */,
      11,    4,   35,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject TimerDelete::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TimerDelete.offsetsAndSizes,
    qt_meta_data_TimerDelete,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TimerDelete_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TimerDelete, std::true_type>,
        // method 'delChosenTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Timer> *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextEdit *, std::false_type>,
        // method 'delAllTimers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Timer> *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextEdit *, std::false_type>
    >,
    nullptr
} };

void TimerDelete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimerDelete *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delChosenTimer((*reinterpret_cast< std::add_pointer_t<QList<Timer>*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QTextEdit*>>(_a[4]))); break;
        case 1: _t->delAllTimers((*reinterpret_cast< std::add_pointer_t<QList<Timer>*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidget*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QTextEdit*>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTextEdit* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTextEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *TimerDelete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimerDelete::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimerDelete.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TimerDelete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
