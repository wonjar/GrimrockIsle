#ifndef GRIMWINDOW_H
#define GRIMWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GrimWindow; }
QT_END_NAMESPACE

class GrimWindow : public QMainWindow
{
    Q_OBJECT

public:
    GrimWindow(QWidget *parent = nullptr);
    ~GrimWindow();

private slots:
    void on_save_triggered();
    void on_load_triggered();

private:
    Ui::GrimWindow *ui;
};
#endif // GRIMWINDOW_H
