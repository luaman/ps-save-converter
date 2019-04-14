/*
 * Copyright © 2019 nastys
 *
 * This file is part of PS Save Converter.
 * PS Save Converter is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PS Save Converter is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PS Save Converter.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QByteArray>
#include <QFileDialog>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString inputfilename = QFileDialog::getOpenFileName();
    if (inputfilename=="")
        return;
    QString outputfilename = inputfilename+"-CONVERTED";
    QByteArray input, final, temp;
    QFile inputfile(inputfilename);
    inputfile.open(QIODevice::ReadOnly);
    input = inputfile.readAll();
    for (int block=0; block<inputfile.size()/4; block++)
    {
        for (int byte=0; byte<4; byte++)
        {
            temp.append(input.at(block*4+byte));
        }
        for (int byte=3; byte>=0; byte--)
        {
            final.append(temp.at(byte));
        }
        temp.clear();
    }
    QFile outputfile(outputfilename);
    outputfile.open(QIODevice::WriteOnly);
    outputfile.write(final);
}
