/****************************************************************************
** Meta object code from reading C++ file 'file.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/file.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_File_t {
    QByteArrayData data[17];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_File_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_File_t qt_meta_stringdata_File = {
    {
QT_MOC_LITERAL(0, 0, 4), // "File"
QT_MOC_LITERAL(1, 5, 11), // "dataChanged"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 18), // "slotDownloadResult"
QT_MOC_LITERAL(4, 37, 5), // "KJob*"
QT_MOC_LITERAL(5, 43, 3), // "job"
QT_MOC_LITERAL(6, 47, 17), // "resultMimetypeJob"
QT_MOC_LITERAL(7, 65, 8), // "FileType"
QT_MOC_LITERAL(8, 74, 8), // "Progress"
QT_MOC_LITERAL(9, 83, 5), // "Image"
QT_MOC_LITERAL(10, 89, 5), // "Video"
QT_MOC_LITERAL(11, 95, 3), // "Txt"
QT_MOC_LITERAL(12, 99, 9), // "Directory"
QT_MOC_LITERAL(13, 109, 5), // "Audio"
QT_MOC_LITERAL(14, 115, 10), // "OkularFile"
QT_MOC_LITERAL(15, 126, 16), // "MimetypeFallback"
QT_MOC_LITERAL(16, 143, 5) // "Error"

    },
    "File\0dataChanged\0\0slotDownloadResult\0"
    "KJob*\0job\0resultMimetypeJob\0FileType\0"
    "Progress\0Image\0Video\0Txt\0Directory\0"
    "Audio\0OkularFile\0MimetypeFallback\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_File[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // enums: name, flags, count, data
       7, 0x0,    9,   40,

 // enum data: key, value
       8, uint(File::Progress),
       9, uint(File::Image),
      10, uint(File::Video),
      11, uint(File::Txt),
      12, uint(File::Directory),
      13, uint(File::Audio),
      14, uint(File::OkularFile),
      15, uint(File::MimetypeFallback),
      16, uint(File::Error),

       0        // eod
};

void File::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        File *_t = static_cast<File *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->slotDownloadResult((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 2: _t->resultMimetypeJob((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (File::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&File::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject File::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_File.data,
      qt_meta_data_File,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *File::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *File::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_File.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int File::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void File::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
