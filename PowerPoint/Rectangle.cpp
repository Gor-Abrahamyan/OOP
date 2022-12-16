#include "Rectangle.h"
#include <QGraphicsRectItem>

Rectangle::Rectangle()
{

}
void Rectangle::ChangeColor()
{

}
void Rectangle::ChangeSize()
{

}
void Rectangle::ChangeText()
{

}
QGraphicsScene* Rectangle::Drow(QGraphicsScene* graphicsscene,double x,double y,double width,double heigth)
{
    QGraphicsRectItem* rect = new QGraphicsRectItem(x,y,width,heigth);
    graphicsscene->addItem(rect);
    return graphicsscene;
}
