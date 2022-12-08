#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle();
    virtual void ChangeColor() override;
    virtual void ChangeSize() override;
    virtual void ChangeText() override;
    virtual QGraphicsScene * Drow(QGraphicsScene*,double x,double y,double width,double heigth) override;
};

#endif // RECTANGLE_H
