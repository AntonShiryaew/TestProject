#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "generationmethodsclass.h"
#include "generationstringclass.h"

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
    GenerationMethodsClass *number;
    GenerationMethodsClass *symbol;
    GenerationStringClass *mainStringOnWindow;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
