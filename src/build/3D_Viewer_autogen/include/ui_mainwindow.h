/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_openFile;
    QTabWidget *tabWidget;
    QWidget *transform;
    QSpinBox *spinBox_rotX;
    QSpinBox *spinBox_rotY;
    QSpinBox *spinBox_rotZ;
    QSlider *horizontalSlider_rotX;
    QSlider *horizontalSlider_rotY;
    QSlider *horizontalSlider_rotZ;
    QSlider *horizontalSlider_Scale;
    QLabel *label_Scale;
    QLabel *label_Rotate;
    QLabel *label_Move;
    QLabel *label_Xr;
    QLabel *label_Yr;
    QLabel *label_Zr;
    QLabel *label_Xr_Slider;
    QLabel *label_Yr_Slider;
    QLabel *label_Zr_Slider;
    QLabel *label_transformBorder;
    QLabel *label_Xm_Fact;
    QSpinBox *spinBox_MoveY_Fact;
    QLabel *label_Zm_Fact;
    QLabel *label_Ym_Fact;
    QSpinBox *spinBox_MoveZ_Fact;
    QSpinBox *spinBox_MoveX_Fact;
    QSlider *horizontalSlider_moveX;
    QSlider *horizontalSlider_moveY;
    QSlider *horizontalSlider_moveZ;
    QLabel *label_Xm;
    QSpinBox *spinBox_MoveY;
    QLabel *label_Zm;
    QLabel *label_Ym;
    QSpinBox *spinBox_MoveZ;
    QSpinBox *spinBox_MoveX;
    QWidget *style;
    QPushButton *pushButton_widgetColor;
    QPushButton *pushButton_lineColor;
    QPushButton *pushButton_vertexColor;
    QLabel *label_backgroundColor;
    QLabel *label_lineColor;
    QLabel *label_vertexColor;
    QLabel *label_StyleBorder;
    QLabel *label_Colors;
    QLabel *label_Lines;
    QDoubleSpinBox *doubleSpinBox_LineSize;
    QRadioButton *radioButton_LineSolid;
    QRadioButton *radioButton_LineDashed;
    QLabel *label_Vertexes;
    QRadioButton *radioButton_VertexNone;
    QRadioButton *radioButton_VertexCircle;
    QRadioButton *radioButton_VertexSquare;
    QDoubleSpinBox *doubleSpinBox_VertexSize;
    QLabel *label_StyleBorder_2;
    QLabel *label_Projection;
    QRadioButton *radioButton_Parallel;
    QRadioButton *radioButton_Central;
    QLabel *label_VertexSize;
    QLabel *label_VertexSize_2;
    QSlider *horizontalSlider_VertexSize;
    QSlider *horizontalSlider_LineSize;
    QPushButton *pushButton_screenshot;
    QLabel *label_info_name;
    QLabel *label_info_vertex;
    QLabel *label_info_polygons;
    QLabel *label_name;
    QLabel *label_vertex;
    QLabel *label_polygons;
    QLabel *label_widgetBorder;
    QButtonGroup *buttonGroup_Vertex;
    QButtonGroup *buttonGroup_Projection;
    QButtonGroup *buttonGroup_Line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 590);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(42, 43, 44);\n"
"	min-height: 590px;\n"
"	max-height: 590px;\n"
"	min-width: 800px; \n"
"	max-width: 800px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(210, 10, 581, 551));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_openFile = new QPushButton(centralwidget);
        pushButton_openFile->setObjectName("pushButton_openFile");
        pushButton_openFile->setGeometry(QRect(9, 9, 191, 58));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        pushButton_openFile->setFont(font);
        pushButton_openFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"    background-color: rgb(58, 57, 57);\n"
