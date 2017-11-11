/****************************************************************************
** Meta object code from reading C++ file 'previewgenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/previewgenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewgenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreviewGenerator_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewGenerator_t qt_meta_stringdata_PreviewGenerator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PreviewGenerator"
QT_MOC_LITERAL(1, 17, 16), // "previewJobResult"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "KFileItem"
QT_MOC_LITERAL(4, 45, 16), // "previewJobFailed"
QT_MOC_LITERAL(5, 62, 4), // "item"
QT_MOC_LITERAL(6, 67, 7), // "request"
QT_MOC_LITERAL(7, 75, 4), // "path"
QT_MOC_LITERAL(8, 80, 4), // "size"
QT_MOC_LITERAL(9, 85, 6) // "cancel"

    },
    "PreviewGenerator\0previewJobResult\0\0"
    "KFileItem\0previewJobFailed\0item\0request\0"
    "path\0size\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewGenerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       4,    1,   39,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   42,    2, 0x02 /* Public */,
       9,    1,   47,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPixmap,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QSize,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void PreviewGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreviewGenerator *_t = static_cast<PreviewGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previewJobResult((*reinterpret_cast< const KFileItem(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 1: _t->previewJobFailed((*reinterpret_cast< const KFileItem(*)>(_a[1]))); break;
        case 2: _t->request((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 3: _t->cancel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PreviewGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PreviewGenerator.data,
      qt_meta_data_PreviewGenerator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PreviewGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewGenerator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PreviewGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
