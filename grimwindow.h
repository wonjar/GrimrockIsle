#ifndef GRIMWINDOW_H
#define GRIMWINDOW_H
#include "stdafx.h"
#include "dicePool.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GrimWindow; }
QT_END_NAMESPACE

class GrimWindow : public QMainWindow
{
    Q_OBJECT

public:
    GrimWindow(QWidget *parent = nullptr);
    ~GrimWindow();

    DicePool *dicepool;

private slots:
    void on_save_triggered();
    void on_load_triggered();
    void on_dice_triggered();

private:
    Ui::GrimWindow *ui;
};
#endif // GRIMWINDOW_H
