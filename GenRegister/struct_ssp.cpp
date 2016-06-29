#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"

void MainWindow::SaveSSP(int SSP)
{
   if (ui->checkBox_182->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPH=On;
   else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPH = Off;

   if (ui->checkBox_183->isChecked()) this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPO=On;
   else this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.SPO = Off;

   switch (ui->comboBox_41->currentIndex())
   {
       case 0: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = SPI_M;
       case 1: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = SSI_TI;
       case 2: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = MW_NS;
       case 3: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.FRF = RSRV;
    }

   switch (ui->comboBox_41->currentIndex())
   {
       case 0: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit4;
       case 1: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit5;
       case 2: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit6;
       case 3: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit7;
       case 4: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit8;
       case 5: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit9;
       case 6: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit10;
       case 7: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit11;
       case 8: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit12;
       case 9: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit13;
       case 10: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit14;
       case 11: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit15;
       case 12: this->SetingOPoraStruct.PER_SSP[SSP].SSP_CR0R.DDS = bit16;
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

}
