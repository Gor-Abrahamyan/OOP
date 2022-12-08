#include "Circle.h"
#include <QGraphicsEllipseItem>

Circle::Circle()
{

}
void Circle::ChangeColor()
{

}
void Circle::ChangeSize()
{

}
void Circle::ChangeText()
{

}
QGraphicsScene* Circle::Drow(QGraphicsScene* graphicsscene,double x,double y,double width,double heigth)
{
    QGraphicsEllipseItem* elips = new QGraphicsEllipseItem(x,y,width,heigth);
    graphicsscene->addItem(elips);
    return  graphicsscene;
}
