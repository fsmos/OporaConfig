#ifndef PORT_H
#define PORT_H

#include <QTabWidget>

namespace Ui {
class Port;
}

class Port : public QTabWidget
{
    Q_OBJECT

public:
    explicit Port(QWidget *parent = 0);
    ~Port();

private:
    Ui::Port *ui;
};

#endif // PORT_H
