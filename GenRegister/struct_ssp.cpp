/**
*\file
*\brief Файл данных для генератора кода SSP
*\author Меловидов Алексей
*\version 1.0
*\date 30 июня 2016 года
*В этом файле находится набор стрктур для генерации кода SSP
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"

void MainWindow::SaveSSP(int SSP)
{
   if(ui->checkBox_181->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_DRR.SSP_read_DATA=On;
   else this->SetingOPoraStruct.PER_SSP[SSP].SSP_DRR.SSP_read_DATA=Off;

   if (ui->checkBox_182->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPH=On;
   else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPH = Off;

   if (ui->checkBox_183->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPO=On;
   else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPO = Off;

   switch (ui->comboBox_41->currentIndex())
   {
       case 0: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = SPI_M;break;
       case 1: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = SSI_TI;break;
       case 2: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = MW_NS;break;
       case 3: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = RSRV;break;
    }

   switch (ui->comboBox_42->currentIndex())
   {
       case 0: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit4;break;
       case 1: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit5;break;
       case 2: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit6;break;
       case 3: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit7;break;
       case 4: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit8;break;
       case 5: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit9;break;
       case 6: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit10;break;
       case 7: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit11;break;
       case 8: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit12;break;
       case 9: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit13;break;
       case 10: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit14;break;
       case 11: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit15;break;
       case 12: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit16;break;
   }


  if (ui->checkBox_184->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.SOD = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.SOD = Off;
  if (ui->checkBox_185->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.MS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.MS = Off;
  if (ui->checkBox_186->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.SSE = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.SSE = Off;
  if (ui->checkBox_187->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.LBM = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.LBM = Off;
  if (ui->checkBox_188->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_DRR.SSP_read_DATA = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_DRR.SSP_read_DATA = Off;


  if (ui->checkBox_189->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_BSY = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_BSY = Off;
  if (ui->checkBox_194->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_RFF = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_RFF = Off;
  if (ui->checkBox_190->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_RNE = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_RNE = Off;
  if (ui->checkBox_193->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_TNF = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_TNF = Off;
  if (ui->checkBox_191->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_TFE = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_TFE = Off;


  if (ui->checkBox_198->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_TXRIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_TXRIS = Off;
  if (ui->checkBox_199->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RXRIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RXRIS = Off;
  if (ui->checkBox_200->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RTRIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RTRIS = Off;
  if (ui->checkBox_202->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RORRIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RORRIS = Off;


  if (ui->checkBox_203->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_TXMIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_TXMIS = Off;
  if (ui->checkBox_204->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RXMIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RXMIS = Off;
  if (ui->checkBox_205->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RTMIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RTMIS = Off;
  if (ui->checkBox_206->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RORMIS = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RORMIS = Off;


  if (ui->checkBox_192->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.TXIM = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.TXIM = Off;
  if (ui->checkBox_195->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RXIM = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RXIM = Off;
  if (ui->checkBox_196->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RTIM = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RTIM = Off;
  if (ui->checkBox_197->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RORIM = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RORIM = Off;


  if (ui->checkBox_207->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_ICRR.write_RTIC = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_ICRR.write_RTIC = Off;
  if (ui->checkBox_208->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_ICRR.write_RORIC = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_ICRR.write_RORIC = Off;


  if (ui->checkBox_209->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_DMACRR.TXDMAE = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_DMACRR.TXDMAE = Off;
  if (ui->checkBox_210->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_DMACRR.RXDMAE = On;
       else this->SetingOPoraStruct.PER_SSP[SSP].SSP_DMACRR.RXDMAE = Off;

}

void MainWindow::LoadSSP(int SSP)
{
   if (SetingOPoraStruct.PER_SSP[SSP].SSP_DRR.SSP_read_DATA == On) ui->checkBox_181->setChecked(true);
                                                             else ui->checkBox_181->setChecked(false);

   if (SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPH == On) ui->checkBox_182->setChecked(true);
                                                   else ui->checkBox_182->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPO == On) ui->checkBox_183->setChecked(true);
                                                   else ui->checkBox_183->setChecked(false);
  switch (SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF)
  {
      case SPI_M: ui->comboBox_41->setCurrentIndex(0);break;
      case SSI_TI: ui->comboBox_41->setCurrentIndex(1);break;
      case MW_NS: ui->comboBox_41->setCurrentIndex(2);break;
      case RSRV: ui->comboBox_41->setCurrentIndex(3);break;
  }

  switch (SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS)
  {
      case bit4: ui->comboBox_42->setCurrentIndex(0);break;
      case bit5: ui->comboBox_42->setCurrentIndex(1);break;
      case bit6: ui->comboBox_42->setCurrentIndex(2);break;
      case bit7: ui->comboBox_42->setCurrentIndex(3);break;
      case bit8: ui->comboBox_42->setCurrentIndex(4);break;
      case bit9: ui->comboBox_42->setCurrentIndex(5);break;
      case bit10: ui->comboBox_42->setCurrentIndex(6);break;
      case bit11: ui->comboBox_42->setCurrentIndex(7);break;
      case bit12: ui->comboBox_42->setCurrentIndex(8);break;
      case bit13: ui->comboBox_42->setCurrentIndex(9);break;
      case bit14: ui->comboBox_42->setCurrentIndex(10);break;
      case bit15: ui->comboBox_42->setCurrentIndex(11);break;
      case bit16: ui->comboBox_42->setCurrentIndex(12);break;
  }

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.SOD == On) ui->checkBox_184->setChecked(true);
                                                  else ui->checkBox_184->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.MS == On) ui->checkBox_185->setChecked(true);
                                                 else ui->checkBox_185->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.SSE == On) ui->checkBox_186->setChecked(true);
                                                  else ui->checkBox_186->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_CPR.LBM == On) ui->checkBox_187->setChecked(true);
                                                  else ui->checkBox_187->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_DRR.SSP_read_DATA == On) ui->checkBox_188->setChecked(true);
                                                            else ui->checkBox_188->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_BSY == On) ui->checkBox_189->setChecked(true);
                                                       else ui->checkBox_189->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_RFF == On) ui->checkBox_194->setChecked(true);
                                                       else ui->checkBox_194->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_RNE == On) ui->checkBox_190->setChecked(true);
                                                       else ui->checkBox_190->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_TNF == On) ui->checkBox_193->setChecked(true);
                                                       else ui->checkBox_193->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_SRR.read_TFE == On) ui->checkBox_191->setChecked(true);
                                                       else ui->checkBox_191->setChecked(false);


  if (SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_TXRIS == On) ui->checkBox_198->setChecked(true);
                                                          else ui->checkBox_198->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RXRIS == On) ui->checkBox_199->setChecked(true);
                                                          else ui->checkBox_199->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RTRIS == On) ui->checkBox_200->setChecked(true);
                                                          else ui->checkBox_200->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_RISR.read_RORRIS == On) ui->checkBox_202->setChecked(true);
                                                           else ui->checkBox_202->setChecked(false);


  if (SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_TXMIS == On) ui->checkBox_203->setChecked(true);
                                                          else ui->checkBox_203->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RXMIS == On) ui->checkBox_204->setChecked(true);
                                                          else ui->checkBox_204->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RTMIS == On) ui->checkBox_205->setChecked(true);
                                                          else ui->checkBox_205->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_MISR.read_RORMIS == On) ui->checkBox_206->setChecked(true);
                                                           else ui->checkBox_206->setChecked(false);


  if (SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.TXIM == On) ui->checkBox_192->setChecked(true);
                                                     else ui->checkBox_192->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RXIM == On) ui->checkBox_195->setChecked(true);
                                                     else ui->checkBox_195->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RTIM == On) ui->checkBox_196->setChecked(true);
                                                     else ui->checkBox_196->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_IMSCR.RORIM == On) ui->checkBox_197->setChecked(true);
                                                     else ui->checkBox_197->setChecked(false);


  if (SetingOPoraStruct.PER_SSP[SSP].SSP_ICRR.write_RTIC == On) ui->checkBox_207->setChecked(true);
                                                          else ui->checkBox_207->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_ICRR.write_RORIC == On) ui->checkBox_208->setChecked(true);
                                                           else ui->checkBox_208->setChecked(false);


  if (SetingOPoraStruct.PER_SSP[SSP].SSP_DMACRR.TXDMAE == On) ui->checkBox_209->setChecked(true);
                                                        else ui->checkBox_209->setChecked(false);

  if (SetingOPoraStruct.PER_SSP[SSP].SSP_DMACRR.RXDMAE == On) ui->checkBox_210->setChecked(true);
                                                        else ui->checkBox_210->setChecked(false);
}
