#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_application(new Application)
    , m_shapesizewindow(new ShapeSizeWindow)
{
    ui->setupUi(this);
    m_application->SetGraphicsView(ui->graphicsView);
    QObject::connect(m_shapesizewindow, &ShapeSizeWindow::doSize,
                        this, &MainWindow::handleSizeWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newslide_clicked()
{
    m_application->NewSlide();
}

void MainWindow::on_showslideforindex_clicked()
{
    QString slidenumber = ui->slidenumber->text();
    m_application->ShowSlideForThisNumber(slidenumber.toInt());
}

void MainWindow::on_Rectangle_clicked()
{
    m_shapesizewindow->show();
}
void MainWindow::handleSizeWindow()
{
    double x = m_shapesizewindow->GetX();
    double y = m_shapesizewindow->GetY();
    double width = m_shapesizewindow->GetWidth();
    double heigth = m_shapesizewindow->GetHeigth();

    qDebug() << "Size" << x << y << width << heigth;
    m_application->AddShapeInSlide("Rectangle",x,y,width,heigth);

    m_application->GetActiveSlideNumber();
}

void MainWindow::on_pushButton_clicked()
{
    close();
}

