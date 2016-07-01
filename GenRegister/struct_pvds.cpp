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
}
