#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "generationmethodsclass.h"
#include "generationstringclass.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete number;
    delete symbol;
    delete mainStringOnWindow;
}

void MainWindow::on_btnBackToMenu_clicked()
{
    GenerationStringClass *mainStringOnWindow = new GenerationStringClass();
    QStringList cycleList = mainStringOnWindow->onGenerateString();
    QString windowString;
    for (int i; i < cycleList.length(); i++)
    {
         windowString += cycleList[i];
    }
    ui->labelExpression->text();
    QMessageBox::warning(this, "", windowString);
}

