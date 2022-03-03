#ifndef DICEPOOL_H
#define DICEPOOL_H
#include "stdafx.h"
class DicePool : public QWidget
{
    Q_OBJECT

public:
    DicePool(QWidget *parent);
    ~DicePool();

    QPushButton *closeDice;

private slots:
    void on_closeDice_triggered();
    void paintEvent(QPaintEvent* event);

private:
    DicePool *dicepool;
};
#endif // DICEPOOL_H
