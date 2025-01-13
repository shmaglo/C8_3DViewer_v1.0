/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../3D_Viewer/front/ViewerWindow/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "emitReadObjFile",
    "",
    "fileName",
    "emitRotateObjX",
    "angle",
    "emitRotateObjY",
    "emitRotateObjZ",
    "emitZoomObj",
    "scale",
    "emitMoveObjX",
    "val",
    "emitMoveObjY",
    "emitMoveObjZ",
    "emitWidgetColorChange",
    "value",
    "emitLineColorChange",
    "emitVertexColorChange",
    "emitVertexTypeChange",
    "emitLineTypeChange",
    "emitProjectionChange",
    "emitLineWidthChange",
    "emitVertexSizeChange",
    "on_pushButton_openFile_clicked",
    "on_horizontalSlider_rotX_valueChanged",
    "on_spinBox_rotX_valueChanged",
    "on_horizontalSlider_rotY_valueChanged",
    "on_spinBox_rotY_valueChanged",
    "on_horizontalSlider_rotZ_valueChanged",
    "on_spinBox_rotZ_valueChanged",
    "on_horizontalSlider_Scale_valueChanged",
    "on_horizontalSlider_moveX_valueChanged",
    "on_horizontalSlider_moveY_valueChanged",
    "on_horizontalSlider_moveZ_valueChanged",
    "on_spinBox_MoveX_valueChanged",
    "on_spinBox_MoveY_valueChanged",
    "on_spinBox_MoveZ_valueChanged",
    "on_pushButton_widgetColor_clicked",
    "on_pushButton_lineColor_clicked",
    "on_pushButton_vertexColor_clicked",
    "on_radioButton_VertexNone_toggled",
    "on_radioButton_VertexCircle_toggled",
    "on_radioButton_VertexSquare_toggled",
    "on_radioButton_LineSolid_toggled",
    "on_radioButton_LineDashed_toggled",
    "on_radioButton_Central_toggled",
    "on_radioButton_Parallel_toggled",
    "on_horizontalSlider_LineSize_valueChanged",
    "on_doubleSpinBox_LineSize_valueChanged",
    "on_horizontalSlider_VertexSize_valueChanged",
    "on_doubleSpinBox_VertexSize_valueChanged",
    "on_pushButton_screenshot_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[104];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[15];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[13];
    char stringdata11[4];
    char stringdata12[13];
    char stringdata13[13];
    char stringdata14[22];
    char stringdata15[6];
    char stringdata16[20];
    char stringdata17[22];
    char stringdata18[21];
    char stringdata19[19];
    char stringdata20[21];
    char stringdata21[20];
    char stringdata22[21];
    char stringdata23[31];
    char stringdata24[38];
    char stringdata25[29];
    char stringdata26[38];
    char stringdata27[29];
    char stringdata28[38];
    char stringdata29[29];
    char stringdata30[39];
    char stringdata31[39];
    char stringdata32[39];
    char stringdata33[39];
    char stringdata34[30];
    char stringdata35[30];
    char stringdata36[30];
    char stringdata37[34];
    char stringdata38[32];
    char stringdata39[34];
    char stringdata40[34];
    char stringdata41[36];
    char stringdata42[36];
    char stringdata43[33];
    char stringdata44[34];
    char stringdata45[31];
    char stringdata46[32];
    char stringdata47[42];
    char stringdata48[39];
    char stringdata49[44];
    char stringdata50[41];
    char stringdata51[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "emitReadObjFile"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "fileName"
        QT_MOC_LITERAL(37, 14),  // "emitRotateObjX"
        QT_MOC_LITERAL(52, 5),  // "angle"
        QT_MOC_LITERAL(58, 14),  // "emitRotateObjY"
        QT_MOC_LITERAL(73, 14),  // "emitRotateObjZ"
        QT_MOC_LITERAL(88, 11),  // "emitZoomObj"
        QT_MOC_LITERAL(100, 5),  // "scale"
        QT_MOC_LITERAL(106, 12),  // "emitMoveObjX"
        QT_MOC_LITERAL(119, 3),  // "val"
        QT_MOC_LITERAL(123, 12),  // "emitMoveObjY"
        QT_MOC_LITERAL(136, 12),  // "emitMoveObjZ"
        QT_MOC_LITERAL(149, 21),  // "emitWidgetColorChange"
        QT_MOC_LITERAL(171, 5),  // "value"
        QT_MOC_LITERAL(177, 19),  // "emitLineColorChange"
        QT_MOC_LITERAL(197, 21),  // "emitVertexColorChange"
        QT_MOC_LITERAL(219, 20),  // "emitVertexTypeChange"
        QT_MOC_LITERAL(240, 18),  // "emitLineTypeChange"
        QT_MOC_LITERAL(259, 20),  // "emitProjectionChange"
        QT_MOC_LITERAL(280, 19),  // "emitLineWidthChange"
        QT_MOC_LITERAL(300, 20),  // "emitVertexSizeChange"
        QT_MOC_LITERAL(321, 30),  // "on_pushButton_openFile_clicked"
        QT_MOC_LITERAL(352, 37),  // "on_horizontalSlider_rotX_valu..."
        QT_MOC_LITERAL(390, 28),  // "on_spinBox_rotX_valueChanged"
        QT_MOC_LITERAL(419, 37),  // "on_horizontalSlider_rotY_valu..."
        QT_MOC_LITERAL(457, 28),  // "on_spinBox_rotY_valueChanged"
        QT_MOC_LITERAL(486, 37),  // "on_horizontalSlider_rotZ_valu..."
        QT_MOC_LITERAL(524, 28),  // "on_spinBox_rotZ_valueChanged"
        QT_MOC_LITERAL(553, 38),  // "on_horizontalSlider_Scale_val..."
        QT_MOC_LITERAL(592, 38),  // "on_horizontalSlider_moveX_val..."
        QT_MOC_LITERAL(631, 38),  // "on_horizontalSlider_moveY_val..."
        QT_MOC_LITERAL(670, 38),  // "on_horizontalSlider_moveZ_val..."
        QT_MOC_LITERAL(709, 29),  // "on_spinBox_MoveX_valueChanged"
        QT_MOC_LITERAL(739, 29),  // "on_spinBox_MoveY_valueChanged"
        QT_MOC_LITERAL(769, 29),  // "on_spinBox_MoveZ_valueChanged"
        QT_MOC_LITERAL(799, 33),  // "on_pushButton_widgetColor_cli..."
        QT_MOC_LITERAL(833, 31),  // "on_pushButton_lineColor_clicked"
        QT_MOC_LITERAL(865, 33),  // "on_pushButton_vertexColor_cli..."
        QT_MOC_LITERAL(899, 33),  // "on_radioButton_VertexNone_tog..."
        QT_MOC_LITERAL(933, 35),  // "on_radioButton_VertexCircle_t..."
        QT_MOC_LITERAL(969, 35),  // "on_radioButton_VertexSquare_t..."
        QT_MOC_LITERAL(1005, 32),  // "on_radioButton_LineSolid_toggled"
        QT_MOC_LITERAL(1038, 33),  // "on_radioButton_LineDashed_tog..."
        QT_MOC_LITERAL(1072, 30),  // "on_radioButton_Central_toggled"
        QT_MOC_LITERAL(1103, 31),  // "on_radioButton_Parallel_toggled"
        QT_MOC_LITERAL(1135, 41),  // "on_horizontalSlider_LineSize_..."
        QT_MOC_LITERAL(1177, 38),  // "on_doubleSpinBox_LineSize_val..."
        QT_MOC_LITERAL(1216, 43),  // "on_horizontalSlider_VertexSiz..."
        QT_MOC_LITERAL(1260, 40),  // "on_doubleSpinBox_VertexSize_v..."
        QT_MOC_LITERAL(1301, 32)   // "on_pushButton_screenshot_clicked"
    },
    "MainWindow",
    "emitReadObjFile",
    "",
    "fileName",
    "emitRotateObjX",
    "angle",
    "emitRotateObjY",
    "emitRotateObjZ",
    "emitZoomObj",
    "scale",
    "emitMoveObjX",
    "val",
    "emitMoveObjY",
    "emitMoveObjZ",
    "emitWidgetColorChange",
    "value",
    "emitLineColorChange",
    "emitVertexColorChange",
    "emitVertexTypeChange",
    "emitLineTypeChange",
    "emitProjectionChange",
    "emitLineWidthChange",
    "emitVertexSizeChange",
    "on_pushButton_openFile_clicked",
    "on_horizontalSlider_rotX_valueChanged",
    "on_spinBox_rotX_valueChanged",
    "on_horizontalSlider_rotY_valueChanged",
    "on_spinBox_rotY_valueChanged",
    "on_horizontalSlider_rotZ_valueChanged",
    "on_spinBox_rotZ_valueChanged",
    "on_horizontalSlider_Scale_valueChanged",
    "on_horizontalSlider_moveX_valueChanged",
    "on_horizontalSlider_moveY_valueChanged",
    "on_horizontalSlider_moveZ_valueChanged",
    "on_spinBox_MoveX_valueChanged",
    "on_spinBox_MoveY_valueChanged",
    "on_spinBox_MoveZ_valueChanged",
    "on_pushButton_widgetColor_clicked",
    "on_pushButton_lineColor_clicked",
    "on_pushButton_vertexColor_clicked",
    "on_radioButton_VertexNone_toggled",
    "on_radioButton_VertexCircle_toggled",
    "on_radioButton_VertexSquare_toggled",
    "on_radioButton_LineSolid_toggled",
    "on_radioButton_LineDashed_toggled",
    "on_radioButton_Central_toggled",
    "on_radioButton_Parallel_toggled",
    "on_horizontalSlider_LineSize_valueChanged",
    "on_doubleSpinBox_LineSize_valueChanged",
    "on_horizontalSlider_VertexSize_valueChanged",
    "on_doubleSpinBox_VertexSize_valueChanged",
    "on_pushButton_screenshot_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  284,    2, 0x06,    1 /* Public */,
       4,    1,  287,    2, 0x06,    3 /* Public */,
       6,    1,  290,    2, 0x06,    5 /* Public */,
       7,    1,  293,    2, 0x06,    7 /* Public */,
       8,    1,  296,    2, 0x06,    9 /* Public */,
      10,    1,  299,    2, 0x06,   11 /* Public */,
      12,    1,  302,    2, 0x06,   13 /* Public */,
      13,    1,  305,    2, 0x06,   15 /* Public */,
      14,    1,  308,    2, 0x06,   17 /* Public */,
      16,    1,  311,    2, 0x06,   19 /* Public */,
      17,    1,  314,    2, 0x06,   21 /* Public */,
      18,    1,  317,    2, 0x06,   23 /* Public */,
      19,    1,  320,    2, 0x06,   25 /* Public */,
      20,    1,  323,    2, 0x06,   27 /* Public */,
      21,    1,  326,    2, 0x06,   29 /* Public */,
      22,    1,  329,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    0,  332,    2, 0x08,   33 /* Private */,
      24,    1,  333,    2, 0x08,   34 /* Private */,
      25,    1,  336,    2, 0x08,   36 /* Private */,
      26,    1,  339,    2, 0x08,   38 /* Private */,
      27,    1,  342,    2, 0x08,   40 /* Private */,
      28,    1,  345,    2, 0x08,   42 /* Private */,
      29,    1,  348,    2, 0x08,   44 /* Private */,
      30,    1,  351,    2, 0x08,   46 /* Private */,
      31,    1,  354,    2, 0x08,   48 /* Private */,
      32,    1,  357,    2, 0x08,   50 /* Private */,
      33,    1,  360,    2, 0x08,   52 /* Private */,
      34,    1,  363,    2, 0x08,   54 /* Private */,
      35,    1,  366,    2, 0x08,   56 /* Private */,
      36,    1,  369,    2, 0x08,   58 /* Private */,
      37,    0,  372,    2, 0x08,   60 /* Private */,
      38,    0,  373,    2, 0x08,   61 /* Private */,
      39,    0,  374,    2, 0x08,   62 /* Private */,
      40,    1,  375,    2, 0x08,   63 /* Private */,
      41,    1,  378,    2, 0x08,   65 /* Private */,
      42,    1,  381,    2, 0x08,   67 /* Private */,
      43,    1,  384,    2, 0x08,   69 /* Private */,
      44,    1,  387,    2, 0x08,   71 /* Private */,
      45,    1,  390,    2, 0x08,   73 /* Private */,
      46,    1,  393,    2, 0x08,   75 /* Private */,
      47,    1,  396,    2, 0x08,   77 /* Private */,
      48,    1,  399,    2, 0x08,   79 /* Private */,
      49,    1,  402,    2, 0x08,   81 /* Private */,
      50,    1,  405,    2, 0x08,   83 /* Private */,
      51,    0,  408,    2, 0x08,   85 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'emitReadObjFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'emitRotateObjX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'emitRotateObjY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'emitRotateObjZ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'emitZoomObj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'emitMoveObjX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'emitMoveObjY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'emitMoveObjZ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'emitWidgetColorChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'emitLineColorChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'emitVertexColorChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'emitVertexTypeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'emitLineTypeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitProjectionChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitLineWidthChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'emitVertexSizeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pushButton_openFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_rotX_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_rotX_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_rotY_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_rotY_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_rotZ_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_rotZ_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_Scale_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_moveX_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_moveY_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_moveZ_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_MoveX_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_MoveY_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_MoveZ_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_widgetColor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_lineColor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_vertexColor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_VertexNone_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_VertexCircle_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_VertexSquare_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_LineSolid_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_LineDashed_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_Central_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButton_Parallel_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_horizontalSlider_LineSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_doubleSpinBox_LineSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_horizontalSlider_VertexSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_doubleSpinBox_VertexSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pushButton_screenshot_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitReadObjFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->emitRotateObjX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->emitRotateObjY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->emitRotateObjZ((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->emitZoomObj((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->emitMoveObjX((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->emitMoveObjY((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->emitMoveObjZ((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->emitWidgetColorChange((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 9: _t->emitLineColorChange((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 10: _t->emitVertexColorChange((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 11: _t->emitVertexTypeChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->emitLineTypeChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->emitProjectionChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->emitLineWidthChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->emitVertexSizeChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->on_pushButton_openFile_clicked(); break;
        case 17: _t->on_horizontalSlider_rotX_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_spinBox_rotX_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_horizontalSlider_rotY_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_spinBox_rotY_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_horizontalSlider_rotZ_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_spinBox_rotZ_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_horizontalSlider_Scale_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->on_horizontalSlider_moveX_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_horizontalSlider_moveY_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_horizontalSlider_moveZ_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_spinBox_MoveX_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_spinBox_MoveY_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_spinBox_MoveZ_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_pushButton_widgetColor_clicked(); break;
        case 31: _t->on_pushButton_lineColor_clicked(); break;
        case 32: _t->on_pushButton_vertexColor_clicked(); break;
        case 33: _t->on_radioButton_VertexNone_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->on_radioButton_VertexCircle_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->on_radioButton_VertexSquare_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->on_radioButton_LineSolid_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 37: _t->on_radioButton_LineDashed_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->on_radioButton_Central_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->on_radioButton_Parallel_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->on_horizontalSlider_LineSize_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->on_doubleSpinBox_LineSize_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 42: _t->on_horizontalSlider_VertexSize_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 43: _t->on_doubleSpinBox_VertexSize_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 44: _t->on_pushButton_screenshot_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::emitReadObjFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::emitRotateObjX; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::emitRotateObjY; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::emitRotateObjZ; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::emitZoomObj; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double );
            if (_t _q_method = &MainWindow::emitMoveObjX; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double );
            if (_t _q_method = &MainWindow::emitMoveObjY; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double );
            if (_t _q_method = &MainWindow::emitMoveObjZ; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QColor );
            if (_t _q_method = &MainWindow::emitWidgetColorChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QColor );
            if (_t _q_method = &MainWindow::emitLineColorChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QColor );
            if (_t _q_method = &MainWindow::emitVertexColorChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::emitVertexTypeChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (_t _q_method = &MainWindow::emitLineTypeChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (_t _q_method = &MainWindow::emitProjectionChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double );
            if (_t _q_method = &MainWindow::emitLineWidthChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double );
            if (_t _q_method = &MainWindow::emitVertexSizeChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::emitReadObjFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::emitRotateObjX(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::emitRotateObjY(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::emitRotateObjZ(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::emitZoomObj(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::emitMoveObjX(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::emitMoveObjY(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::emitMoveObjZ(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::emitWidgetColorChange(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::emitLineColorChange(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::emitVertexColorChange(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::emitVertexTypeChange(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::emitLineTypeChange(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::emitProjectionChange(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::emitLineWidthChange(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::emitVertexSizeChange(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
