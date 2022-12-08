#ifndef SLIDE_H
#define SLIDE_H

#include <QGraphicsScene>
#include "Shape.h"

class Slide
{
public:
    Slide();
    QGraphicsScene* GetGraphicsSceen();
    void SetGraphicsSceen(QGraphicsScene*);
    void SetShapeInMap(Shape*,double);

private:
    QGraphicsScene* m_graphicscene;
    std::map <Shape*,double> m_mapshapetoX;
};

#endif // SLIDE_H