"    min-width: 70px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(97, 96, 96);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(9, 69, 191, 441));
        QFont font1;
        font1.setPointSize(17);
        tabWidget->setFont(font1);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"    background: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"	border: 1px solid rgb(242, 165, 60);\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected {\n"
"    background:  rgb(242, 165, 60);\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::ta"
                        "b:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideRight);
        transform = new QWidget();
        transform->setObjectName("transform");
        spinBox_rotX = new QSpinBox(transform);
        spinBox_rotX->setObjectName("spinBox_rotX");
        spinBox_rotX->setGeometry(QRect(18, 200, 47, 22));
        QFont font2;
        font2.setPointSize(12);
        spinBox_rotX->setFont(font2);
        spinBox_rotX->setAlignment(Qt::AlignCenter);
        spinBox_rotX->setMinimum(-180);
        spinBox_rotX->setMaximum(180);
        spinBox_rotY = new QSpinBox(transform);
        spinBox_rotY->setObjectName("spinBox_rotY");
        spinBox_rotY->setGeometry(QRect(78, 200, 47, 22));
        spinBox_rotY->setFont(font2);
        spinBox_rotY->setAlignment(Qt::AlignCenter);
        spinBox_rotY->setMinimum(-180);
        spinBox_rotY->setMaximum(180);
        spinBox_rotZ = new QSpinBox(transform);
        spinBox_rotZ->setObjectName("spinBox_rotZ");
        spinBox_rotZ->setGeometry(QRect(138, 200, 47, 22));
        spinBox_rotZ->setFont(font2);
        spinBox_rotZ->setAlignment(Qt::AlignCenter);
        spinBox_rotZ->setMinimum(-180);
        spinBox_rotZ->setMaximum(180);
        horizontalSlider_rotX = new QSlider(transform);
        horizontalSlider_rotX->setObjectName("horizontalSlider_rotX");
        horizontalSlider_rotX->setGeometry(QRect(30, 230, 151, 25));
        horizontalSlider_rotX->setMinimum(-180);
        horizontalSlider_rotX->setMaximum(180);
        horizontalSlider_rotX->setOrientation(Qt::Horizontal);
        horizontalSlider_rotY = new QSlider(transform);
        horizontalSlider_rotY->setObjectName("horizontalSlider_rotY");
        horizontalSlider_rotY->setGeometry(QRect(30, 260, 151, 25));
        horizontalSlider_rotY->setMinimum(-180);
        horizontalSlider_rotY->setMaximum(180);
        horizontalSlider_rotY->setOrientation(Qt::Horizontal);
        horizontalSlider_rotZ = new QSlider(transform);
        horizontalSlider_rotZ->setObjectName("horizontalSlider_rotZ");
        horizontalSlider_rotZ->setGeometry(QRect(30, 290, 151, 25));
        horizontalSlider_rotZ->setMinimum(-180);
        horizontalSlider_rotZ->setMaximum(180);
        horizontalSlider_rotZ->setOrientation(Qt::Horizontal);
        horizontalSlider_Scale = new QSlider(transform);
        horizontalSlider_Scale->setObjectName("horizontalSlider_Scale");
        horizontalSlider_Scale->setGeometry(QRect(10, 370, 171, 25));
        horizontalSlider_Scale->setMinimum(1);
        horizontalSlider_Scale->setMaximum(200);
        horizontalSlider_Scale->setValue(100);
        horizontalSlider_Scale->setOrientation(Qt::Horizontal);
        label_Scale = new QLabel(transform);
        label_Scale->setObjectName("label_Scale");
        label_Scale->setGeometry(QRect(0, 330, 191, 20));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label_Scale->setFont(font3);
        label_Scale->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Scale->setAlignment(Qt::AlignCenter);
        label_Rotate = new QLabel(transform);
        label_Rotate->setObjectName("label_Rotate");
        label_Rotate->setGeometry(QRect(0, 169, 191, 20));
        label_Rotate->setFont(font3);
        label_Rotate->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Rotate->setAlignment(Qt::AlignCenter);
        label_Move = new QLabel(transform);
        label_Move->setObjectName("label_Move");
        label_Move->setGeometry(QRect(0, 7, 191, 20));
        label_Move->setFont(font3);
        label_Move->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Move->setAlignment(Qt::AlignCenter);
        label_Xr = new QLabel(transform);
        label_Xr->setObjectName("label_Xr");
        label_Xr->setGeometry(QRect(2, 203, 16, 16));
        label_Xr->setFont(font2);
        label_Xr->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Xr->setAlignment(Qt::AlignCenter);
        label_Yr = new QLabel(transform);
        label_Yr->setObjectName("label_Yr");
        label_Yr->setGeometry(QRect(64, 203, 16, 16));
        label_Yr->setFont(font2);
        label_Yr->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Yr->setAlignment(Qt::AlignCenter);
        label_Zr = new QLabel(transform);
        label_Zr->setObjectName("label_Zr");
        label_Zr->setGeometry(QRect(123, 203, 16, 16));
        label_Zr->setFont(font2);
        label_Zr->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Zr->setAlignment(Qt::AlignCenter);
        label_Xr_Slider = new QLabel(transform);
        label_Xr_Slider->setObjectName("label_Xr_Slider");
        label_Xr_Slider->setGeometry(QRect(9, 231, 16, 18));
        label_Xr_Slider->setFont(font1);
        label_Xr_Slider->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Xr_Slider->setAlignment(Qt::AlignCenter);
        label_Yr_Slider = new QLabel(transform);
        label_Yr_Slider->setObjectName("label_Yr_Slider");
        label_Yr_Slider->setGeometry(QRect(10, 261, 16, 18));
        label_Yr_Slider->setFont(font1);
        label_Yr_Slider->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Yr_Slider->setAlignment(Qt::AlignCenter);
        label_Zr_Slider = new QLabel(transform);
        label_Zr_Slider->setObjectName("label_Zr_Slider");
        label_Zr_Slider->setGeometry(QRect(10, 291, 16, 18));
        label_Zr_Slider->setFont(font1);
        label_Zr_Slider->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Zr_Slider->setAlignment(Qt::AlignCenter);
        label_transformBorder = new QLabel(transform);
        label_transformBorder->setObjectName("label_transformBorder");
        label_transformBorder->setGeometry(QRect(-1, 159, 191, 161));
        label_transformBorder->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"}"));
        label_Xm_Fact = new QLabel(transform);
        label_Xm_Fact->setObjectName("label_Xm_Fact");
        label_Xm_Fact->setGeometry(QRect(2, 70, 16, 16));
        label_Xm_Fact->setFont(font2);
        label_Xm_Fact->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Xm_Fact->setAlignment(Qt::AlignCenter);
        spinBox_MoveY_Fact = new QSpinBox(transform);
        spinBox_MoveY_Fact->setObjectName("spinBox_MoveY_Fact");
        spinBox_MoveY_Fact->setGeometry(QRect(18, 97, 47, 22));
        spinBox_MoveY_Fact->setFont(font2);
        spinBox_MoveY_Fact->setAlignment(Qt::AlignCenter);
        spinBox_MoveY_Fact->setMinimum(1);
        spinBox_MoveY_Fact->setMaximum(10);
        spinBox_MoveY_Fact->setValue(1);
        label_Zm_Fact = new QLabel(transform);
        label_Zm_Fact->setObjectName("label_Zm_Fact");
        label_Zm_Fact->setGeometry(QRect(2, 130, 16, 16));
        label_Zm_Fact->setFont(font2);
        label_Zm_Fact->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Zm_Fact->setAlignment(Qt::AlignCenter);
        label_Ym_Fact = new QLabel(transform);
        label_Ym_Fact->setObjectName("label_Ym_Fact");
        label_Ym_Fact->setGeometry(QRect(2, 100, 16, 16));
        label_Ym_Fact->setFont(font2);
        label_Ym_Fact->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Ym_Fact->setAlignment(Qt::AlignCenter);
        spinBox_MoveZ_Fact = new QSpinBox(transform);
        spinBox_MoveZ_Fact->setObjectName("spinBox_MoveZ_Fact");
        spinBox_MoveZ_Fact->setGeometry(QRect(18, 127, 47, 22));
        spinBox_MoveZ_Fact->setFont(font2);
        spinBox_MoveZ_Fact->setAlignment(Qt::AlignCenter);
        spinBox_MoveZ_Fact->setMinimum(1);
        spinBox_MoveZ_Fact->setMaximum(10);
        spinBox_MoveZ_Fact->setValue(1);
        spinBox_MoveX_Fact = new QSpinBox(transform);
        spinBox_MoveX_Fact->setObjectName("spinBox_MoveX_Fact");
        spinBox_MoveX_Fact->setGeometry(QRect(18, 67, 47, 22));
        spinBox_MoveX_Fact->setFont(font2);
        spinBox_MoveX_Fact->setAlignment(Qt::AlignCenter);
        spinBox_MoveX_Fact->setMinimum(1);
        spinBox_MoveX_Fact->setMaximum(10);
        spinBox_MoveX_Fact->setValue(1);
        horizontalSlider_moveX = new QSlider(transform);
        horizontalSlider_moveX->setObjectName("horizontalSlider_moveX");
        horizontalSlider_moveX->setGeometry(QRect(70, 67, 111, 25));
        horizontalSlider_moveX->setMinimum(-100);
        horizontalSlider_moveX->setMaximum(100);
        horizontalSlider_moveX->setOrientation(Qt::Horizontal);
        horizontalSlider_moveY = new QSlider(transform);
        horizontalSlider_moveY->setObjectName("horizontalSlider_moveY");
        horizontalSlider_moveY->setGeometry(QRect(70, 97, 111, 25));
        horizontalSlider_moveY->setMinimum(-100);
        horizontalSlider_moveY->setMaximum(100);
        horizontalSlider_moveY->setOrientation(Qt::Horizontal);
        horizontalSlider_moveZ = new QSlider(transform);
        horizontalSlider_moveZ->setObjectName("horizontalSlider_moveZ");
        horizontalSlider_moveZ->setGeometry(QRect(70, 127, 111, 25));
        horizontalSlider_moveZ->setMinimum(-100);
        horizontalSlider_moveZ->setMaximum(100);
        horizontalSlider_moveZ->setOrientation(Qt::Horizontal);
        label_Xm = new QLabel(transform);
        label_Xm->setObjectName("label_Xm");
        label_Xm->setGeometry(QRect(2, 37, 16, 16));
        label_Xm->setFont(font2);
        label_Xm->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Xm->setAlignment(Qt::AlignCenter);
        spinBox_MoveY = new QSpinBox(transform);
        spinBox_MoveY->setObjectName("spinBox_MoveY");
        spinBox_MoveY->setGeometry(QRect(78, 34, 47, 22));
        spinBox_MoveY->setFont(font2);
        spinBox_MoveY->setAlignment(Qt::AlignCenter);
        spinBox_MoveY->setMinimum(-100);
        spinBox_MoveY->setMaximum(100);
        label_Zm = new QLabel(transform);
        label_Zm->setObjectName("label_Zm");
        label_Zm->setGeometry(QRect(123, 37, 16, 16));
        label_Zm->setFont(font2);
        label_Zm->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Zm->setAlignment(Qt::AlignCenter);
        label_Ym = new QLabel(transform);
        label_Ym->setObjectName("label_Ym");
        label_Ym->setGeometry(QRect(64, 37, 16, 16));
        label_Ym->setFont(font2);
        label_Ym->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Ym->setAlignment(Qt::AlignCenter);
        spinBox_MoveZ = new QSpinBox(transform);
        spinBox_MoveZ->setObjectName("spinBox_MoveZ");
        spinBox_MoveZ->setGeometry(QRect(138, 34, 47, 22));
        spinBox_MoveZ->setFont(font2);
        spinBox_MoveZ->setAlignment(Qt::AlignCenter);
        spinBox_MoveZ->setMinimum(-100);
        spinBox_MoveZ->setMaximum(100);
        spinBox_MoveX = new QSpinBox(transform);
        spinBox_MoveX->setObjectName("spinBox_MoveX");
        spinBox_MoveX->setGeometry(QRect(18, 34, 47, 22));
        spinBox_MoveX->setFont(font2);
        spinBox_MoveX->setAlignment(Qt::AlignCenter);
        spinBox_MoveX->setMinimum(-100);
        spinBox_MoveX->setMaximum(100);
        tabWidget->addTab(transform, QString());
        label_transformBorder->raise();
        label_Rotate->raise();
        horizontalSlider_rotX->raise();
        label_Move->raise();
        horizontalSlider_Scale->raise();
        spinBox_rotY->raise();
        label_Zr->raise();
        label_Yr_Slider->raise();
        horizontalSlider_rotZ->raise();
        horizontalSlider_rotY->raise();
        label_Xr->raise();
        label_Zr_Slider->raise();
        label_Scale->raise();
        label_Yr->raise();
        spinBox_rotZ->raise();
        spinBox_rotX->raise();
        label_Xr_Slider->raise();
        label_Xm_Fact->raise();
        spinBox_MoveY_Fact->raise();
        label_Zm_Fact->raise();
        label_Ym_Fact->raise();
        spinBox_MoveZ_Fact->raise();
        spinBox_MoveX_Fact->raise();
        horizontalSlider_moveX->raise();
        horizontalSlider_moveY->raise();
        horizontalSlider_moveZ->raise();
        label_Xm->raise();
        spinBox_MoveY->raise();
        label_Zm->raise();
        label_Ym->raise();
        spinBox_MoveZ->raise();
        spinBox_MoveX->raise();
        style = new QWidget();
        style->setObjectName("style");
        pushButton_widgetColor = new QPushButton(style);
        pushButton_widgetColor->setObjectName("pushButton_widgetColor");
        pushButton_widgetColor->setGeometry(QRect(10, 29, 141, 22));
        pushButton_widgetColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    	border: 1px solid rgb(242, 165, 60);\n"
