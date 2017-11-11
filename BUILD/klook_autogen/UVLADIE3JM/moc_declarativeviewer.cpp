/****************************************************************************
** Meta object code from reading C++ file 'declarativeviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/declarativeviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativeviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeclarativeViewer_t {
    QByteArrayData data[19];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeclarativeViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeclarativeViewer_t qt_meta_stringdata_DeclarativeViewer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DeclarativeViewer"
QT_MOC_LITERAL(1, 18, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "setFullScreenState"
QT_MOC_LITERAL(4, 50, 16), // "setEmbeddedState"
QT_MOC_LITERAL(5, 67, 14), // "setStartWindow"
QT_MOC_LITERAL(6, 82, 12), // "onSetGallery"
QT_MOC_LITERAL(7, 95, 8), // "showBusy"
QT_MOC_LITERAL(8, 104, 10), // "showWindow"
QT_MOC_LITERAL(9, 115, 12), // "focusChanged"
QT_MOC_LITERAL(10, 128, 11), // "QQuickView*"
QT_MOC_LITERAL(11, 140, 21), // "resizeToPreferredSize"
QT_MOC_LITERAL(12, 162, 5), // "index"
QT_MOC_LITERAL(13, 168, 16), // "setVideoSizeHint"
QT_MOC_LITERAL(14, 185, 5), // "width"
QT_MOC_LITERAL(15, 191, 6), // "height"
QT_MOC_LITERAL(16, 198, 13), // "setFullScreen"
QT_MOC_LITERAL(17, 212, 14), // "serviceForFile"
QT_MOC_LITERAL(18, 227, 17) // "updateCurrentFile"

    },
    "DeclarativeViewer\0sizeChanged\0\0"
    "setFullScreenState\0setEmbeddedState\0"
    "setStartWindow\0onSetGallery\0showBusy\0"
    "showWindow\0focusChanged\0QQuickView*\0"
    "resizeToPreferredSize\0index\0"
    "setVideoSizeHint\0width\0height\0"
    "setFullScreen\0serviceForFile\0"
    "updateCurrentFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeclarativeViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   83,    2, 0x0a /* Public */,
       7,    0,   86,    2, 0x0a /* Public */,
       8,    0,   87,    2, 0x0a /* Public */,
       9,    2,   88,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   93,    2, 0x02 /* Public */,
      13,    3,   96,    2, 0x02 /* Public */,
      16,    0,  103,    2, 0x02 /* Public */,
      17,    1,  104,    2, 0x02 /* Public */,
      18,    1,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    2,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   12,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void DeclarativeViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeViewer *_t = static_cast<DeclarativeViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->setFullScreenState(); break;
        case 2: _t->setEmbeddedState(); break;
        case 3: _t->setStartWindow(); break;
        case 4: _t->onSetGallery((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showBusy(); break;
        case 6: _t->showWindow(); break;
        case 7: _t->focusChanged((*reinterpret_cast< QQuickView*(*)>(_a[1])),(*reinterpret_cast< QQuickView*(*)>(_a[2]))); break;
        case 8: _t->resizeToPreferredSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setVideoSizeHint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->setFullScreen(); break;
        case 11: { QString _r = _t->serviceForFile((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->updateCurrentFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickView* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeclarativeViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeclarativeViewer::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeclarativeViewer::setFullScreenState)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeclarativeViewer::setEmbeddedState)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeclarativeViewer::setStartWindow)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject DeclarativeViewer::staticMetaObject = {
    { &QQuickView::staticMetaObject, qt_meta_stringdata_DeclarativeViewer.data,
      qt_meta_data_DeclarativeViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeclarativeViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeclarativeViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeclarativeViewer.stringdata0))
        return static_cast<void*>(this);
    return QQuickView::qt_metacast(_clname);
}

int DeclarativeViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DeclarativeViewer::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeclarativeViewer::setFullScreenState()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeclarativeViewer::setEmbeddedState()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DeclarativeViewer::setStartWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
