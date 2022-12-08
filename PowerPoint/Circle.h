#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle();
    void ChangeColor() override;
    void ChangeSize() override;
    void ChangeText() override;
    QGraphicsScene* Drow(QGraphicsScene*,double x,double y,double width,double heigth) override;
};

#endif // CIRCLE_H
