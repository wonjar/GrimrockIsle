#include "dicePool.h"

DicePool::DicePool(QWidget *parent)
    :QWidget(parent)
{
    this->setGeometry(QRect(100, 50, 600, 400));
    this->setStyleSheet("background-color:white;border:2px solid grey;border-radius:6px");
    closeDice = new QPushButton(this);
    closeDice->setGeometry(QRect(573, 0, 27, 22));
    connect(closeDice,SIGNAL(clicked()),this,SLOT(on_closeDice_triggered()));
    closeDice->setIcon(QIcon(":/ico/res/close.png"));
    closeDice->setIconSize(QSize(27, 22));
}

DicePool::~DicePool()
{

}
void DicePool::on_closeDice_triggered()
{
    this->~DicePool();
}

void DicePool::paintEvent(QPaintEvent* event) {
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
