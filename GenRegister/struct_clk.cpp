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


if (ui->checkBox_36->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN1_CLK = Off;

if (ui->checkBox_37->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN2_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN2_CLK = Off;

if (ui->checkBox_38->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.USB_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.USB_CLK = Off;

if (ui->checkBox_39->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EEPROM_CNTRL_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EEPROM_CNTRL_CLK = Off;

if (ui->checkBox_40->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.RST_CLK_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.RST_CLK_CLK = Off;

if (ui->checkBox_41->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DMA_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DMA_CLK = Off;

if (ui->checkBox_42->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART1_CLK = Off;

if (ui->checkBox_43->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART2_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART2_CLK = Off;

if (ui->checkBox_44->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI1_CLK = Off;

if (ui->checkBox_45->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.MIL_STD_1553B1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.MIL_STD_1553B1_CLK = Off;

if (ui->checkBox_46->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.MIL_STD_1553B2_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.MIL_STD_1553B2_CLK = Off;

if (ui->checkBox_47->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.POWER_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.POWER_CLK = Off;

if (ui->checkBox_48->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.WWDT_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.WWDT_CLK = Off;

if (ui->checkBox_49->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.IWDT_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.IWDT_CLK = Off;

if (ui->checkBox_50->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER1_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER1_CLK = Off;

if (ui->checkBox_51->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER2_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER2_CLK = Off;

if (ui->checkBox_52->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER3_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER3_CLK = Off;

if (ui->checkBox_53->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ADC_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ADC_CLK = Off;

if (ui->checkBox_54->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DAC_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DAC_CLK = Off;

if (ui->checkBox_55->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER4_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER4_CLK = Off;

if (ui->checkBox_56->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI2_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI2_CLK = Off;

if (ui->checkBox_57->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTA_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTA_CLK = Off;

if (ui->checkBox_58->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTB_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTB_CLK = Off;

if (ui->checkBox_59->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTC_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTC_CLK = Off;

if (ui->checkBox_60->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTD_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTD_CLK = Off;

if (ui->checkBox_61->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTE_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTE_CLK = Off;

if (ui->checkBox_62->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ARINC429R_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ARINC429R_CLK = Off;

if (ui->checkBox_63->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.BKP_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.BKP_CLK = Off;

if (ui->checkBox_64->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ARINC429T_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ARINC429T_CLK = Off;

if (ui->checkBox_65->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTF_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTF_CLK = Off;

if (ui->checkBox_66->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EXT_BUS_CNTRL_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EXT_BUS_CNTRL_CLK = Off;

if (ui->checkBox_67->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI3_CLK = On;
else this->SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI3_CLK = Off;


if (ui->checkBox_68->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN1_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN1_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN1_BRG = (ui->comboBox_31->currentText().toInt());

if (ui->checkBox_69->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN2_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN2_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN2_BRG = (ui->comboBox_33->currentText().toInt());


if (ui->checkBox_70->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM1_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM1_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM1_BRG = (ui->comboBox_18->currentText().toInt());

if (ui->checkBox_73->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM2_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM2_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM2_BRG = (ui->comboBox_21->currentText().toInt());

if (ui->checkBox_74->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM3_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM3_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM3_BRG = (ui->comboBox_22->currentText().toInt());


if (ui->checkBox_75->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.U_CLK.TIM4_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.U_CLK.TIM4_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.U_CLK.TIM4_BRG = (ui->comboBox_23->currentText().toInt());

if (ui->checkBox_77->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART1_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART1_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART1_BRG = (ui->comboBox_25->currentText().toInt());

if (ui->checkBox_79->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART2_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART1_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART2_BRG = (ui->comboBox_27->currentText().toInt());


if (ui->checkBox_80->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP1_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP1_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP1_BRG = (ui->comboBox_28->currentText().toInt());

if (ui->checkBox_81->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP2_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP2_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP2_BRG = (ui->comboBox_29->currentText().toInt());

if (ui->checkBox_82->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP3_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP3_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP3_BRG = (ui->comboBox_30->currentText().toInt());


if (ui->checkBox_69->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_EN = Off;

switch (ui->comboBox_34->currentIndex())
{
    case 0: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = HSI_PHY;
    case 1: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = HSE_PHY;
    case 2: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = PLLCPUo_PHY;
    case 3: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = HSE2;
}

SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_BRG = (ui->comboBox_35->currentText().toInt());

if (ui->checkBox_86->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.MAN_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.MAN_CLK_EN = Off;

SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_BRG = (ui->comboBox_37->currentText().toInt());

if (ui->checkBox_87->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.ETH_CLK_EN = On;
else this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.ETH_CLK_EN = Off;

if (ui->checkBox_68->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.SLEEP = slow_energy;
else this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.SLEEP = work_mode;
}






void MainWindow::LoadCLK()
{
    if (ui->checkBox_7->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY2_READ_ENABLE = On;
    else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY2_READ_ENABLE = Off;

//    if SetingOPoraStruct.
//    if (ui->checkBox_8->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY_READ_ENABLE = On;
//    else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY_READ_ENABLE = Off;

//    if (ui->checkBox_9->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_CPU_RDY_READ_ENABLE = On;
//    else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_CPU_RDY_READ_ENABLE = Off;

//    if (ui->checkBox_10->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_USB_RDY_READ_ENABLE = On;
//    else this->SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_USB_RDY_READ_ENABLE = Off;

}
