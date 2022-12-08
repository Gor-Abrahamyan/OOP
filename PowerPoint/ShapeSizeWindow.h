#ifndef SHAPESIZEWINDOW_H
#define SHAPESIZEWINDOW_H

#include <QDialog>

namespace Ui {
class ShapeSizeWindow;
}

class ShapeSizeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShapeSizeWindow(QWidget *parent = nullptr);
    ~ShapeSizeWindow();

    double GetX();
    double GetY();
    double GetWidth();
    double GetHeigth();

private slots:
    void on_SizeInputOk_clicked();

signals:
    void doSize();

private:
    Ui::ShapeSizeWindow *ui;
    double m_x;
    double m_y;
    double m_width;
    double m_heigth;
};

#endif // SHAPESIZEWINDOW_H
