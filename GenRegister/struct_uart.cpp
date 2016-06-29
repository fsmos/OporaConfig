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
}

void MainWindow::LoadUART(int uart)
{

}
