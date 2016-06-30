#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"
/**
*\file
*\brief Файл данных для генератора кода GPIO
*\author Ярошенко Артур
*\version 1.0
*\date 23 Декабря 2015 года
*В этом файле находится набор стрктур для генерации кода GPIO
*/

void MainWindow::SaveGPIO(int port,int pin)
{
if(ui->GPIOPinON->isChecked()) this->SetingOPoraStruct.GPIOPort[port].Pin[pin].RXTX=On;
else this->SetingOPoraStruct.GPIOPort[port].Pin[pin].RXTX=Off;
if (ui->radioButton->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].OE=Input;
if (ui->radioButton_2->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].OE=Output;

if (ui->radioButton_3->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].Analog=analog;
if (ui->radioButton_4->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].Analog=digital;

if (ui->checkBox->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PULL.port_up=On;
else SetingOPoraStruct.GPIOPort[port].Pin[pin].PULL.port_up=Off;

if (ui->checkBox_2->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PULL.port_down=On;
else SetingOPoraStruct.GPIOPort[port].Pin[pin].PULL.port_down=Off;

if (ui->checkBox_3->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PD.Shmidt_port=On;
else SetingOPoraStruct.GPIOPort[port].Pin[pin].PD.Shmidt_port=Off;

if (ui->radioButton_5->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PD.control=Controls;
if (ui->radioButton_6->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PD.control=Opendrain;

switch (ui->comboBox->currentIndex())
{
case 0: SetingOPoraStruct.GPIOPort[port].Pin[pin].Function=port1; break;
case 1: SetingOPoraStruct.GPIOPort[port].Pin[pin].Function=mainfuction; break;
case 2: SetingOPoraStruct.GPIOPort[port].Pin[pin].Function=alternain_function; break;
case 3: SetingOPoraStruct.GPIOPort[port].Pin[pin].Function=refrange_function; break;
}

switch (ui->comboBox_2->currentIndex())
{
case 0: SetingOPoraStruct.GPIOPort[port].Pin[pin].PWR=reserved1; break;
case 1: SetingOPoraStruct.GPIOPort[port].Pin[pin].PWR=slow_front; break;
case 2: SetingOPoraStruct.GPIOPort[port].Pin[pin].PWR=fast_front; break;
case 3: SetingOPoraStruct.GPIOPort[port].Pin[pin].PWR=max_fast_front; break;
}

if (ui->checkBox_4->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].GFEN=On;
else SetingOPoraStruct.GPIOPort[port].Pin[pin].GFEN=Off;

if (ui->checkBox_5->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PCMD.CMD_ENABLE=On;
else SetingOPoraStruct.GPIOPort[port].Pin[pin].PCMD.CMD_ENABLE=Off;

if (ui->checkBox_6->isChecked()) SetingOPoraStruct.GPIOPort[port].Pin[pin].PCMD.CMD_DISABLE=On;
else SetingOPoraStruct.GPIOPort[port].Pin[pin].PCMD.CMD_DISABLE=Off;

}
void MainWindow::LoadGPIO(int port,int pin)
{
    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].RXTX)
    {
     case On: ui->GPIOPinON->setChecked(true); break;
     case Off: ui->GPIOPinON->setChecked(false); break;
    }
    ui->label_3->setText(ui->listWidget->item(port)->text()+"-"+ui->listWidget_2->item(pin)->text());

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].OE)
    {
    case Input: ui->radioButton->setChecked(true); break;
    case Output: ui->radioButton_2->setChecked(true); break;

    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].Analog)
    {
    case analog: ui->radioButton_3->setChecked(true); break;
    case digital: ui->radioButton_4->setChecked(true); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PULL.port_up)
    {
    case On: ui->checkBox->setChecked(true); break;
    case Off: ui->checkBox->setChecked(false); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PULL.port_down)
    {
    case On: ui->checkBox_2->setChecked(true); break;
    case Off: ui->checkBox_2->setChecked(false); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PD.Shmidt_port)
    {
    case On: ui->checkBox_3->setChecked(true); break;
    case Off: ui->checkBox_3->setChecked(false); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PD.control)
    {
    case Controls: ui->radioButton_5->setChecked(true); break;
    case Opendrain: ui->radioButton_6->setChecked(true); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].Function)
    {
    case port1: ui->comboBox->setCurrentIndex(0); break;
    case mainfuction: ui->comboBox->setCurrentIndex(1); break;
    case alternain_function: ui->comboBox->setCurrentIndex(2); break;
    case refrange_function: ui->comboBox->setCurrentIndex(3); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PWR)
    {
    case reserved1: ui->comboBox_2->setCurrentIndex(0); break;
    case slow_front: ui->comboBox_2->setCurrentIndex(1); break;
    case fast_front: ui->comboBox_2->setCurrentIndex(2); break;
    case max_fast_front: ui->comboBox_2->setCurrentIndex(3); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].GFEN)
    {
     case On: ui->checkBox_4->setChecked(true); break;
     case Off:ui->checkBox_4->setChecked(false); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PCMD.CMD_ENABLE)
    {
    case On: ui->checkBox_5->setChecked(true); break;
    case Off: ui->checkBox_5->setChecked(false); break;
    }

    switch(SetingOPoraStruct.GPIOPort[port].Pin[pin].PCMD.CMD_DISABLE)
    {
    case On: ui->checkBox_6->setChecked(true); break;
    case Off: ui->checkBox_6->setChecked(false); break;
    }
}
