/****************************************************************************
** Meta object code from reading C++ file 'filemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/filemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileModel_t {
    QByteArrayData data[13];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileModel_t qt_meta_stringdata_FileModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FileModel"
QT_MOC_LITERAL(1, 10, 10), // "gotPreview"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "path"
QT_MOC_LITERAL(4, 27, 16), // "handleItemChange"
QT_MOC_LITERAL(5, 44, 4), // "load"
QT_MOC_LITERAL(6, 49, 3), // "row"
QT_MOC_LITERAL(7, 53, 4), // "file"
QT_MOC_LITERAL(8, 58, 5), // "File*"
QT_MOC_LITERAL(9, 64, 5), // "index"
QT_MOC_LITERAL(10, 70, 5), // "count"
QT_MOC_LITERAL(11, 76, 3), // "url"
QT_MOC_LITERAL(12, 80, 8) // "fileName"

    },
    "FileModel\0gotPreview\0\0path\0handleItemChange\0"
    "load\0row\0file\0File*\0index\0count\0url\0"
    "fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   53,    2, 0x02 /* Public */,
       7,    1,   56,    2, 0x02 /* Public */,
      10,    0,   59,    2, 0x02 /* Public */,
      11,    1,   60,    2, 0x02 /* Public */,
      12,    1,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    6,
    0x80000000 | 8, QMetaType::Int,    9,
    QMetaType::Int,
    QMetaType::QUrl, QMetaType::Int,    9,
    QMetaType::QString, QMetaType::Int,    9,

       0        // eod
};

void FileModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileModel *_t = static_cast<FileModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotPreview((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->handleItemChange(); break;
        case 2: _t->load((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { File* _r = _t->file((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< File**>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->count();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { QUrl _r = _t->url((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->fileName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileModel::gotPreview)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FileModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_FileModel.data,
      qt_meta_data_FileModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int FileModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FileModel::gotPreview(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
