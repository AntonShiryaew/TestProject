#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ceratestringclass.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnBackToMenu_clicked();

private:
    CerateStringClass *numbers;
    CerateStringClass *symbol;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
