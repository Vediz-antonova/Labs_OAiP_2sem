/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../OAiP/Painter/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[36];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 21), // "on_StarButton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 25), // "on_TriangleButton_clicked"
QT_MOC_LITERAL(60, 23), // "on_CircleButton_clicked"
QT_MOC_LITERAL(84, 21), // "on_LineButton_clicked"
QT_MOC_LITERAL(106, 22), // "on_ClearButton_clicked"
QT_MOC_LITERAL(129, 23), // "on_SquareButton_clicked"
QT_MOC_LITERAL(153, 26), // "on_RectangleButton_clicked"
QT_MOC_LITERAL(180, 24), // "on_RhombusButton_clicked"
QT_MOC_LITERAL(205, 24), // "on_HexagonButton_clicked"
QT_MOC_LITERAL(230, 19), // "updateCenterDisplay"
QT_MOC_LITERAL(250, 4), // "newX"
QT_MOC_LITERAL(255, 4), // "newY"
QT_MOC_LITERAL(260, 10), // "infoFigure"
QT_MOC_LITERAL(271, 7), // "Figure*"
QT_MOC_LITERAL(279, 6), // "figure"
QT_MOC_LITERAL(286, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0on_StarButton_clicked\0\0"
    "on_TriangleButton_clicked\0"
    "on_CircleButton_clicked\0on_LineButton_clicked\0"
    "on_ClearButton_clicked\0on_SquareButton_clicked\0"
    "on_RectangleButton_clicked\0"
    "on_RhombusButton_clicked\0"
    "on_HexagonButton_clicked\0updateCenterDisplay\0"
    "newX\0newY\0infoFigure\0Figure*\0figure\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    2,   95,    2, 0x08,   10 /* Private */,
      14,    1,  100,    2, 0x08,   13 /* Private */,
      17,    0,  103,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_StarButton_clicked(); break;
        case 1: _t->on_TriangleButton_clicked(); break;
        case 2: _t->on_CircleButton_clicked(); break;
        case 3: _t->on_LineButton_clicked(); break;
        case 4: _t->on_ClearButton_clicked(); break;
        case 5: _t->on_SquareButton_clicked(); break;
        case 6: _t->on_RectangleButton_clicked(); break;
        case 7: _t->on_RhombusButton_clicked(); break;
        case 8: _t->on_HexagonButton_clicked(); break;
        case 9: _t->updateCenterDisplay((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->infoFigure((*reinterpret_cast< std::add_pointer_t<Figure*>>(_a[1]))); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Figure *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
