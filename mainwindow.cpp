#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "ceratestringclass.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete numbers;
    delete symbol;
}



void MainWindow::on_btnBackToMenu_clicked()
{
    CerateStringClass *numbers = new CerateStringClass();
    CerateStringClass *symbol = new CerateStringClass();
    QVector<int> twoNumbersFromMethod = numbers->onGenerateNumbersForString();
    QString symbolFromMethod = symbol->onGenerateSymbolForString();

    QMessageBox::information(this, "Geg", QString::number(twoNumbersFromMethod[0]) + " - " + QString::number(twoNumbersFromMethod[1]) + "<->" + symbolFromMethod);
}

