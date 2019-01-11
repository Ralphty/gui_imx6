/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QAction *action;
    QAction *actionSave;
    QAction *actionClearBytes;
    QAction *actionReadPortInterval;
    QAction *actionLoadfile;
    QAction *actionCleanPort;
    QAction *actionWriteToFile;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *delayspinBox;
    QComboBox *dataBitsComboBox;
    QComboBox *portNameComboBox;
    QLabel *label_2;
    QLabel *label_6;
    QComboBox *baudRateComboBox;
    QLabel *label_3;
    QComboBox *stopBitsComboBox;
    QComboBox *parityComboBox;
    QLabel *label_5;
    QLabel *label_4;
    QGridLayout *gridLayout_3;
    QPushButton *clearUpBtn;
    QLabel *label_7;
    QLCDNumber *recvbyteslcdNumber;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QRadioButton *chradioButton;
    QRadioButton *ccradioButton;
    QTextBrowser *textBrowser;
    QCheckBox *obocheckBox;
    QLineEdit *sendMsgLineEdit;
    QPushButton *sendmsgBtn;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(662, 276);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setStyleSheet(QString::fromUtf8("QDialog{background:rgb(229, 255, 239)}\n"
"QMenuBar{background:url(:/new/prefix2/src/header.bmp)}\n"
"QStatusBar{background:url(:/new/prefix2/src/header.bmp)}\n"
"QPushButton{background:url(:/new/prefix2/src/header.bmp)}\n"
"QLCDNumber{background:url(:/new/prefix2/src/lcd.bmp)}\n"
"QLabel{background:url(:/new/prefix2/src/header.bmp)}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        MainWindow->setIconSize(QSize(16, 16));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(true);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setCheckable(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/src/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/src/mesage.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionClearBytes = new QAction(MainWindow);
        actionClearBytes->setObjectName(QString::fromUtf8("actionClearBytes"));
        actionReadPortInterval = new QAction(MainWindow);
        actionReadPortInterval->setObjectName(QString::fromUtf8("actionReadPortInterval"));
        actionLoadfile = new QAction(MainWindow);
        actionLoadfile->setObjectName(QString::fromUtf8("actionLoadfile"));
        actionCleanPort = new QAction(MainWindow);
        actionCleanPort->setObjectName(QString::fromUtf8("actionCleanPort"));
        actionWriteToFile = new QAction(MainWindow);
        actionWriteToFile->setObjectName(QString::fromUtf8("actionWriteToFile"));
        actionWriteToFile->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        delayspinBox = new QSpinBox(centralWidget);
        delayspinBox->setObjectName(QString::fromUtf8("delayspinBox"));
        sizePolicy.setHeightForWidth(delayspinBox->sizePolicy().hasHeightForWidth());
        delayspinBox->setSizePolicy(sizePolicy);
        delayspinBox->setMinimum(10);
        delayspinBox->setMaximum(5000);
        delayspinBox->setValue(200);

        gridLayout->addWidget(delayspinBox, 5, 1, 1, 1);

        dataBitsComboBox = new QComboBox(centralWidget);
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));
        sizePolicy.setHeightForWidth(dataBitsComboBox->sizePolicy().hasHeightForWidth());
        dataBitsComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dataBitsComboBox, 2, 1, 1, 1);

        portNameComboBox = new QComboBox(centralWidget);
        portNameComboBox->setObjectName(QString::fromUtf8("portNameComboBox"));
        sizePolicy.setHeightForWidth(portNameComboBox->sizePolicy().hasHeightForWidth());
        portNameComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(portNameComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        baudRateComboBox = new QComboBox(centralWidget);
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));
        sizePolicy.setHeightForWidth(baudRateComboBox->sizePolicy().hasHeightForWidth());
        baudRateComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(baudRateComboBox, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        stopBitsComboBox = new QComboBox(centralWidget);
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));
        sizePolicy.setHeightForWidth(stopBitsComboBox->sizePolicy().hasHeightForWidth());
        stopBitsComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(stopBitsComboBox, 4, 1, 1, 1);

        parityComboBox = new QComboBox(centralWidget);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));
        sizePolicy.setHeightForWidth(parityComboBox->sizePolicy().hasHeightForWidth());
        parityComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(parityComboBox, 3, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        clearUpBtn = new QPushButton(centralWidget);
        clearUpBtn->setObjectName(QString::fromUtf8("clearUpBtn"));
        sizePolicy.setHeightForWidth(clearUpBtn->sizePolicy().hasHeightForWidth());
        clearUpBtn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(clearUpBtn, 2, 5, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        recvbyteslcdNumber = new QLCDNumber(centralWidget);
        recvbyteslcdNumber->setObjectName(QString::fromUtf8("recvbyteslcdNumber"));
        sizePolicy.setHeightForWidth(recvbyteslcdNumber->sizePolicy().hasHeightForWidth());
        recvbyteslcdNumber->setSizePolicy(sizePolicy);
        recvbyteslcdNumber->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(recvbyteslcdNumber, 2, 4, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chradioButton = new QRadioButton(frame);
        chradioButton->setObjectName(QString::fromUtf8("chradioButton"));
        sizePolicy.setHeightForWidth(chradioButton->sizePolicy().hasHeightForWidth());
        chradioButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(chradioButton, 0, 1, 1, 1);

        ccradioButton = new QRadioButton(frame);
        ccradioButton->setObjectName(QString::fromUtf8("ccradioButton"));
        sizePolicy.setHeightForWidth(ccradioButton->sizePolicy().hasHeightForWidth());
        ccradioButton->setSizePolicy(sizePolicy);
        ccradioButton->setChecked(true);

        gridLayout_2->addWidget(ccradioButton, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        gridLayout_3->addWidget(frame, 1, 1, 2, 3);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(textBrowser, 3, 0, 1, 6);

        obocheckBox = new QCheckBox(centralWidget);
        obocheckBox->setObjectName(QString::fromUtf8("obocheckBox"));
        sizePolicy.setHeightForWidth(obocheckBox->sizePolicy().hasHeightForWidth());
        obocheckBox->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(obocheckBox, 0, 3, 1, 2);

        sendMsgLineEdit = new QLineEdit(centralWidget);
        sendMsgLineEdit->setObjectName(QString::fromUtf8("sendMsgLineEdit"));
        sizePolicy.setHeightForWidth(sendMsgLineEdit->sizePolicy().hasHeightForWidth());
        sendMsgLineEdit->setSizePolicy(sizePolicy);
        sendMsgLineEdit->setMaxLength(10000);
        sendMsgLineEdit->setDragEnabled(false);

        gridLayout_3->addWidget(sendMsgLineEdit, 0, 2, 1, 1);

        sendmsgBtn = new QPushButton(centralWidget);
        sendmsgBtn->setObjectName(QString::fromUtf8("sendmsgBtn"));
        sizePolicy.setHeightForWidth(sendmsgBtn->sizePolicy().hasHeightForWidth());
        sendmsgBtn->setSizePolicy(sizePolicy);
        sendmsgBtn->setAutoDefault(false);
        sendmsgBtn->setDefault(false);

        gridLayout_3->addWidget(sendmsgBtn, 0, 0, 2, 2);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        mainToolBar->setMinimumSize(QSize(0, 0));
        mainToolBar->setMaximumSize(QSize(16777215, 55));
        QFont font1;
        font1.setPointSize(9);
        mainToolBar->setFont(font1);
        mainToolBar->setCursor(QCursor(Qt::PointingHandCursor));
        mainToolBar->setFocusPolicy(Qt::StrongFocus);
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::NoToolBarArea);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAdd);
        mainToolBar->addAction(actionReadPortInterval);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClearBytes);
        mainToolBar->addAction(actionCleanPort);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        dataBitsComboBox->setCurrentIndex(3);
        portNameComboBox->setCurrentIndex(0);
        baudRateComboBox->setCurrentIndex(19);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lincom", 0, QApplication::UnicodeUTF8));
        actionAdd->setText(QApplication::translate("MainWindow", "addport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("MainWindow", "addport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAdd->setStatusTip(QApplication::translate("MainWindow", "addport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionOpen->setText(QApplication::translate("MainWindow", "openport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClose->setText(QApplication::translate("MainWindow", "closeport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionClose->setStatusTip(QApplication::translate("MainWindow", "closeport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Lincom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216Lincom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        action->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216Lincom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSave->setText(QApplication::translate("MainWindow", "savedata", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "savedata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "savedata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClearBytes->setText(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearBytes->setToolTip(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionClearBytes->setStatusTip(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionReadPortInterval->setText(QApplication::translate("MainWindow", "readms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReadPortInterval->setToolTip(QApplication::translate("MainWindow", "read ms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionReadPortInterval->setStatusTip(QApplication::translate("MainWindow", "read ms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLoadfile->setText(QApplication::translate("MainWindow", "readfile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoadfile->setToolTip(QApplication::translate("MainWindow", "read file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLoadfile->setStatusTip(QApplication::translate("MainWindow", "read file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCleanPort->setText(QApplication::translate("MainWindow", "clearport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCleanPort->setToolTip(QApplication::translate("MainWindow", "clearport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCleanPort->setStatusTip(QApplication::translate("MainWindow", "clearport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionWriteToFile->setText(QApplication::translate("MainWindow", "writefile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWriteToFile->setToolTip(QApplication::translate("MainWindow", "writefile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionWriteToFile->setStatusTip(QApplication::translate("MainWindow", "writefile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label->setText(QApplication::translate("MainWindow", "port:", 0, QApplication::UnicodeUTF8));
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8)
        );
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ttymxc1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ttymxc2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ttymxc3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ttymxc4", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "bound:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "ms:", 0, QApplication::UnicodeUTF8));
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "56000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "76800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "128000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "256000", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "databits:", 0, QApplication::UnicodeUTF8));
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8)
        );
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "N", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "O", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "E", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("MainWindow", "stopbits:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "parity:", 0, QApplication::UnicodeUTF8));
        clearUpBtn->setText(QApplication::translate("MainWindow", "clear", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Receive", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        recvbyteslcdNumber->setToolTip(QApplication::translate("MainWindow", "\345\267\262\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        chradioButton->setToolTip(QApplication::translate("MainWindow", "\344\273\245\345\255\227\347\254\246\346\226\271\345\274\217\345\217\221\351\200\201, \344\273\245\345\215\201\345\205\255\350\277\233\345\210\266\346\226\271\345\274\217\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chradioButton->setText(QApplication::translate("MainWindow", "HEX", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ccradioButton->setToolTip(QApplication::translate("MainWindow", "\344\273\245\345\255\227\347\254\246\347\232\204\346\226\271\345\274\217\345\217\221\351\200\201\345\222\214\346\216\245\346\224\266\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ccradioButton->setText(QApplication::translate("MainWindow", "char", 0, QApplication::UnicodeUTF8));
        obocheckBox->setText(QApplication::translate("MainWindow", "continue", 0, QApplication::UnicodeUTF8));
        sendMsgLineEdit->setText(QApplication::translate("MainWindow", "forlinx test text", 0, QApplication::UnicodeUTF8));
        sendmsgBtn->setText(QApplication::translate("MainWindow", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
