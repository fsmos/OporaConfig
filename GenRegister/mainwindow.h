#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "struct_code.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString file;
    int GPIO_port=0;
    int GPIO_pin=0;
    OporaDataStruct SetingOPoraStruct;
    int UARTIndex=0;
    int SSPIndex=0;
    int TIMERIndex=0;
    int TIMERChannelIndex=0;
private slots:
    void on_FileOpen_toggled(bool arg1);
    void IndicateData(OporaDataStruct ops);
    OporaDataStruct GenerateStruct();
    void LoadGPIO(int port,int pin);
    void on_FileOpen_triggered();

    void on_action_3_triggered();
    void SetGPIO(int port,int pin);
    void SaveGPIO(int port,int pin);
    void InitStruct();

    void on_listWidget_itemSelectionChanged();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_listWidget_2_currentRowChanged(int currentRow);

    void on_GPIOPinON_clicked();

    void on_action_triggered();

    void SaveCLK();
    void LoadCLK();
    void SaveUART(int uart);
    void LoadUART(int uart);

    void LoadSSP(int SSP);
    void SaveSSP(int SSP);

    void LoadPVDCS();
    void SavePVDCS();

    void on_comboBox_19_currentIndexChanged(int index);

    void on_comboBox_39_currentIndexChanged(int index);

    void on_comboBox_16_currentIndexChanged(int index);

    void on_comboBox_24_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