"    	background-color: rgb(95, 95, 95);\n"
"    	min-width: 70px;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        pushButton_lineColor = new QPushButton(style);
        pushButton_lineColor->setObjectName("pushButton_lineColor");
        pushButton_lineColor->setGeometry(QRect(10, 59, 141, 22));
        pushButton_lineColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    	border: 1px solid rgb(242, 165, 60);\n"
"    	background-color: rgb(95, 95, 95);\n"
"    	min-width: 70px;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        pushButton_vertexColor = new QPushButton(style);
        pushButton_vertexColor->setObjectName("pushButton_vertexColor");
        pushButton_vertexColor->setGeometry(QRect(10, 89, 141, 22));
        pushButton_vertexColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    	border: 1px solid rgb(242, 165, 60);\n"
"    	background-color: rgb(95, 95, 95);\n"
"    	min-width: 70px;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        label_backgroundColor = new QLabel(style);
        label_backgroundColor->setObjectName("label_backgroundColor");
        label_backgroundColor->setGeometry(QRect(160, 32, 16, 16));
        label_backgroundColor->setStyleSheet(QString::fromUtf8("QLabel {\n"
" 	border: 1px solid white;\n"
"	background-color: rgb(58, 57, 57);\n"
"}"));
        label_lineColor = new QLabel(style);
        label_lineColor->setObjectName("label_lineColor");
        label_lineColor->setGeometry(QRect(160, 62, 16, 16));
        label_lineColor->setStyleSheet(QString::fromUtf8("QLabel {\n"
" 	border: 1px solid white;\n"
"	background: rgb(242, 165, 60);\n"
"}"));
        label_vertexColor = new QLabel(style);
        label_vertexColor->setObjectName("label_vertexColor");
        label_vertexColor->setGeometry(QRect(160, 92, 16, 16));
        label_vertexColor->setStyleSheet(QString::fromUtf8("QLabel {\n"
" 	border: 1px solid white;\n"
"	background: rgb(242, 165, 60);\n"
"}"));
        label_StyleBorder = new QLabel(style);
        label_StyleBorder->setObjectName("label_StyleBorder");
        label_StyleBorder->setGeometry(QRect(-1, 120, 191, 99));
        label_StyleBorder->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"}"));
        label_Colors = new QLabel(style);
        label_Colors->setObjectName("label_Colors");
        label_Colors->setGeometry(QRect(0, 4, 191, 20));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        label_Colors->setFont(font4);
        label_Colors->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Colors->setAlignment(Qt::AlignCenter);
        label_Lines = new QLabel(style);
        label_Lines->setObjectName("label_Lines");
        label_Lines->setGeometry(QRect(0, 123, 191, 20));
        label_Lines->setFont(font4);
        label_Lines->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Lines->setAlignment(Qt::AlignCenter);
        doubleSpinBox_LineSize = new QDoubleSpinBox(style);
        doubleSpinBox_LineSize->setObjectName("doubleSpinBox_LineSize");
        doubleSpinBox_LineSize->setGeometry(QRect(100, 168, 81, 22));
        doubleSpinBox_LineSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_LineSize->setDecimals(1);
        doubleSpinBox_LineSize->setMinimum(1.000000000000000);
        radioButton_LineSolid = new QRadioButton(style);
        buttonGroup_Line = new QButtonGroup(MainWindow);
        buttonGroup_Line->setObjectName("buttonGroup_Line");
        buttonGroup_Line->addButton(radioButton_LineSolid);
        radioButton_LineSolid->setObjectName("radioButton_LineSolid");
        radioButton_LineSolid->setGeometry(QRect(10, 145, 99, 20));
        radioButton_LineSolid->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        radioButton_LineDashed = new QRadioButton(style);
        buttonGroup_Line->addButton(radioButton_LineDashed);
        radioButton_LineDashed->setObjectName("radioButton_LineDashed");
        radioButton_LineDashed->setGeometry(QRect(100, 145, 89, 20));
        radioButton_LineDashed->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        label_Vertexes = new QLabel(style);
        label_Vertexes->setObjectName("label_Vertexes");
        label_Vertexes->setGeometry(QRect(0, 225, 191, 20));
        label_Vertexes->setFont(font4);
        label_Vertexes->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Vertexes->setAlignment(Qt::AlignCenter);
        radioButton_VertexNone = new QRadioButton(style);
        buttonGroup_Vertex = new QButtonGroup(MainWindow);
        buttonGroup_Vertex->setObjectName("buttonGroup_Vertex");
        buttonGroup_Vertex->addButton(radioButton_VertexNone);
        radioButton_VertexNone->setObjectName("radioButton_VertexNone");
        radioButton_VertexNone->setGeometry(QRect(10, 247, 99, 20));
        radioButton_VertexNone->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        radioButton_VertexCircle = new QRadioButton(style);
        buttonGroup_Vertex->addButton(radioButton_VertexCircle);
        radioButton_VertexCircle->setObjectName("radioButton_VertexCircle");
        radioButton_VertexCircle->setGeometry(QRect(100, 247, 99, 20));
        radioButton_VertexCircle->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        radioButton_VertexSquare = new QRadioButton(style);
        buttonGroup_Vertex->addButton(radioButton_VertexSquare);
        radioButton_VertexSquare->setObjectName("radioButton_VertexSquare");
        radioButton_VertexSquare->setGeometry(QRect(10, 269, 89, 20));
        radioButton_VertexSquare->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        doubleSpinBox_VertexSize = new QDoubleSpinBox(style);
        doubleSpinBox_VertexSize->setObjectName("doubleSpinBox_VertexSize");
        doubleSpinBox_VertexSize->setGeometry(QRect(100, 291, 81, 22));
        doubleSpinBox_VertexSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_VertexSize->setDecimals(1);
        doubleSpinBox_VertexSize->setMinimum(1.000000000000000);
        label_StyleBorder_2 = new QLabel(style);
        label_StyleBorder_2->setObjectName("label_StyleBorder_2");
        label_StyleBorder_2->setGeometry(QRect(-1, 340, 191, 65));
        label_StyleBorder_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"}"));
        label_Projection = new QLabel(style);
        label_Projection->setObjectName("label_Projection");
        label_Projection->setGeometry(QRect(0, 344, 191, 20));
        label_Projection->setFont(font4);
        label_Projection->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_Projection->setAlignment(Qt::AlignCenter);
        radioButton_Parallel = new QRadioButton(style);
        buttonGroup_Projection = new QButtonGroup(MainWindow);
        buttonGroup_Projection->setObjectName("buttonGroup_Projection");
        buttonGroup_Projection->addButton(radioButton_Parallel);
        radioButton_Parallel->setObjectName("radioButton_Parallel");
        radioButton_Parallel->setGeometry(QRect(10, 372, 81, 20));
        radioButton_Parallel->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        radioButton_Central = new QRadioButton(style);
        buttonGroup_Projection->addButton(radioButton_Central);
        radioButton_Central->setObjectName("radioButton_Central");
        radioButton_Central->setGeometry(QRect(100, 372, 81, 20));
        radioButton_Central->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: white;\n"
