
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    QObject::connect(ui->btnCount, SIGNAL(QPushButton::clicked), this, SLOT(on_btnCount_clicked) );
    QObject::connect(ui->btnReset, SIGNAL(QPushButton::clicked), this, SLOT(on_btnReset_clicked) );
}

void MainWindow::on_btnCount_clicked()
{
    counter += 1;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Button Count has been pressed "+ s +" times");
    //for testing
    qDebug()<<counter;
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Button Count has been pressed "+ s +" times");
}

