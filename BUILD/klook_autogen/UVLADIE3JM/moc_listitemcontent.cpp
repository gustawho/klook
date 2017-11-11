/****************************************************************************
** Meta object code from reading C++ file 'listitemcontent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/listitemcontent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listitemcontent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListItemContent_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListItemContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListItemContent_t qt_meta_stringdata_ListItemContent = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ListItemContent"
QT_MOC_LITERAL(1, 16, 11), // "dataChanged"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "ListItemContent\0dataChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListItemContent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ListItemContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListItemContent *_t = static_cast<ListItemContent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ListItemContent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ListItemContent::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ListItemContent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ListItemContent.data,
      qt_meta_data_ListItemContent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListItemContent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListItemContent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListItemContent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ListItemContent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ListItemContent::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ListItemFallbackContent_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListItemFallbackContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListItemFallbackContent_t qt_meta_stringdata_ListItemFallbackContent = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ListItemFallbackContent"
QT_MOC_LITERAL(1, 24, 13), // "handleStatJob"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "KJob*"
QT_MOC_LITERAL(4, 45, 3) // "job"

    },
    "ListItemFallbackContent\0handleStatJob\0"
    "\0KJob*\0job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListItemFallbackContent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ListItemFallbackContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListItemFallbackContent *_t = static_cast<ListItemFallbackContent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleStatJob((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ListItemFallbackContent::staticMetaObject = {
    { &ListItemContent::staticMetaObject, qt_meta_stringdata_ListItemFallbackContent.data,
      qt_meta_data_ListItemFallbackContent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListItemFallbackContent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListItemFallbackContent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListItemFallbackContent.stringdata0))
        return static_cast<void*>(this);
    return ListItemContent::qt_metacast(_clname);
}

int ListItemFallbackContent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListItemContent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ListItemDirectoryContent_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListItemDirectoryContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListItemDirectoryContent_t qt_meta_stringdata_ListItemDirectoryContent = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ListItemDirectoryContent"
QT_MOC_LITERAL(1, 25, 16), // "handleDirSizeJob"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "KJob*"
QT_MOC_LITERAL(4, 49, 3) // "job"

    },
    "ListItemDirectoryContent\0handleDirSizeJob\0"
    "\0KJob*\0job"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListItemDirectoryContent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ListItemDirectoryContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListItemDirectoryContent *_t = static_cast<ListItemDirectoryContent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDirSizeJob((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ListItemDirectoryContent::staticMetaObject = {
    { &ListItemFallbackContent::staticMetaObject, qt_meta_stringdata_ListItemDirectoryContent.data,
      qt_meta_data_ListItemDirectoryContent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListItemDirectoryContent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListItemDirectoryContent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListItemDirectoryContent.stringdata0))
        return static_cast<void*>(this);
    return ListItemFallbackContent::qt_metacast(_clname);
}

int ListItemDirectoryContent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListItemFallbackContent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
