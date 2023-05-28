#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_graph_select_file_clicked()
{
    QStringList file_names = QFileDialog::getOpenFileNames(this, tr("Open File"),"","");
    if (!file_names.empty())
        ui->graph_file_path->setText(file_names.first());
}

