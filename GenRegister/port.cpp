#include "port.h"
#include "ui_port.h"

Port::Port(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Port)
{
    ui->setupUi(this);
}

Port::~Port()
{
    delete ui;
}
