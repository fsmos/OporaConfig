/*
*\file
*\brief Файл данных для генератора кода настроек тактирования
*\author Евгений Косов)
*\version 1.0
*\date 30 июня 2016 года
*В этом файле находится набор стрктур для генерации кода настроек тактирования
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"

void MainWindow::SavePVDCS()
{
    if (ui->checkBox_211->isChecked()) this->SetingOPoraStruct.PVDCS.PVDBEN = On;
                                  else this->SetingOPoraStruct.PVDCS.PVDBEN = Off;

    if (ui->checkBox_216->isChecked()) this->SetingOPoraStruct.PVDCS.PVDEN = On;
                                  else this->SetingOPoraStruct.PVDCS.PVDEN = Off;

    if (ui->checkBox_212->isChecked()) this->SetingOPoraStruct.PVDCS.INV = On;
                                  else this->SetingOPoraStruct.PVDCS.INV = Off;

    if (ui->checkBox_213->isChecked()) this->SetingOPoraStruct.PVDCS.INVB = On;
                                  else this->SetingOPoraStruct.PVDCS.INVB = Off;

    if (ui->checkBox_214->isChecked()) this->SetingOPoraStruct.PVDCS.IEPVD = On;
                                  else this->SetingOPoraStruct.PVDCS.IEPVD = Off;

    if (ui->checkBox_215->isChecked()) this->SetingOPoraStruct.PVDCS.IEPVBD = On;
                                  else this->SetingOPoraStruct.PVDCS.IEPVBD = Off;


    switch (ui->comboBox_40->currentIndex())
    {
        case 1: this->SetingOPoraStruct.PVDCS.PLS = 0b000;break;
        case 2: this->SetingOPoraStruct.PVDCS.PLS = 0b001;break;
        case 3: this->SetingOPoraStruct.PVDCS.PLS = 0b010;break;
        case 4: this->SetingOPoraStruct.PVDCS.PLS = 0b011;break;
        case 5: this->SetingOPoraStruct.PVDCS.PLS = 0b100;break;
        case 6: this->SetingOPoraStruct.PVDCS.PLS = 0b101;break;
        case 7: this->SetingOPoraStruct.PVDCS.PLS = 0b110;break;
        case 8: this->SetingOPoraStruct.PVDCS.PLS = 0b111;break;
    }

    switch (ui->comboBox_43->currentIndex())
    {
        case 1: this->SetingOPoraStruct.PVDCS.PBLS = 0b00;break;
        case 2: this->SetingOPoraStruct.PVDCS.PBLS = 0b01;break;
        case 3: this->SetingOPoraStruct.PVDCS.PBLS = 0b10;break;
        case 4: this->SetingOPoraStruct.PVDCS.PBLS = 0b11;break;
    }
}

void MainWindow::LoadPVDCS()
{

    if (SetingOPoraStruct.PVDCS.PVDBEN == On) ui->checkBox_211->setChecked(true);
                                         else ui->checkBox_211->setChecked(false);

    if (SetingOPoraStruct.PVDCS.PVDEN == On) ui->checkBox_216->setChecked(true);
                                        else ui->checkBox_216->setChecked(false);

    if (SetingOPoraStruct.PVDCS.INV == On) ui->checkBox_212->setChecked(true);
                                      else ui->checkBox_212->setChecked(false);

    if (SetingOPoraStruct.PVDCS.INVB == On) ui->checkBox_213->setChecked(true);
                                       else ui->checkBox_213->setChecked(false);

    if (SetingOPoraStruct.PVDCS.IEPVD == On) ui->checkBox_214->setChecked(true);
                                         else ui->checkBox_214->setChecked(false);

    if (SetingOPoraStruct.PVDCS.IEPVBD == On) ui->checkBox_215->setChecked(true);
                                         else ui->checkBox_215->setChecked(false);

    switch (SetingOPoraStruct.PVDCS.PLS)
    {
        case 0b000: ui->comboBox_40->setCurrentIndex(0);break;
        case 0b001: ui->comboBox_40->setCurrentIndex(1);break;
        case 0b010: ui->comboBox_40->setCurrentIndex(2);break;
        case 0b011: ui->comboBox_40->setCurrentIndex(3);break;
        case 0b100: ui->comboBox_40->setCurrentIndex(4);break;
        case 0b101: ui->comboBox_40->setCurrentIndex(5);break;
        case 0b110: ui->comboBox_40->setCurrentIndex(6);break;
        case 0b111: ui->comboBox_40->setCurrentIndex(7);break;
    }

    switch(SetingOPoraStruct.PVDCS.PBLS)
    {
        case 0b00: ui->comboBox_43->setCurrentIndex(0);break;
        case 0b01: ui->comboBox_43->setCurrentIndex(0);break;
        case 0b10: ui->comboBox_43->setCurrentIndex(0);break;
        case 0b11: ui->comboBox_43->setCurrentIndex(0);break;
    }

}
