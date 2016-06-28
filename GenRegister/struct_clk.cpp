#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"
#include <qfile.h>
#include <qfiledialog.h>

void MainWindow::SaveCLK()
{
if (ui->checkBox_7->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY2_READ_ENABLE = On;
else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY2_READ_ENABLE = Off;

if (ui->checkBox_8->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY_READ_ENABLE = On;
else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY_READ_ENABLE = Off;

if (ui->checkBox_9->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_CPU_RDY_READ_ENABLE = On;
else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_CPU_RDY_READ_ENABLE = Off;

if (ui->checkBox_10->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_USB_RDY_READ_ENABLE = On;
else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_USB_RDY_READ_ENABLE = Off;


if (ui->checkBox_27->isChecked())
{
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_ON = On;
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_PLD_RESET_ENABLE = On;
}
else
{
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_ON = Off;
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_PLD_RESET_ENABLE = Off;
}
SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_MUL = (ui->comboBox_3->currentText().toInt());

if (ui->checkBox_28->isChecked())
{
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_USB = On;
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_USB_RLD_RESET_ENABLE = On;
}
else
{
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_USB = Off;
    this->SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_USB_RLD_RESET_ENABLE = Off;
}
SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_USB_MUL = (ui->comboBox_4->currentText().toInt());


if (ui->checkBox_29->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_ON = On;
else this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_ON = Off;

if (ui->radioButton_7->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP = mode_oscilator;
if (ui->radioButton_8->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP = mode_generator;


if (ui->checkBox_30->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_ON2 = On;
else this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_ON2 = Off;

if (ui->radioButton_10->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP2 = mode_oscilator;
if (ui->radioButton_9->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP2 = mode_generator;


switch (ui->comboBox_5->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.HCLK_SEL = HSE;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.HCLK_SEL = CPU_C3;
    case 2: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.HCLK_SEL = LSE;
    case 3: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.HCLK_SEL = LSI;
}
SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C3_SEL = (ui->comboBox_6->currentText().toInt());


switch (ui->comboBox_7->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C2_SEL = CPU_C1;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C2_SEL = PLLCPUo;
}

switch (ui->comboBox_8->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSI;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSIDIV2;
    case 2: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSE_CPU;
    case 3: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSEDIV2;
}


if (ui->checkBox_31->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_CLK_EN = Off;

if (ui->checkBox_32->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C3_SEL = On;
else this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C3_SEL = Off;

switch (ui->comboBox_9->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C2_SEL = USB_C1;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C2_SEL = PLLUSBo;
}

switch (ui->comboBox_8->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSI;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSIDIV2;
    case 2: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSE_CPU;
    case 3: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSEDIV2;
}

if (ui->checkBox_33->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C3_SEll = (ui->comboBox_11->currentText().toInt());

switch (ui->comboBox_12->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = LSE_ADC;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = LSI_ADC;
    case 2: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = ADC_C1;
    case 3: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = HSI_C1;
}

switch (ui->comboBox_13->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = CPU_C1_ADC;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = USB_C1_ADC;
    case 2: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = CPU_C2_ADC;
    case 3: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = USB_C2;
}


if (ui->checkBox_34->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSI_RTC_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSI_RTC_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSI_SEL = (ui->comboBox_14->currentText().toInt());

if (ui->checkBox_35->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSE_RTC_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSE_RTC_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSE_SEL = (ui->comboBox_15->currentText().toInt());


if (ui->checkBox_35->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN1_CLK = Off;

if (ui->checkBox_36->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN2_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN2_CLK = Off;

if (ui->checkBox_37->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.USB_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.USB_CLK = Off;

if (ui->checkBox_38->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EEPROM_CNTRL_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EEPROM_CNTRL_CLK = Off;

if (ui->checkBox_39->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.RST_CLK_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.RST_CLK_CLK = Off;

if (ui->checkBox_40->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DMA_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DMA_CLK = Off;

if (ui->checkBox_41->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DMA_CLK = Off;
}
