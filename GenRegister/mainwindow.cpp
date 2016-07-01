#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "struct_code.h"
#include <qfile.h>
#include <qfiledialog.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitStruct();
}

void MainWindow::InitStruct()
{
int i,j;
/*for (i=0; i<6; ++i)
     {
      for (j=0; j<16; ++j)
      {
      SetingOPoraStruct.GPIOPort[i].Pin[j].RXTX=Off;
      SetingOPoraStruct.GPIOPort[i].Pin[j].OE=Input;
      SetingOPoraStruct.GPIOPort[i].Pin[j].Function=port1;
      SetingOPoraStruct.GPIOPort[i].Pin[j].Analog=analog;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PULL.port_down=Off;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PULL.port_up=Off;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PD.control=Controls;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PD.Shmidt_port=Off;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PWR=reserved1;
      SetingOPoraStruct.GPIOPort[i].Pin[j].GFEN=Off;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PCMD.CMD_DISABLE=Off;
      SetingOPoraStruct.GPIOPort[i].Pin[j].PCMD.CMD_ENABLE=Off;
      }
     }
LoadGPIO(0,0);
*/

memset(&SetingOPoraStruct,0,sizeof(struct OporaDataStruct));
IndicateData(SetingOPoraStruct);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_FileOpen_triggered()
{
    QFileDialog* dialog =new QFileDialog();
    //dialog->show();
   file=dialog->getOpenFileName(0,"Open Opora File", "","*.gpsf");
   QFile* qf=new QFile(file);
   if (qf->open(QIODevice::ReadOnly))
   {
   QByteArray readf=qf->readAll();
   memcpy((char*)&SetingOPoraStruct,readf.data(),readf.size());
   IndicateData(SetingOPoraStruct);
   }
}
OporaDataStruct MainWindow::GenerateStruct()
{

   // if (ui->APIN1STON->isChecked()) ops.GPIOPort[0].Pin[0].RXTX=On;
    //else ops.GPIOPort[0].Pin[0].RXTX=Off;
    SaveGPIO(GPIO_port,GPIO_pin);
    SaveCLK();
    SaveUART(UARTIndex);
    SaveSSP(SSPIndex);
    SavePVDCS();
    return SetingOPoraStruct;
}

void MainWindow::IndicateData(OporaDataStruct ops)
{
//ui->lineEdit->setText(QString("%1").arg(ops.Er1.el1.ExampleParamet));
    LoadGPIO(0,0);
    LoadCLK();
    UARTIndex=0;
    ui->comboBox_19->setCurrentIndex(UARTIndex);
    LoadUART(UARTIndex);
    SSPIndex=0;
    ui->comboBox_39->setCurrentIndex(SSPIndex);
    LoadSSP(SSPIndex);
    TIMERIndex=0;
    TIMERChannelIndex=0;
    ui->comboBox_16->setCurrentIndex(TIMERIndex);
    ui->comboBox_24->setCurrentIndex(TIMERChannelIndex);
}

void MainWindow::on_FileOpen_toggled(bool arg1)
{

}

void MainWindow::on_action_3_triggered()
{
    QFileDialog* dialog =new QFileDialog();
    //dialog->show();
   file=dialog->getSaveFileName(0,"Open Opora File","*.gpsf","*.gpsf");
    QFile* qf=new QFile(file);
    OporaDataStruct ops=GenerateStruct();
    qf->open(QIODevice::WriteOnly);
    qf->write((char*)&ops,sizeof(ops));
    qf->waitForBytesWritten(1000);
    qf->close();
}


void MainWindow::on_listWidget_itemSelectionChanged()
{

}
void MainWindow::SetGPIO(int port,int pin)
{
SaveGPIO(GPIO_port,GPIO_pin);
GPIO_port=port;
GPIO_pin=pin;
LoadGPIO(GPIO_port,GPIO_pin);
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    SetGPIO(currentRow,GPIO_pin);
}

void MainWindow::on_listWidget_2_currentRowChanged(int currentRow)
{
    SetGPIO(GPIO_port, currentRow);
}

void MainWindow::on_GPIOPinON_clicked()
{

}

void MainWindow::on_action_triggered()
{
    InitStruct();
}

void MainWindow::on_comboBox_19_currentIndexChanged(int index)
{
    SaveUART(UARTIndex);
    UARTIndex=index;
    LoadUART(UARTIndex);
}

void MainWindow::on_comboBox_39_currentIndexChanged(int index)
{
    SaveSSP(SSPIndex);
    SSPIndex=index;
    LoadSSP(SSPIndex);
}

void MainWindow::on_comboBox_16_currentIndexChanged(int index)
{
    TIMERIndex=index;
}

void MainWindow::on_comboBox_24_currentIndexChanged(int index)
{
    TIMERChannelIndex=index;
}
