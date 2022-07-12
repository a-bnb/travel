/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../server/user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_t {
    QByteArrayData data[13];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_t qt_meta_stringdata_user = {
    {
QT_MOC_LITERAL(0, 0, 4), // "user"
QT_MOC_LITERAL(1, 5, 21), // "on_reserv_btn_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "on_user_btn_clicked"
QT_MOC_LITERAL(4, 48, 20), // "on_guide_btn_clicked"
QT_MOC_LITERAL(5, 69, 20), // "on_beach_btn_clicked"
QT_MOC_LITERAL(6, 90, 20), // "on_lodge_btn_clicked"
QT_MOC_LITERAL(7, 111, 22), // "on_refresh_btn_clicked"
QT_MOC_LITERAL(8, 134, 18), // "on_add_btn_clicked"
QT_MOC_LITERAL(9, 153, 21), // "on_remove_btn_clicked"
QT_MOC_LITERAL(10, 175, 22), // "on_del_log_btn_clicked"
QT_MOC_LITERAL(11, 198, 24), // "on_usertable_itemClicked"
QT_MOC_LITERAL(12, 223, 19) // "on_edit_btn_clicked"

    },
    "user\0on_reserv_btn_clicked\0\0"
    "on_user_btn_clicked\0on_guide_btn_clicked\0"
    "on_beach_btn_clicked\0on_lodge_btn_clicked\0"
    "on_refresh_btn_clicked\0on_add_btn_clicked\0"
    "on_remove_btn_clicked\0on_del_log_btn_clicked\0"
    "on_usertable_itemClicked\0on_edit_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<user *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_reserv_btn_clicked(); break;
        case 1: _t->on_user_btn_clicked(); break;
        case 2: _t->on_guide_btn_clicked(); break;
        case 3: _t->on_beach_btn_clicked(); break;
        case 4: _t->on_lodge_btn_clicked(); break;
        case 5: _t->on_refresh_btn_clicked(); break;
        case 6: _t->on_add_btn_clicked(); break;
        case 7: _t->on_remove_btn_clicked(); break;
        case 8: _t->on_del_log_btn_clicked(); break;
        case 9: _t->on_usertable_itemClicked(); break;
        case 10: _t->on_edit_btn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject user::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_user.data,
    qt_meta_data_user,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