"}"));
        label_VertexSize = new QLabel(style);
        label_VertexSize->setObjectName("label_VertexSize");
        label_VertexSize->setGeometry(QRect(14, 291, 81, 20));
        label_VertexSize->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_VertexSize_2 = new QLabel(style);
        label_VertexSize_2->setObjectName("label_VertexSize_2");
        label_VertexSize_2->setGeometry(QRect(14, 168, 81, 20));
        label_VertexSize_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        horizontalSlider_VertexSize = new QSlider(style);
        horizontalSlider_VertexSize->setObjectName("horizontalSlider_VertexSize");
        horizontalSlider_VertexSize->setGeometry(QRect(12, 313, 167, 25));
        horizontalSlider_VertexSize->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider_VertexSize->setMinimum(1);
        horizontalSlider_VertexSize->setMaximum(100);
        horizontalSlider_VertexSize->setOrientation(Qt::Horizontal);
        horizontalSlider_LineSize = new QSlider(style);
        horizontalSlider_LineSize->setObjectName("horizontalSlider_LineSize");
        horizontalSlider_LineSize->setGeometry(QRect(12, 190, 168, 25));
        horizontalSlider_LineSize->setMinimum(1);
        horizontalSlider_LineSize->setMaximum(100);
        horizontalSlider_LineSize->setOrientation(Qt::Horizontal);
        tabWidget->addTab(style, QString());
        pushButton_screenshot = new QPushButton(centralwidget);
        pushButton_screenshot->setObjectName("pushButton_screenshot");
        pushButton_screenshot->setGeometry(QRect(9, 514, 191, 48));
        QFont font5;
        font5.setPointSize(13);
        pushButton_screenshot->setFont(font5);
        pushButton_screenshot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"    background-color: rgb(58, 57, 57);\n"
