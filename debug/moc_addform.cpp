/****************************************************************************
** Meta object code from reading C++ file 'addform.h'
**
** Created: Tue 3. May 18:35:25 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      32,    8,    8,    8, 0x08,
      57,    8,    8,    8, 0x08,
      81,    8,    8,    8, 0x08,
     109,    8,    8,    8, 0x08,
     137,    8,    8,    8, 0x08,
     166,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddForm[] = {
    "AddForm\0\0on_addButton_clicked()\0"
    "on_KursCombobox_select()\0"
    "on_SemCombobox_select()\0"
    "on_SubjectCombobox_select()\0"
    "on_OpenFileButton_clicked()\0"
    "on_OpenImageButton_clicked()\0"
    "on_TypeCombobox_select()\0"
};

const QMetaObject AddForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddForm,
      qt_meta_data_AddForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddForm))
        return static_cast<void*>(const_cast< AddForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_addButton_clicked(); break;
        case 1: on_KursCombobox_select(); break;
        case 2: on_SemCombobox_select(); break;
        case 3: on_SubjectCombobox_select(); break;
        case 4: on_OpenFileButton_clicked(); break;
        case 5: on_OpenImageButton_clicked(); break;
        case 6: on_TypeCombobox_select(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
