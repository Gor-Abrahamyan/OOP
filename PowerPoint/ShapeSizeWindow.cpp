#include "ShapeSizeWindow.h"
#include "ui_ShapeSizeWindow.h"

ShapeSizeWindow::ShapeSizeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShapeSizeWindow)
{
    ui->setupUi(this);
}

ShapeSizeWindow::~ShapeSizeWindow()
{
    delete ui;
}

void ShapeSizeWindow::on_SizeInputOk_clicked()
{
    QString x = ui->X->text();
    QString y = ui->Y->text();
    QString width = ui->Width->text();
    QString heigth = ui->Heigth->text();
    m_x = x.toDouble();
    m_y = y.toDouble();
    m_width = width.toDouble();
    m_heigth = heigth.toDouble();

    hide();
    emit doSize();
    ui->X->clear();
    ui->Y->clear();
    ui->Width->clear();
    ui->Heigth->clear();

}
double ShapeSizeWindow::GetX()
{
    return m_x;
}
double ShapeSizeWindow::GetY()
{
    return m_y;
}
double ShapeSizeWindow::GetWidth()
{
    return m_width;
}
double ShapeSizeWindow::GetHeigth()
{
    return m_heigth;
}
