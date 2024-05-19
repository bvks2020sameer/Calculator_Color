/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *add;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *decimal;
    QPushButton *div;
    QPushButton *btn0;
    QPushButton *btn7;
    QPushButton *mult;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *result;
    QPushButton *sub;
    QPushButton *btn3;
    QPushButton *btn6;
    QPushButton *btn8;
    QPushButton *btn9;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *clr_one;
    QPushButton *clr;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 13, 61, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 20, 91, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 16, 76, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 7, 30, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 9, 41, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(0, 6, 30, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(255, 255, 255, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(0, 7, 30, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(0, 9, 43, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        MainWindow->setPalette(palette);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-calculator")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 751, 91));
        QPalette palette1;
        QBrush brush12(QColor(255, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        lineEdit->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font.setPointSize(36);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);
        lineEdit->setClearButtonEnabled(false);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 180, 761, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        add = new QPushButton(gridLayoutWidget);
        add->setObjectName("add");
        add->setMinimumSize(QSize(0, 65));
        QPalette palette2;
        QBrush brush13(QColor(197, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        add->setPalette(palette2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Linux Libertine Display G")});
        font1.setPointSize(16);
        add->setFont(font1);

        gridLayout->addWidget(add, 0, 3, 1, 1);

        btn4 = new QPushButton(gridLayoutWidget);
        btn4->setObjectName("btn4");
        btn4->setMinimumSize(QSize(0, 65));
        QPalette palette3;
        QBrush brush14(QColor(0, 170, 156, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn4->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Linux Libertine Display G")});
        font2.setPointSize(26);
        btn4->setFont(font2);

        gridLayout->addWidget(btn4, 1, 2, 1, 1);

        btn5 = new QPushButton(gridLayoutWidget);
        btn5->setObjectName("btn5");
        btn5->setMinimumSize(QSize(0, 65));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn5->setPalette(palette4);
        btn5->setFont(font2);

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        decimal = new QPushButton(gridLayoutWidget);
        decimal->setObjectName("decimal");
        decimal->setMinimumSize(QSize(0, 65));
        QPalette palette5;
        QBrush brush15(QColor(154, 154, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        decimal->setPalette(palette5);
        decimal->setFont(font2);

        gridLayout->addWidget(decimal, 3, 0, 1, 1);

        div = new QPushButton(gridLayoutWidget);
        div->setObjectName("div");
        div->setMinimumSize(QSize(0, 65));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        div->setPalette(palette6);
        div->setFont(font1);

        gridLayout->addWidget(div, 3, 3, 1, 1);

        btn0 = new QPushButton(gridLayoutWidget);
        btn0->setObjectName("btn0");
        btn0->setMinimumSize(QSize(0, 65));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn0->setPalette(palette7);
        btn0->setFont(font2);

        gridLayout->addWidget(btn0, 3, 1, 1, 1);

        btn7 = new QPushButton(gridLayoutWidget);
        btn7->setObjectName("btn7");
        btn7->setMinimumSize(QSize(0, 65));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn7->setPalette(palette8);
        btn7->setFont(font2);

        gridLayout->addWidget(btn7, 0, 2, 1, 1);

        mult = new QPushButton(gridLayoutWidget);
        mult->setObjectName("mult");
        mult->setMinimumSize(QSize(0, 65));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        mult->setPalette(palette9);
        mult->setFont(font1);

        gridLayout->addWidget(mult, 2, 3, 1, 1);

        btn2 = new QPushButton(gridLayoutWidget);
        btn2->setObjectName("btn2");
        btn2->setMinimumSize(QSize(0, 65));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn2->setPalette(palette10);
        btn2->setFont(font2);

        gridLayout->addWidget(btn2, 2, 1, 1, 1);

        btn1 = new QPushButton(gridLayoutWidget);
        btn1->setObjectName("btn1");
        btn1->setMinimumSize(QSize(0, 65));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn1->setPalette(palette11);
        btn1->setFont(font2);

        gridLayout->addWidget(btn1, 2, 2, 1, 1);

        result = new QPushButton(gridLayoutWidget);
        result->setObjectName("result");
        result->setMinimumSize(QSize(0, 65));
        QPalette palette12;
        QBrush brush16(QColor(0, 85, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        result->setPalette(palette12);
        result->setFont(font2);
        result->setCursor(QCursor(Qt::OpenHandCursor));
        result->setMouseTracking(false);
        result->setAutoFillBackground(false);

        gridLayout->addWidget(result, 3, 2, 1, 1);

        sub = new QPushButton(gridLayoutWidget);
        sub->setObjectName("sub");
        sub->setMinimumSize(QSize(0, 65));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        sub->setPalette(palette13);
        sub->setFont(font1);

        gridLayout->addWidget(sub, 1, 3, 1, 1);

        btn3 = new QPushButton(gridLayoutWidget);
        btn3->setObjectName("btn3");
        btn3->setMinimumSize(QSize(0, 65));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn3->setPalette(palette14);
        btn3->setFont(font2);

        gridLayout->addWidget(btn3, 2, 0, 1, 1);

        btn6 = new QPushButton(gridLayoutWidget);
        btn6->setObjectName("btn6");
        btn6->setMinimumSize(QSize(0, 65));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn6->setPalette(palette15);
        btn6->setFont(font2);

        gridLayout->addWidget(btn6, 1, 0, 1, 1);

        btn8 = new QPushButton(gridLayoutWidget);
        btn8->setObjectName("btn8");
        btn8->setMinimumSize(QSize(0, 65));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn8->setPalette(palette16);
        btn8->setFont(font2);

        gridLayout->addWidget(btn8, 0, 1, 1, 1);

        btn9 = new QPushButton(gridLayoutWidget);
        btn9->setObjectName("btn9");
        btn9->setMinimumSize(QSize(0, 65));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        btn9->setPalette(palette17);
        btn9->setFont(font2);

        gridLayout->addWidget(btn9, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(420, 110, 361, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clr_one = new QPushButton(horizontalLayoutWidget);
        clr_one->setObjectName("clr_one");
        clr_one->setMinimumSize(QSize(0, 65));
        QPalette palette18;
        QBrush brush17(QColor(108, 108, 108, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        clr_one->setPalette(palette18);
        clr_one->setFont(font1);
        clr_one->setAutoFillBackground(false);

        horizontalLayout->addWidget(clr_one);

        clr = new QPushButton(horizontalLayoutWidget);
        clr->setObjectName("clr");
        clr->setMinimumSize(QSize(0, 65));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        clr->setPalette(palette19);
        clr->setFont(font1);

        horizontalLayout->addWidget(clr);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        clr_one->setText(QCoreApplication::translate("MainWindow", "Clear ", nullptr));
        clr->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
