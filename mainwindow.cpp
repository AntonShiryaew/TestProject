#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "generator.h"
#include "generationstringclass.h"
#include "resultforstringclass.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnConfirmation, SIGNAL(clicked()), this, SLOT(onCheckAnswer()));
    connect(ui->btnBackToMenu, SIGNAL(clicked()), this, SLOT(onGenerationEquation()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete mainStringOnWindow;
}

void MainWindow::onGenerationEquation()
{
    GenerationStringClass *mainStringOnWindow = new GenerationStringClass();
    resultStringList = mainStringOnWindow->onGenerateString(ui->countNumbers->text().toInt());
    ui->labelEquation->setText(resultStringList.join(" "));
}


void MainWindow::onCheckAnswer()
{
    ResultForStringClass *res = new ResultForStringClass();
    double result = ui->editAnswer->text().toDouble();
    if (result == res->onResultInString(resultStringList))
        QMessageBox::information(this, "Верно", "Читай выше");
    else
        QMessageBox::information(this, "Неверно", "Читай выше");
}

