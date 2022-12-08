#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Application.h"
#include "ShapeSizeWindow.h"

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

    void on_newslide_clicked();

    void on_showslideforindex_clicked();

    void on_Rectangle_clicked();
    void handleSizeWindow();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Application* m_application;
    ShapeSizeWindow* m_shapesizewindow;
};
#endif // MAINWINDOW_H
