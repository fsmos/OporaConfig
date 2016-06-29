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
    if (ui->radioButton_9->isChecked())  this->SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP2 = mode_generator;


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
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C2_SEL = CPU_C1;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C2_SEL = PLLCPUo;break;
    }

    switch (ui->comboBox_8->currentIndex())
    {
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSI;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSIDIV2;break;
        case 2: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSE_CPU;break;
        case 3: this->SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL = HSEDIV2;break;
    }


    if (ui->checkBox_31->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_CLK_EN = On;
                                 else this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_CLK_EN = Off;

    if (ui->checkBox_32->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C3_SEL = On;
                                 else this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C3_SEL = Off;

    switch (ui->comboBox_9->currentIndex())
    {
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C2_SEL = USB_C1;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C2_SEL = PLLUSBo;break;
    }

    switch (ui->comboBox_8->currentIndex())
    {
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSI;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSIDIV2;break;
        case 2: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSE_CPU;break;
        case 3: this->SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL = HSEDIV2;break;
    }

    if (ui->checkBox_33->isChecked()) this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_CLK_EN = On;
                                 else this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_CLK_EN = Off;

    SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C3_SEll = (ui->comboBox_11->currentText().toInt());

    switch (ui->comboBox_12->currentIndex())
    {
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = LSE_ADC;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = LSI_ADC;break;
        case 2: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = ADC_C1;break;
        case 3: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL = HSI_C1;break;
    }

    switch (ui->comboBox_13->currentIndex())
    {
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = CPU_C1_ADC;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = USB_C1_ADC;break;
        case 2: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = CPU_C2_ADC;break;
        case 3: this->SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL = USB_C2;break;
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
        case 0: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = HSI_PHY;break;
        case 1: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = HSE_PHY;break;
        case 2: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = PLLCPUo_PHY;break;
        case 3: this->SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL = HSE2;break;
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
    if (SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY2_READ_ENABLE == On) ui->checkBox_7->setChecked(true);
                                                                    else ui->checkBox_7->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.CLK_ST.HSE_RDY_READ_ENABLE == On) ui->checkBox_8->setChecked(true);
                                                                   else ui->checkBox_8->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_CPU_RDY_READ_ENABLE == On) ui->checkBox_9->setChecked(true);
                                                                       else ui->checkBox_9->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.CLK_ST.PLL_USB_RDY_READ_ENABLE == On) ui->checkBox_10->setChecked(true);
                                                                       else ui->checkBox_10->setChecked(false);


    if (SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_ON == On) ui->checkBox_27->setChecked(true);
                                                             else ui->checkBox_27->setChecked(false);

    ui->comboBox_3->setCurrentIndex(SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_MUL - 1);


    if (SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_USB == On) ui->checkBox_28->setChecked(true);
                                                          else ui->checkBox_28->setChecked(false);

     ui->comboBox_4->setCurrentIndex(SetingOPoraStruct.OPORA_CLOCK.PLL_CNTRL.PLL_CPU_MUL - 1);


     if (SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_ON == On) ui->checkBox_29->setChecked(true);
                                                         else ui->checkBox_29->setChecked(false);


     if (SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP == mode_oscilator) ui->radioButton_7->setChecked(true);
                                                                      else ui->radioButton_7->setChecked(false);

     if (SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP == mode_generator) ui->radioButton_8->setChecked(true);
                                                                      else ui->radioButton_8->setChecked(false);


     if (SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_ON2 == On) ui->checkBox_30->setChecked(true);
                                                          else ui->checkBox_30->setChecked(false);

     if (SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP2 == mode_oscilator) ui->radioButton_10->setChecked(true);
                                                                       else ui->radioButton_10->setChecked(false);

     if (SetingOPoraStruct.OPORA_CLOCK.HS_CNTRL.HSE_BYP2 == mode_generator) ui->radioButton_9->setChecked(true);
                                                                       else ui->radioButton_9->setChecked(false);

     switch (SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.HCLK_SEL)
     {
        case HSE: ui->comboBox_5->setCurrentIndex(0);break;
        case CPU_C3: ui->comboBox_5->setCurrentIndex(1);break;
        case LSE: ui->comboBox_5->setCurrentIndex(2);break;
        case LSI: ui->comboBox_5->setCurrentIndex(3);break;
     }

    SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C3_SEL = (ui->comboBox_6->currentText().toInt());

    switch (SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C3_SEL)
    {
       case 2  : ui->comboBox_6->setCurrentIndex(0);break;
       case 4  : ui->comboBox_6->setCurrentIndex(1);break;
       case 8  : ui->comboBox_6->setCurrentIndex(2);break;
       case 16 : ui->comboBox_6->setCurrentIndex(3);break;
       case 32 : ui->comboBox_6->setCurrentIndex(4);break;
       case 64 : ui->comboBox_6->setCurrentIndex(5);break;
       case 128: ui->comboBox_6->setCurrentIndex(6);break;
       case 256: ui->comboBox_6->setCurrentIndex(7);break;
    }

    switch (SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C2_SEL)
    {
        case CPU_C1 : ui->comboBox_7->setCurrentIndex(0);
        case PLLCPUo: ui->comboBox_7->setCurrentIndex(1);
    }

    switch (SetingOPoraStruct.OPORA_CLOCK.CPU_CLK.CPU_C1_SEL)
    {
        case HSI    : ui->comboBox_8->setCurrentIndex(0);
        case HSIDIV2: ui->comboBox_8->setCurrentIndex(1);
        case HSE_CPU: ui->comboBox_8->setCurrentIndex(2);
        case HSEDIV2: ui->comboBox_8->setCurrentIndex(3);
    }


    if (SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_CLK_EN == On) ui->checkBox_31->setChecked(true);
                                                           else ui->checkBox_31->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C3_SEL == On) ui->checkBox_32->setChecked(true);
                                                           else ui->checkBox_32->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C2_SEL)
    {
        case USB_C1 : ui->comboBox_9->setCurrentIndex(0);
        case PLLUSBo: ui->comboBox_9->setCurrentIndex(1);
    }

    switch (SetingOPoraStruct.OPORA_CLOCK.USB_CLK.USB_C1_SEL)
    {
        case HSE     : ui->comboBox_8->setCurrentIndex(0);
        case HSIDIV2 : ui->comboBox_8->setCurrentIndex(1);
        case HSE_CPU : ui->comboBox_8->setCurrentIndex(2);
        case HSEDIV2 : ui->comboBox_8->setCurrentIndex(3);
    }


    if (SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_CLK_EN == On) ui->checkBox_33->setChecked(true);
                                                               else ui->checkBox_33->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C3_SEll)
    {
       case 2  : ui->comboBox_11->setCurrentIndex(0);break;
       case 4  : ui->comboBox_11->setCurrentIndex(1);break;
       case 8  : ui->comboBox_11->setCurrentIndex(2);break;
       case 16 : ui->comboBox_11->setCurrentIndex(3);break;
       case 32 : ui->comboBox_11->setCurrentIndex(4);break;
       case 64 : ui->comboBox_11->setCurrentIndex(5);break;
       case 128: ui->comboBox_11->setCurrentIndex(6);break;
       case 256: ui->comboBox_11->setCurrentIndex(7);break;
    }

    switch (SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C2_SELL)
    {
        case LSE_ADC: ui->comboBox_12->setCurrentIndex(0);break;
        case LSI_ADC: ui->comboBox_12->setCurrentIndex(1);break;
        case ADC_C1 : ui->comboBox_12->setCurrentIndex(2);break;
        case HSI_C1 : ui->comboBox_12->setCurrentIndex(3);break;
    }

    switch (SetingOPoraStruct.OPORA_CLOCK.ADC_MCO_CLK.ADC_C1_SELL)
    {
        case CPU_C1_ADC: ui->comboBox_12->setCurrentIndex(0);break;
        case USB_C1_ADC: ui->comboBox_12->setCurrentIndex(1);break;
        case CPU_C2_ADC: ui->comboBox_12->setCurrentIndex(2);break;
        case USB_C2    : ui->comboBox_12->setCurrentIndex(3);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSI_RTC_EN == On) ui->checkBox_34->setChecked(true);
                                                           else ui->checkBox_34->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSI_SEL)
    {
       case 2  : ui->comboBox_14->setCurrentIndex(0);break;
       case 4  : ui->comboBox_14->setCurrentIndex(1);break;
       case 8  : ui->comboBox_14->setCurrentIndex(2);break;
       case 16 : ui->comboBox_14->setCurrentIndex(3);break;
       case 32 : ui->comboBox_14->setCurrentIndex(4);break;
       case 64 : ui->comboBox_14->setCurrentIndex(5);break;
       case 128: ui->comboBox_14->setCurrentIndex(6);break;
       case 256: ui->comboBox_14->setCurrentIndex(7);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSE_RTC_EN == On) ui->checkBox_35->setChecked(true);
                                                           else ui->checkBox_35->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.RTC_CLK.HSE_SEL)
    {
       case 2  : ui->comboBox_15->setCurrentIndex(0);break;
       case 4  : ui->comboBox_15->setCurrentIndex(1);break;
       case 8  : ui->comboBox_15->setCurrentIndex(2);break;
       case 16 : ui->comboBox_15->setCurrentIndex(3);break;
       case 32 : ui->comboBox_15->setCurrentIndex(4);break;
       case 64 : ui->comboBox_15->setCurrentIndex(5);break;
       case 128: ui->comboBox_15->setCurrentIndex(6);break;
       case 256: ui->comboBox_15->setCurrentIndex(7);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN1_CLK == On) ui->checkBox_36->setChecked(true);
                                                         else ui->checkBox_36->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.CAN2_CLK == On) ui->checkBox_37->setChecked(true);
                                                         else ui->checkBox_37->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.USB_CLK == On) ui->checkBox_38->setChecked(true);
                                                        else ui->checkBox_38->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EEPROM_CNTRL_CLK == On) ui->checkBox_39->setChecked(true);
                                                                 else ui->checkBox_39->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.RST_CLK_CLK == On) ui->checkBox_40->setChecked(true);
                                                            else ui->checkBox_40->setChecked(false);


    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DMA_CLK == On) ui->checkBox_41->setChecked(true);
                                                        else ui->checkBox_41->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART1_CLK == On) ui->checkBox_42->setChecked(true);
                                                          else ui->checkBox_42->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.UART2_CLK == On) ui->checkBox_43->setChecked(true);
                                                          else ui->checkBox_43->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI1_CLK == On) ui->checkBox_44->setChecked(true);
                                                          else ui->checkBox_44->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.MIL_STD_1553B1_CLK == On) ui->checkBox_45->setChecked(true);
                                                                   else ui->checkBox_45->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.MIL_STD_1553B2_CLK == On) ui->checkBox_46->setChecked(true);
                                                                   else ui->checkBox_46->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.POWER_CLK == On) ui->checkBox_47->setChecked(true);
                                                          else ui->checkBox_47->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.WWDT_CLK == On) ui->checkBox_48->setChecked(true);
                                                         else ui->checkBox_48->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.IWDT_CLK == On) ui->checkBox_49->setChecked(true);
                                                         else ui->checkBox_49->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER1_CLK == On) ui->checkBox_50->setChecked(true);
                                                           else ui->checkBox_50->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER2_CLK == On) ui->checkBox_51->setChecked(true);
                                                           else ui->checkBox_51->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER3_CLK == On) ui->checkBox_52->setChecked(true);
                                                           else ui->checkBox_52->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ADC_CLK == On) ui->checkBox_53->setChecked(true);
                                                           else ui->checkBox_53->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.DAC_CLK == On) ui->checkBox_54->setChecked(true);
                                                        else ui->checkBox_54->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.TIMER4_CLK == On) ui->checkBox_55->setChecked(true);
                                                           else ui->checkBox_55->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI2_CLK == On) ui->checkBox_56->setChecked(true);
                                                         else ui->checkBox_56->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTA_CLK == On) ui->checkBox_57->setChecked(true);
                                                          else ui->checkBox_57->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTB_CLK == On) ui->checkBox_58->setChecked(true);
                                                          else ui->checkBox_58->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTC_CLK == On) ui->checkBox_59->setChecked(true);
                                                          else ui->checkBox_59->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTD_CLK == On) ui->checkBox_60->setChecked(true);
                                                          else ui->checkBox_60->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTE_CLK == On) ui->checkBox_61->setChecked(true);
                                                          else ui->checkBox_61->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ARINC429R_CLK == On) ui->checkBox_62->setChecked(true);
                                                              else ui->checkBox_62->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.BKP_CLK == On) ui->checkBox_63->setChecked(true);
                                                        else ui->checkBox_63->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.ARINC429T_CLK == On) ui->checkBox_64->setChecked(true);
                                                              else ui->checkBox_64->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.PORTF_CLK == On) ui->checkBox_65->setChecked(true);
                                                          else ui->checkBox_65->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.EXT_BUS_CNTRL_CLK == On) ui->checkBox_66->setChecked(true);
                                                                  else ui->checkBox_66->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.RER_CLK.SPI3_CLK == On) ui->checkBox_67->setChecked(true);
                                                         else ui->checkBox_67->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN1_CLK_EN == On) ui->checkBox_68->setChecked(true);
                                                            else ui->checkBox_68->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN1_BRG)
    {
       case 2  : ui->comboBox_31->setCurrentIndex(0);break;
       case 4  : ui->comboBox_31->setCurrentIndex(1);break;
       case 8  : ui->comboBox_31->setCurrentIndex(2);break;
       case 16 : ui->comboBox_31->setCurrentIndex(3);break;
       case 32 : ui->comboBox_31->setCurrentIndex(4);break;
       case 64 : ui->comboBox_31->setCurrentIndex(5);break;
       case 128: ui->comboBox_31->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN2_CLK_EN == On) ui->checkBox_69->setChecked(true);
                                                            else ui->checkBox_69->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.CAN_CLK.CAN2_BRG)
    {
       case 2  : ui->comboBox_33->setCurrentIndex(0);break;
       case 4  : ui->comboBox_33->setCurrentIndex(1);break;
       case 8  : ui->comboBox_33->setCurrentIndex(2);break;
       case 16 : ui->comboBox_33->setCurrentIndex(3);break;
       case 32 : ui->comboBox_33->setCurrentIndex(4);break;
       case 64 : ui->comboBox_33->setCurrentIndex(5);break;
       case 128: ui->comboBox_33->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM1_CLK_EN == On) ui->checkBox_70->setChecked(true);
                                                            else ui->checkBox_70->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM1_BRG)
    {
       case 2  : ui->comboBox_18->setCurrentIndex(0);break;
       case 4  : ui->comboBox_18->setCurrentIndex(1);break;
       case 8  : ui->comboBox_18->setCurrentIndex(2);break;
       case 16 : ui->comboBox_18->setCurrentIndex(3);break;
       case 32 : ui->comboBox_18->setCurrentIndex(4);break;
       case 64 : ui->comboBox_18->setCurrentIndex(5);break;
       case 128: ui->comboBox_18->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM2_CLK_EN == On) ui->checkBox_73->setChecked(true);
                                                            else ui->checkBox_73->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM2_BRG)
    {
       case 2  : ui->comboBox_21->setCurrentIndex(0);break;
       case 4  : ui->comboBox_21->setCurrentIndex(1);break;
       case 8  : ui->comboBox_21->setCurrentIndex(2);break;
       case 16 : ui->comboBox_21->setCurrentIndex(3);break;
       case 32 : ui->comboBox_21->setCurrentIndex(4);break;
       case 64 : ui->comboBox_21->setCurrentIndex(5);break;
       case 128: ui->comboBox_21->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM3_CLK_EN == On) ui->checkBox_74->setChecked(true);
                                                            else ui->checkBox_74->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.TIM_CLK.TIM3_BRG)
    {
       case 2  : ui->comboBox_22->setCurrentIndex(0);break;
       case 4  : ui->comboBox_22->setCurrentIndex(1);break;
       case 8  : ui->comboBox_22->setCurrentIndex(2);break;
       case 16 : ui->comboBox_22->setCurrentIndex(3);break;
       case 32 : ui->comboBox_22->setCurrentIndex(4);break;
       case 64 : ui->comboBox_22->setCurrentIndex(5);break;
       case 128: ui->comboBox_22->setCurrentIndex(6);break;
    }


    if (SetingOPoraStruct.OPORA_CLOCK.U_CLK.TIM4_CLK_EN == On) ui->checkBox_75->setChecked(true);
                                                          else ui->checkBox_75->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.U_CLK.TIM4_BRG)
    {
       case 2  : ui->comboBox_23->setCurrentIndex(0);break;
       case 4  : ui->comboBox_23->setCurrentIndex(1);break;
       case 8  : ui->comboBox_23->setCurrentIndex(2);break;
       case 16 : ui->comboBox_23->setCurrentIndex(3);break;
       case 32 : ui->comboBox_23->setCurrentIndex(4);break;
       case 64 : ui->comboBox_23->setCurrentIndex(5);break;
       case 128: ui->comboBox_23->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART1_CLK_EN == On) ui->checkBox_77->setChecked(true);
                                                           else ui->checkBox_77->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART1_BRG)
    {
       case 2  : ui->comboBox_25->setCurrentIndex(0);break;
       case 4  : ui->comboBox_25->setCurrentIndex(1);break;
       case 8  : ui->comboBox_25->setCurrentIndex(2);break;
       case 16 : ui->comboBox_25->setCurrentIndex(3);break;
       case 32 : ui->comboBox_25->setCurrentIndex(4);break;
       case 64 : ui->comboBox_25->setCurrentIndex(5);break;
       case 128: ui->comboBox_25->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART2_CLK_EN == On) ui->checkBox_79->setChecked(true);
                                                           else ui->checkBox_79->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART2_BRG)
    {
       case 2  : ui->comboBox_27->setCurrentIndex(0);break;
       case 4  : ui->comboBox_27->setCurrentIndex(1);break;
       case 8  : ui->comboBox_27->setCurrentIndex(2);break;
       case 16 : ui->comboBox_27->setCurrentIndex(3);break;
       case 32 : ui->comboBox_27->setCurrentIndex(4);break;
       case 64 : ui->comboBox_27->setCurrentIndex(5);break;
       case 128: ui->comboBox_27->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP1_CLK_EN == On) ui->checkBox_80->setChecked(true);
                                                            else ui->checkBox_80->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.U_CLK.UART2_BRG)
    {
       case 2  : ui->comboBox_28->setCurrentIndex(0);break;
       case 4  : ui->comboBox_28->setCurrentIndex(1);break;
       case 8  : ui->comboBox_28->setCurrentIndex(2);break;
       case 16 : ui->comboBox_28->setCurrentIndex(3);break;
       case 32 : ui->comboBox_28->setCurrentIndex(4);break;
       case 64 : ui->comboBox_28->setCurrentIndex(5);break;
       case 128: ui->comboBox_28->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP2_CLK_EN == On) ui->checkBox_81->setChecked(true);
                                                            else ui->checkBox_81->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP2_BRG)
    {
       case 2  : ui->comboBox_29->setCurrentIndex(0);break;
       case 4  : ui->comboBox_29->setCurrentIndex(1);break;
       case 8  : ui->comboBox_29->setCurrentIndex(2);break;
       case 16 : ui->comboBox_29->setCurrentIndex(3);break;
       case 32 : ui->comboBox_29->setCurrentIndex(4);break;
       case 64 : ui->comboBox_29->setCurrentIndex(5);break;
       case 128: ui->comboBox_29->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP3_CLK_EN == On) ui->checkBox_82->setChecked(true);
                                                            else ui->checkBox_82->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.SSP_CLK.SSP3_BRG)
    {
       case 2  : ui->comboBox_30->setCurrentIndex(0);break;
       case 4  : ui->comboBox_30->setCurrentIndex(1);break;
       case 8  : ui->comboBox_30->setCurrentIndex(2);break;
       case 16 : ui->comboBox_30->setCurrentIndex(3);break;
       case 32 : ui->comboBox_30->setCurrentIndex(4);break;
       case 64 : ui->comboBox_30->setCurrentIndex(5);break;
       case 128: ui->comboBox_30->setCurrentIndex(6);break;
    }



    if (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_EN == On) ui->checkBox_69->setChecked(true);
                                                           else ui->checkBox_69->setChecked(false);

    switch (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_CLK_SEL)
    {
        case HSI_PHY: ui->comboBox_34->setCurrentIndex(0);break;
        case HSE_PHY: ui->comboBox_34->setCurrentIndex(1);break;
        case PLLCPUo_PHY: ui->comboBox_34->setCurrentIndex(2);break;
        case HSE2   : ui->comboBox_34->setCurrentIndex(3);break;
    }

    switch (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_BRG)
    {
       case 2  : ui->comboBox_35->setCurrentIndex(0);break;
       case 4  : ui->comboBox_35->setCurrentIndex(1);break;
       case 8  : ui->comboBox_35->setCurrentIndex(2);break;
       case 16 : ui->comboBox_35->setCurrentIndex(3);break;
       case 32 : ui->comboBox_35->setCurrentIndex(4);break;
       case 64 : ui->comboBox_35->setCurrentIndex(5);break;
       case 128: ui->comboBox_35->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.MAN_CLK_EN == On) ui->checkBox_86->setChecked(true);
                                                           else ui->checkBox_86->setChecked(false);


    switch (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.PHY_BRG)
    {
       case 2  : ui->comboBox_37->setCurrentIndex(0);break;
       case 4  : ui->comboBox_37->setCurrentIndex(1);break;
       case 8  : ui->comboBox_37->setCurrentIndex(2);break;
       case 16 : ui->comboBox_37->setCurrentIndex(3);break;
       case 32 : ui->comboBox_37->setCurrentIndex(4);break;
       case 64 : ui->comboBox_37->setCurrentIndex(5);break;
       case 128: ui->comboBox_37->setCurrentIndex(6);break;
    }

    if (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.ETH_CLK_EN == On) ui->checkBox_87->setChecked(true);
                                                           else ui->checkBox_87->setChecked(false);

    if (SetingOPoraStruct.OPORA_CLOCK.ETH_CLK.SLEEP == slow_energy) ui->checkBox_68->setChecked(true);
                                                               else ui->checkBox_68->setChecked(false);
}
