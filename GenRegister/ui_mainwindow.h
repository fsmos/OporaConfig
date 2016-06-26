/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *FileOpen;
    QAction *action_3;
    QAction *action;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QCheckBox *GPIOPinON;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_3;
    QComboBox *comboBox;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_6;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_7;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QGroupBox *groupBox_8;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_9;
    QCheckBox *checkBox_4;
    QGroupBox *groupBox_10;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QLabel *label_4;
    QWidget *tab_4;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QLabel *label_6;
    QCheckBox *checkBox_27;
    QFrame *line;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *tab_10;
    QWidget *tab_11;
    QWidget *tab_12;
    QWidget *tab_13;
    QWidget *tab_14;
    QWidget *tab_15;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1010, 646);
        FileOpen = new QAction(MainWindow);
        FileOpen->setObjectName(QStringLiteral("FileOpen"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1231, 621));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 20, 61, 551));
        listWidget_2 = new QListWidget(tab);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(60, 20, 51, 551));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 41, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 0, 31, 17));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 100, 120, 81));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        GPIOPinON = new QCheckBox(groupBox);
        GPIOPinON->setObjectName(QStringLiteral("GPIOPinON"));
        GPIOPinON->setGeometry(QRect(10, 30, 94, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 40, 1081, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 100, 211, 80));
        groupBox_2->setFont(font);
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 82, 17));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 82, 17));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(480, 100, 181, 80));
        groupBox_3->setFont(font);
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 161, 22));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(680, 100, 141, 80));
        groupBox_4->setFont(font);
        radioButton_3 = new QRadioButton(groupBox_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 20, 101, 17));
        radioButton_4 = new QRadioButton(groupBox_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 50, 82, 17));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(830, 100, 241, 80));
        groupBox_5->setFont(font);
        checkBox = new QCheckBox(groupBox_5);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 20, 151, 17));
        checkBox_2 = new QCheckBox(groupBox_5);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 50, 161, 17));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(120, 200, 120, 80));
        groupBox_6->setFont(font);
        checkBox_3 = new QCheckBox(groupBox_6);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 30, 81, 17));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(270, 200, 201, 80));
        groupBox_7->setFont(font);
        radioButton_5 = new QRadioButton(groupBox_7);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 20, 171, 17));
        radioButton_6 = new QRadioButton(groupBox_7);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 40, 171, 17));
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(480, 200, 181, 80));
        groupBox_8->setFont(font);
        comboBox_2 = new QComboBox(groupBox_8);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 30, 161, 22));
        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(680, 200, 141, 80));
        groupBox_9->setFont(font);
        checkBox_4 = new QCheckBox(groupBox_9);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 30, 70, 17));
        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(830, 190, 241, 80));
        groupBox_10->setFont(font);
        checkBox_6 = new QCheckBox(groupBox_10);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(10, 30, 191, 17));
        checkBox_5 = new QCheckBox(groupBox_10);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 50, 191, 17));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1221, 611));
        tabWidget_2->setFocusPolicy(Qt::TabFocus);
        tabWidget_2->setAutoFillBackground(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        checkBox_7 = new QCheckBox(tab_3);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(20, 40, 561, 41));
        checkBox_8 = new QCheckBox(tab_3);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(20, 70, 401, 31));
        checkBox_9 = new QCheckBox(tab_3);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(20, 100, 351, 31));
        checkBox_10 = new QCheckBox(tab_3);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setGeometry(QRect(20, 120, 341, 41));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 451, 16));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        comboBox_3 = new QComboBox(tab_4);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(20, 40, 71, 22));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 101, 16));
        comboBox_4 = new QComboBox(tab_4);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(300, 40, 71, 22));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 10, 101, 16));
        checkBox_27 = new QCheckBox(tab_4);
        checkBox_27->setObjectName(QStringLiteral("checkBox_27"));
        checkBox_27->setGeometry(QRect(20, 90, 171, 18));
        line = new QFrame(tab_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(193, 0, 20, 561));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tabWidget_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        tabWidget_2->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tabWidget_2->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        tabWidget_2->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tabWidget_2->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        tabWidget_2->addTab(tab_15, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1010, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(action);
        menu->addAction(FileOpen);
        menu->addSeparator();
        menu->addAction(action_3);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        FileOpen->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "GPIOA", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "GPIOB", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "GPIOC", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "GPIOD", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "GPIOE", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "GPIOF", 0));
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(0);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "0", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(1);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "1", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_2->item(2);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "2", 0));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_2->item(3);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "3", 0));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_2->item(4);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "4", 0));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_2->item(5);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "5", 0));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_2->item(6);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "6", 0));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_2->item(7);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "7", 0));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_2->item(8);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "8", 0));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_2->item(9);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "9", 0));
        QListWidgetItem *___qlistwidgetitem16 = listWidget_2->item(10);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "10", 0));
        QListWidgetItem *___qlistwidgetitem17 = listWidget_2->item(11);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "11", 0));
        QListWidgetItem *___qlistwidgetitem18 = listWidget_2->item(12);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "12", 0));
        QListWidgetItem *___qlistwidgetitem19 = listWidget_2->item(13);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "13", 0));
        QListWidgetItem *___qlistwidgetitem20 = listWidget_2->item(14);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "14", 0));
        QListWidgetItem *___qlistwidgetitem21 = listWidget_2->item(15);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "15", 0));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        label->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\200\321\202", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\270\320\275", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", 0));
        GPIOPinON->setText(QApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\321\221\320\275", 0));
        label_3->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\321\200\321\202\320\260", 0));
        radioButton->setText(QApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217 \320\277\320\276\321\200\321\202\320\260", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\237\320\276\321\200\321\202", 0)
         << QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\260\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\321\217", 0)
         << QApplication::translate("MainWindow", "\320\220\320\273\321\214\321\202\320\265\321\200\320\275\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\321\217", 0)
         << QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\275\320\260\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\321\217", 0)
        );
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\320\276\321\200\321\202\320\260", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\276\320\263\320\276\320\262\321\213\320\271", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "\320\246\320\270\321\204\321\200\320\276\320\262\320\276\320\271", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\321\217\320\266\320\272\320\260 \320\277\320\276\321\200\321\202\320\260", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\321\217\320\266\320\272\320\260 \320\272 \320\277\320\270\321\202\320\260\320\275\320\270\321\216", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\321\217\320\266\320\272\320\260 \320\272 \320\275\321\203\320\273\321\216", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\320\242\321\200\320\270\320\263\320\263\320\265\321\200 \320\250\320\274\320\270\320\264\321\202\320\260", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\265\320\275", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\320\276\320\271 \320\264\321\200\320\260\320\271\320\262\320\265\321\200", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\321\217\320\265\320\274\321\213\320\271 \320\264\321\200\320\260\320\271\320\262\320\265\321\200", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \321\201\321\202\320\276\320\272", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\320\276\320\271 \321\204\320\270\320\273\321\214\321\202\321\200", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\267\320\265\321\200\320\262\320\270\321\200\320\276\320\262\320\260\320\275\320\276", 0)
         << QApplication::translate("MainWindow", "\320\234\320\265\320\264\320\273\320\265\320\275\320\275\321\213\320\271 \321\204\321\200\320\276\320\275\321\202", 0)
         << QApplication::translate("MainWindow", "\320\221\321\213\321\201\321\202\321\200\321\213\320\271 \321\204\321\200\320\276\320\275\321\202", 0)
         << QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276 \320\261\321\213\321\201\321\202\321\200\321\213\320\271 \321\204\321\200\320\276\320\275\321\202", 0)
        );
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\320\276\320\271 \321\204\320\270\320\273\321\214\321\202\321\200", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\265\320\275", 0));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\320\232\320\276\320\274\320\260\320\275\320\264\321\213", 0));
        checkBox_6->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\260\320\275\320\264\321\203 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        checkBox_5->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\260\320\275\320\264\321\213 \320\262\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "GPIO", 0));
        checkBox_7->setText(QApplication::translate("MainWindow", "\320\276\321\201\321\206\320\270\320\273\321\217\321\202\320\276\321\200\320\260 HSE2", 0));
        checkBox_8->setText(QApplication::translate("MainWindow", " \320\276\321\201\321\206\320\270\320\273\321\217\321\202\320\276\321\200\320\260 HSE", 0));
        checkBox_9->setText(QApplication::translate("MainWindow", "CPU PLL", 0));
        checkBox_10->setText(QApplication::translate("MainWindow", " USB PLL", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 define \321\207\321\202\320\265\320\275\320\270\321\217 \321\204\320\273\320\260\320\263\320\260 \320\262\321\213\321\205\320\276\320\264\320\260 \320\262 \321\200\320\260\320\261\320\276\321\207\320\270\320\271 \321\200\320\265\320\266\320\270\320\274:", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "C\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "9", 0)
         << QApplication::translate("MainWindow", "10", 0)
         << QApplication::translate("MainWindow", "11", 0)
         << QApplication::translate("MainWindow", "12", 0)
         << QApplication::translate("MainWindow", "13", 0)
         << QApplication::translate("MainWindow", "14", 0)
         << QApplication::translate("MainWindow", "15", 0)
         << QApplication::translate("MainWindow", "16", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "\320\234\320\275\320\276\320\266\320\270\321\202\320\265\320\273\321\214 CPU", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "9", 0)
         << QApplication::translate("MainWindow", "10", 0)
         << QApplication::translate("MainWindow", "11", 0)
         << QApplication::translate("MainWindow", "12", 0)
         << QApplication::translate("MainWindow", "13", 0)
         << QApplication::translate("MainWindow", "14", 0)
         << QApplication::translate("MainWindow", "15", 0)
         << QApplication::translate("MainWindow", "16", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "M\320\275\320\276\320\266\320\270\321\202\320\265\320\273\321\214 USB", 0));
        checkBox_27->setText(QApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 PLL CPU", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "PLL", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "USB", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "\320\220\320\246\320\237", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "RTC", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\321\204\320\265\321\200\320\270\321\217", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "CAN", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("MainWindow", "TIMER", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QApplication::translate("MainWindow", "UART", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindow", "SSP", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_15), QApplication::translate("MainWindow", "Ethernet", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265\320\274", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