"    min-width: 70px;\n"
"	color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(97, 96, 96);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        label_info_name = new QLabel(centralwidget);
        label_info_name->setObjectName("label_info_name");
        label_info_name->setGeometry(QRect(11, 567, 61, 16));
        label_info_name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_info_vertex = new QLabel(centralwidget);
        label_info_vertex->setObjectName("label_info_vertex");
        label_info_vertex->setGeometry(QRect(210, 567, 61, 16));
        label_info_vertex->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_info_polygons = new QLabel(centralwidget);
        label_info_polygons->setObjectName("label_info_polygons");
        label_info_polygons->setGeometry(QRect(384, 567, 61, 16));
        label_info_polygons->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(76, 567, 129, 16));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setUnderline(true);
        label_name->setFont(font6);
        label_name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_vertex = new QLabel(centralwidget);
        label_vertex->setObjectName("label_vertex");
        label_vertex->setGeometry(QRect(271, 567, 111, 16));
        QFont font7;
        font7.setBold(true);
        label_vertex->setFont(font7);
        label_vertex->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_polygons = new QLabel(centralwidget);
        label_polygons->setObjectName("label_polygons");
        label_polygons->setGeometry(QRect(445, 567, 111, 16));
        label_polygons->setFont(font7);
        label_polygons->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_widgetBorder = new QLabel(centralwidget);
        label_widgetBorder->setObjectName("label_widgetBorder");
        label_widgetBorder->setGeometry(QRect(209, 9, 583, 553));
        label_widgetBorder->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        label_widgetBorder->raise();
        horizontalLayoutWidget->raise();
        pushButton_openFile->raise();
        tabWidget->raise();
        pushButton_screenshot->raise();
        label_info_name->raise();
        label_info_vertex->raise();
        label_info_polygons->raise();
        label_name->raise();
        label_vertex->raise();
        label_polygons->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_openFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        label_Scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_Rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_Move->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        label_Xr->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_Yr->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_Zr->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_Xr_Slider->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_Yr_Slider->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_Zr_Slider->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_transformBorder->setText(QString());
        label_Xm_Fact->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_Zm_Fact->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_Ym_Fact->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_Xm->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_Zm->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_Ym->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(transform), QCoreApplication::translate("MainWindow", "Transform", nullptr));
        pushButton_widgetColor->setText(QCoreApplication::translate("MainWindow", "Background Color", nullptr));
        pushButton_lineColor->setText(QCoreApplication::translate("MainWindow", "Line Color", nullptr));
        pushButton_vertexColor->setText(QCoreApplication::translate("MainWindow", "Vertex Color", nullptr));
        label_backgroundColor->setText(QString());
        label_lineColor->setText(QString());
        label_vertexColor->setText(QString());
        label_StyleBorder->setText(QString());
        label_Colors->setText(QCoreApplication::translate("MainWindow", "Colors", nullptr));
        label_Lines->setText(QCoreApplication::translate("MainWindow", "Line Style", nullptr));
        radioButton_LineSolid->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        radioButton_LineDashed->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        label_Vertexes->setText(QCoreApplication::translate("MainWindow", "Vertex Style", nullptr));
        radioButton_VertexNone->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        radioButton_VertexCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        radioButton_VertexSquare->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        label_StyleBorder_2->setText(QString());
        label_Projection->setText(QCoreApplication::translate("MainWindow", "Projection type", nullptr));
        radioButton_Parallel->setText(QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        radioButton_Central->setText(QCoreApplication::translate("MainWindow", "Central", nullptr));
        label_VertexSize->setText(QCoreApplication::translate("MainWindow", "Vertex size:", nullptr));
        label_VertexSize_2->setText(QCoreApplication::translate("MainWindow", "Line width:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(style), QCoreApplication::translate("MainWindow", "Style", nullptr));
        pushButton_screenshot->setText(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
        label_info_name->setText(QCoreApplication::translate("MainWindow", "File name:", nullptr));
        label_info_vertex->setText(QCoreApplication::translate("MainWindow", "Vertexes:", nullptr));
        label_info_polygons->setText(QCoreApplication::translate("MainWindow", "Polygons:", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "example.obj", nullptr));
        label_vertex->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_polygons->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_widgetBorder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
