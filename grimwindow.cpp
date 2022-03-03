#include "grimwindow.h"
#include "ui_grimwindow.h"

GrimWindow::GrimWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GrimWindow)
{
    ui->setupUi(this);
}

GrimWindow::~GrimWindow()
{
    delete ui;
}

void GrimWindow::on_save_triggered()
{
    //here show save widget
    //delete ui->titleCN;
}

void GrimWindow::on_load_triggered()
{

}


void GrimWindow::on_dice_triggered()
{
    dicepool = new DicePool(ui->centralwidget);
    dicepool->show();
}
