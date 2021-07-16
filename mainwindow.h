#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "generator.h"
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
    void onGenerationEquation();

    void onCheckAnswer();

private:
    GenerationStringClass *mainStringOnWindow;
    QStringList resultStringList;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
