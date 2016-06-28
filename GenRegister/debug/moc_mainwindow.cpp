/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_FileOpen_toggled"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "arg1"
QT_MOC_LITERAL(4, 37, 12), // "IndicateData"
QT_MOC_LITERAL(5, 50, 15), // "OporaDataStruct"
QT_MOC_LITERAL(6, 66, 3), // "ops"
QT_MOC_LITERAL(7, 70, 14), // "GenerateStruct"
QT_MOC_LITERAL(8, 85, 8), // "LoadGPIO"
QT_MOC_LITERAL(9, 94, 4), // "port"
QT_MOC_LITERAL(10, 99, 3), // "pin"
QT_MOC_LITERAL(11, 103, 21), // "on_FileOpen_triggered"
QT_MOC_LITERAL(12, 125, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(13, 147, 7), // "SetGPIO"
QT_MOC_LITERAL(14, 155, 8), // "SaveGPIO"
QT_MOC_LITERAL(15, 164, 10), // "InitStruct"
QT_MOC_LITERAL(16, 175, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(17, 210, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(18, 242, 10), // "currentRow"
QT_MOC_LITERAL(19, 253, 33), // "on_listWidget_2_currentRowCha..."
QT_MOC_LITERAL(20, 287, 20), // "on_GPIOPinON_clicked"
QT_MOC_LITERAL(21, 308, 19), // "on_action_triggered"
QT_MOC_LITERAL(22, 328, 7) // "SaveCLK"

    },
    "MainWindow\0on_FileOpen_toggled\0\0arg1\0"
    "IndicateData\0OporaDataStruct\0ops\0"
    "GenerateStruct\0LoadGPIO\0port\0pin\0"
    "on_FileOpen_triggered\0on_action_3_triggered\0"
    "SetGPIO\0SaveGPIO\0InitStruct\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_listWidget_currentRowChanged\0"
    "currentRow\0on_listWidget_2_currentRowChanged\0"
    "on_GPIOPinON_clicked\0on_action_triggered\0"
    "SaveCLK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    1,   92,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    2,   96,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    2,  103,    2, 0x08 /* Private */,
      14,    2,  108,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      20,    0,  121,    2, 0x08 /* Private */,
      21,    0,  122,    2, 0x08 /* Private */,
      22,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_FileOpen_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->IndicateData((*reinterpret_cast< OporaDataStruct(*)>(_a[1]))); break;
        case 2: { OporaDataStruct _r = _t->GenerateStruct();
            if (_a[0]) *reinterpret_cast< OporaDataStruct*>(_a[0]) = _r; }  break;
        case 3: _t->LoadGPIO((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_FileOpen_triggered(); break;
        case 5: _t->on_action_3_triggered(); break;
        case 6: _t->SetGPIO((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->SaveGPIO((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->InitStruct(); break;
        case 9: _t->on_listWidget_itemSelectionChanged(); break;
        case 10: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_listWidget_2_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_GPIOPinON_clicked(); break;
        case 13: _t->on_action_triggered(); break;
        case 14: _t->SaveCLK(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
