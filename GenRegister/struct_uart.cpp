#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"

void MainWindow::SaveUART(int uart)
{
if (ui->checkBox_71->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=On;
else this->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=Off;

if (ui->checkBox_76->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=On;
else this->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=Off;

if (ui->checkBox_78->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=On;
else this->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=Off;

if (ui->checkBox_84->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=On;
else this->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=Off;

if (ui->checkBox_88->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=On;
else this->SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read=Off;

if (ui->checkBox_104->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR. uart_read_RI=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR. uart_read_RI=Off;

if (ui->checkBox_105->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_TXFE=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_TXFE=Off;

if (ui->checkBox_106->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_RXFF=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_RXFF=Off;

if (ui->checkBox_107->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_TXFF=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_TXFF=Off;

if (ui->checkBox_108->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_RXFE=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_RXFE=Off;

if (ui->checkBox_109->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_BUSY=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_BUSY=Off;

if (ui->checkBox_110->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_DCD=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_DCD=Off;

if (ui->checkBox_111->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_DSR=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_DSR=Off;

if (ui->checkBox_112->isChecked())this ->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_CTS=On;
else this->SetingOPoraStruct.PER_UART[uart].FRR.uart_read_CTS=Off;

if (ui->checkBox_113->isChecked())this ->SetingOPoraStruct.PER_UART[uart].LCRH. uart_SPS=On;
else this->SetingOPoraStruct.PER_UART[uart].LCRH. uart_SPS=Off;

if (ui->checkBox_114->isChecked())this ->SetingOPoraStruct.PER_UART[uart].LCRH.uart_FEN=On;
else this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_FEN=Off;

if (ui->checkBox_115->isChecked())this ->SetingOPoraStruct.PER_UART[uart].LCRH.uart_EPS=chet;
else this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_EPS=nechet;

if (ui->checkBox_117->isChecked())this ->SetingOPoraStruct.PER_UART[uart].LCRH.uart_read_BRK=On;
else this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_read_BRK=Off;

if (ui->checkBox_118->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_CTSEn=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_CTSEn=Off;

if (ui->checkBox_119->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_RTSEn=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_RTSEn=Off;

if (ui->checkBox_120->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_Out2=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_Out2=Off;

if (ui->checkBox_121->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_Out1=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_Out1=Off;

if (ui->checkBox_122->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_RTS=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_RTS=Off;

if (ui->checkBox_123->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_DTR=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_DTR=Off;

if (ui->checkBox_124->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_RXE=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_RXE=Off;

if (ui->checkBox_125->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_TXE=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_TXE=Off;

if (ui->checkBox_126->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_LBE=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_LBE=Off;

if (ui->checkBox_128->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_SIREN=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_SIREN=Off;

if (ui->checkBox_127->isChecked())this ->SetingOPoraStruct.PER_UART[uart].CRR.uart_UARTEN=On;
else this->SetingOPoraStruct.PER_UART[uart].CRR.uart_UARTEN=Off;

if (ui->checkBox_129->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_OEIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_OEIM=Off;

if (ui->checkBox_130->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_BEIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_BEIM=Off;

if (ui->checkBox_131->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS. uart_PEIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS. uart_PEIM=Off;

if (ui->checkBox_133->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_FEIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_FEIM=Off;

if (ui->checkBox_134->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RTIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RTIM=Off;

if (ui->checkBox_135->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_TXIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_TXIM=Off;

if (ui->checkBox_136->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RXIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RXIM=Off;

if (ui->checkBox_137->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_DSRMIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_DSRMIM=Off;

if (ui->checkBox_138->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_DCDMIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_DCDMIM=Off;

if (ui->checkBox_139->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_CTSMIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_CTSMIM=Off;

if (ui->checkBox_140->isChecked())this ->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RIMIM=On;
else this->SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RIMIM=Off;

if (ui->checkBox_141->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_OERIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_OERIS=Off;

if (ui->checkBox_142->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_BERIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_BERIS=Off;

if (ui->checkBox_143->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_PERIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_PERIS=Off;

if (ui->checkBox_144->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_FERIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_FERIS=Off;

if (ui->checkBox_145->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RTRIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RTRIS=Off;

if (ui->checkBox_146->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_TXRIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_TXRIS=Off;

if (ui->checkBox_147->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RXRIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RXRIS=Off;

if (ui->checkBox_148->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_DSRRMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_DSRRMIS=Off;

if (ui->checkBox_149->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI. uart_read_DCDRMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI. uart_read_DCDRMIS=Off;

if (ui->checkBox_150->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_CTSRMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_CTSRMIS=Off;

if (ui->checkBox_151->isChecked())this ->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RIRMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RIRMIS=Off;

if (ui->checkBox_152->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_OEMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_OEMIS=Off;

if (ui->checkBox_153->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_BEMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_BEMIS=Off;

if (ui->checkBox_154->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_PEMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_PEMIS=Off;

if (ui->checkBox_155->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_FEMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_FEMIS=Off;

if (ui->checkBox_156->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RTMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RTMIS=Off;

if (ui->checkBox_157->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_TXMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_TXMIS=Off;

if (ui->checkBox_158->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RXMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RXMIS=Off;

if (ui->checkBox_159->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_DSRMMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_DSRMMIS=Off;

if (ui->checkBox_160->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_DCDMMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_DCDMMIS=Off;

if (ui->checkBox_161->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_CTSMMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_CTSMMIS=Off;

if (ui->checkBox_162->isChecked())this ->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RIMMIS=On;
else this->SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RIMMIS=Off;

if (ui->checkBox_163->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_OEIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_OEIC=Off;

if (ui->checkBox_164->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI. uart_write_BEIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI. uart_write_BEIC=Off;

if (ui->checkBox_167->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_PEIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_PEIC=Off;

if (ui->checkBox_168->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_FEIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_FEIC=Off;

if (ui->checkBox_169->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RTIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RTIC=Off;

if (ui->checkBox_170->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_TXIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_TXIC=Off;

if (ui->checkBox_171->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RXIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RXIC=Off;

if (ui->checkBox_172->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_DSRMIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_DSRMIC=Off;

if (ui->checkBox_173->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_DCDMIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_DCDMIC=Off;

if (ui->checkBox_174->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_CTSMIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_CTSMIC=Off;

if (ui->checkBox_165->isChecked())this ->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RIMIC=On;
else this->SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RIMIC=Off;

if (ui->checkBox_116->isChecked())this ->SetingOPoraStruct.PER_UART[uart].LCRH.uart_PEN=chet;
else this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_PEN=nechet;

if (ui->checkBox_175->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DMARKI. uart_DMAONERR=On;
else this->SetingOPoraStruct.PER_UART[uart].DMARKI. uart_DMAONERR=Off;

if (ui->checkBox_176->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DMARKI.uart_TXDMAE=On;
else this->SetingOPoraStruct.PER_UART[uart].DMARKI.uart_TXDMAE=Off;

if (ui->checkBox_177->isChecked())this ->SetingOPoraStruct.PER_UART[uart].DMARKI.uart_RXDMAE=On;
else this->SetingOPoraStruct.PER_UART[uart].DMARKI.uart_RXDMAE=Off;

if (ui->checkBox_178->isChecked())this ->SetingOPoraStruct.PER_UART[uart].TCRKI.uart_SIRTEST=On;
else this->SetingOPoraStruct.PER_UART[uart].TCRKI.uart_SIRTEST=Off;

if (ui->checkBox_179->isChecked())this ->SetingOPoraStruct.PER_UART[uart].TCRKI.uart_TESTFIFO=On;
else this->SetingOPoraStruct.PER_UART[uart].TCRKI.uart_TESTFIFO=Off;

if (ui->checkBox_180->isChecked())this ->SetingOPoraStruct.PER_UART[uart].TCRKI.uart_ITEN=On;
else this->SetingOPoraStruct.PER_UART[uart].TCRKI.uart_ITEN=Off;

switch (ui->comboBox_36->currentIndex())
{
case 0: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_RXIFLSEL =  bit_1div8;break;
case 1: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_RXIFLSEL = bit_1div4;break;
case 2: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_RXIFLSEL = bit_1div2;break;
case 3: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_RXIFLSEL = bit_3div4;break;
case 4: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_RXIFLSEL =  bit_7div8;break;
}
switch (ui->comboBox_38->currentIndex())
{
    case 0: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_TXIFLSEL = bit_1div8;break;
    case 1: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_TXIFLSEL = bit_1div4;break;
    case 2: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_TXIFLSEL = bit_1div2;break;
    case 3: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_TXIFLSEL = bit_3div4;break;
    case 4: this->SetingOPoraStruct.PER_UART[uart].IFLSS.uart_TXIFLSEL = bit_7div8;break;
}
switch (ui->comboBox_20->currentIndex())
{
    case 0: this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_WLEN =  bit_8;break;
    case 1: this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_WLEN =  bit_7;break;
    case 2: this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_WLEN =  bit_6;break;
    case 3: this->SetingOPoraStruct.PER_UART[uart].LCRH.uart_WLEN =  bit_5;break;
}
switch (ui->comboBox_26->currentIndex())
{
    case 0: this->SetingOPoraStruct.PER_UART[uart].LCRH. uart_STP2 = stopbit1;break;
    case 1: this->SetingOPoraStruct.PER_UART[uart].LCRH. uart_STP2 = stopbit2;break;
}
}

void MainWindow::LoadUART(int uart)
{
    if (SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read == On) ui->checkBox_71->setChecked(true);
    else ui->checkBox_71->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read == On) ui->checkBox_76->setChecked(true);
    else ui->checkBox_76->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read == On) ui->checkBox_78->setChecked(true);
    else ui->checkBox_78->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read == On) ui->checkBox_84->setChecked(true);
    else ui->checkBox_84->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DRR.uart_Enable_read == On) ui->checkBox_88->setChecked(true);
    else ui->checkBox_88->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR. uart_read_RI == On) ui->checkBox_104->setChecked(true);
    else ui->checkBox_104->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_TXFE == On) ui->checkBox_105->setChecked(true);
    else ui->checkBox_105->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_RXFF == On) ui->checkBox_106->setChecked(true);
    else ui->checkBox_106->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_TXFF == On) ui->checkBox_107->setChecked(true);
    else ui->checkBox_107->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_RXFE == On) ui->checkBox_108->setChecked(true);
    else ui->checkBox_108->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_BUSY == On) ui->checkBox_109->setChecked(true);
    else ui->checkBox_109->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_DCD == On) ui->checkBox_110->setChecked(true);
    else ui->checkBox_110->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_DSR == On) ui->checkBox_111->setChecked(true);
    else ui->checkBox_111->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].FRR.uart_read_CTS == On) ui->checkBox_112->setChecked(true);
    else ui->checkBox_112->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].LCRH. uart_SPS == On) ui->checkBox_113->setChecked(true);
    else ui->checkBox_113->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].LCRH.uart_FEN == On) ui->checkBox_114->setChecked(true);
    else ui->checkBox_114->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].LCRH.uart_EPS == chet) ui->checkBox_115->setChecked(true);
    else ui->checkBox_115->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].LCRH.uart_read_BRK == On) ui->checkBox_117->setChecked(true);
    else ui->checkBox_117->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_CTSEn == On) ui->checkBox_118->setChecked(true);
    else ui->checkBox_118->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_RTSEn == On) ui->checkBox_119->setChecked(true);
    else ui->checkBox_119->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_Out2 == On) ui->checkBox_120->setChecked(true);
    else ui->checkBox_120->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_Out1 == On) ui->checkBox_121->setChecked(true);
    else ui->checkBox_121->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_RTS == On) ui->checkBox_122->setChecked(true);
    else ui->checkBox_122->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_DTR == On) ui->checkBox_123->setChecked(true);
    else ui->checkBox_123->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_RXE == On) ui->checkBox_124->setChecked(true);
    else ui->checkBox_124->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_TXE == On) ui->checkBox_125->setChecked(true);
    else ui->checkBox_125->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_LBE == On) ui->checkBox_126->setChecked(true);
    else ui->checkBox_126->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_SIREN == On) ui->checkBox_127->setChecked(true);
    else ui->checkBox_127->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].CRR.uart_UARTEN == On) ui->checkBox_129->setChecked(true);
    else ui->checkBox_129->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_OEIM == On) ui->checkBox_130->setChecked(true);
    else ui->checkBox_130->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_BEIM == On) ui->checkBox_131->setChecked(true);
    else ui->checkBox_131->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS. uart_PEIM == On) ui->checkBox_133->setChecked(true);
    else ui->checkBox_133->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_FEIM == On) ui->checkBox_134->setChecked(true);
    else ui->checkBox_134->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RTIM == On) ui->checkBox_135->setChecked(true);
    else ui->checkBox_135->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RXIM == On) ui->checkBox_136->setChecked(true);
    else ui->checkBox_136->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_DSRMIM == On) ui->checkBox_137->setChecked(true);
    else ui->checkBox_137->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_DCDMIM == On) ui->checkBox_138->setChecked(true);
    else ui->checkBox_138->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_CTSMIM == On) ui->checkBox_139->setChecked(true);
    else ui->checkBox_139->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].IMCSS.uart_RIMIM == On) ui->checkBox_140->setChecked(true);
    else ui->checkBox_140->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_OERIS == On) ui->checkBox_141->setChecked(true);
    else ui->checkBox_141->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_BERIS == On) ui->checkBox_142->setChecked(true);
    else ui->checkBox_142->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_PERIS == On) ui->checkBox_143->setChecked(true);
    else ui->checkBox_143->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_FERIS == On) ui->checkBox_144->setChecked(true);
    else ui->checkBox_144->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RTRIS == On) ui->checkBox_145->setChecked(true);
    else ui->checkBox_145->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_TXRIS == On) ui->checkBox_146->setChecked(true);
    else ui->checkBox_146->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RXRIS == On) ui->checkBox_147->setChecked(true);
    else ui->checkBox_147->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_DSRRMIS == On) ui->checkBox_148->setChecked(true);
    else ui->checkBox_148->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI. uart_read_DCDRMIS == On) ui->checkBox_149->setChecked(true);
    else ui->checkBox_149->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_CTSRMIS == On) ui->checkBox_150->setChecked(true);
    else ui->checkBox_150->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].RISI.uart_read_RIRMIS == On) ui->checkBox_151->setChecked(true);
    else ui->checkBox_151->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_OEMIS == On) ui->checkBox_152->setChecked(true);
    else ui->checkBox_152->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_BEMIS == On) ui->checkBox_153->setChecked(true);
    else ui->checkBox_153->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_PEMIS == On) ui->checkBox_154->setChecked(true);
    else ui->checkBox_154->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_FEMIS == On) ui->checkBox_155->setChecked(true);
    else ui->checkBox_155->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RTMIS == On) ui->checkBox_156->setChecked(true);
    else ui->checkBox_156->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_TXMIS == On) ui->checkBox_157->setChecked(true);
    else ui->checkBox_157->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RXMIS == On) ui->checkBox_158->setChecked(true);
    else ui->checkBox_158->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_DSRMMIS== On) ui->checkBox_159->setChecked(true);
    else ui->checkBox_159->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_DCDMMIS == On) ui->checkBox_160->setChecked(true);
    else ui->checkBox_160->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_CTSMMIS == On) ui->checkBox_161->setChecked(true);
    else ui->checkBox_161->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].MISI.uart_read_RIMMIS == On) ui->checkBox_162->setChecked(true);
    else ui->checkBox_162->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_OEIC== On) ui->checkBox_163->setChecked(true);
    else ui->checkBox_163->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI. uart_write_BEIC== On) ui->checkBox_164->setChecked(true);
    else ui->checkBox_164->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_PEIC== On) ui->checkBox_167->setChecked(true);
    else ui->checkBox_167->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_FEIC== On) ui->checkBox_168->setChecked(true);
    else ui->checkBox_168->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RTIC== On) ui->checkBox_169->setChecked(true);
    else ui->checkBox_169->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_TXIC== On) ui->checkBox_170->setChecked(true);
    else ui->checkBox_170->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RXIC== On) ui->checkBox_171->setChecked(true);
    else ui->checkBox_171->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_DSRMIC== On) ui->checkBox_172->setChecked(true);
    else ui->checkBox_172->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_DCDMIC== On) ui->checkBox_173->setChecked(true);
    else ui->checkBox_173->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_CTSMIC== On) ui->checkBox_174->setChecked(true);
    else ui->checkBox_174->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].ICRI.uart_write_RIMIC== On) ui->checkBox_165->setChecked(true);
    else ui->checkBox_165->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].LCRH.uart_PEN== chet) ui->checkBox_116->setChecked(true);
    else ui->checkBox_116->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DMARKI. uart_DMAONERR== On) ui->checkBox_175->setChecked(true);
    else ui->checkBox_175->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DMARKI.uart_TXDMAE== On) ui->checkBox_176->setChecked(true);
    else ui->checkBox_176->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].DMARKI.uart_RXDMAE== On) ui->checkBox_177->setChecked(true);
    else ui->checkBox_177->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].TCRKI.uart_SIRTEST== On) ui->checkBox_178->setChecked(true);
    else ui->checkBox_178->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].TCRKI.uart_TESTFIFO== On) ui->checkBox_179->setChecked(true);
    else ui->checkBox_179->setChecked(false);
    if (SetingOPoraStruct.PER_UART[uart].TCRKI.uart_ITEN== On) ui->checkBox_180->setChecked(true);
    else ui->checkBox_180->setChecked(false);


    switch (SetingOPoraStruct.PER_UART[uart].IFLSS.uart_RXIFLSEL)
    {
    case bit_1div8:ui->comboBox_36->setCurrentIndex(0);break;
    case bit_1div4:ui->comboBox_36->setCurrentIndex(1);break;
    case bit_1div2:ui->comboBox_36->setCurrentIndex(2);break;
    case bit_3div4:ui->comboBox_36->setCurrentIndex(3);break;
    case bit_7div8:ui->comboBox_36->setCurrentIndex(4);break;
    }
    switch (SetingOPoraStruct.PER_UART[uart].IFLSS.uart_TXIFLSEL)
    {
    case bit_1div8:ui->comboBox_38->setCurrentIndex(0);break;
    case bit_1div4: ui->comboBox_38->setCurrentIndex(1);break;
    case bit_1div2: ui->comboBox_38->setCurrentIndex(2);break;
    case bit_3div4:ui->comboBox_38->setCurrentIndex(3);break;
    case bit_7div8: ui->comboBox_38->setCurrentIndex(4);break;
    }
    switch (SetingOPoraStruct.PER_UART[uart].LCRH.uart_WLEN)
    {
        case bit_8: ui->comboBox_20->setCurrentIndex(0);break;
        case bit_7: ui->comboBox_20->setCurrentIndex(1);break;
        case bit_6: ui->comboBox_20->setCurrentIndex(2);break;
        case bit_5: ui->comboBox_20->setCurrentIndex(3);break;
    }
    switch (this->SetingOPoraStruct.PER_UART[uart].LCRH. uart_STP2)
    {
        case stopbit1:  ui->comboBox_26->setCurrentIndex(0);break;
        case stopbit2:  ui->comboBox_26->setCurrentIndex(1);break;
    }
}
