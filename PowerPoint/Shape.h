#ifndef SHAPE_H
#define SHAPE_H

#include <QGraphicsScene>

class Shape
{
public:
    Shape();
    virtual void ChangeColor() = 0;
    virtual void ChangeSize() = 0;
    virtual void ChangeText() = 0;
    virtual QGraphicsScene* Drow(QGraphicsScene*,double x,double y,double width,double heigth) = 0;
};

#endif // SHAPE_H
