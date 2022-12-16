#include "Slide.h"

Slide::Slide() : m_graphicscene(new QGraphicsScene())
{

}
QGraphicsScene* Slide::GetGraphicsSceen()
{
    return m_graphicscene;
}
void Slide::SetGraphicsSceen(QGraphicsScene* sceen)
{
    m_graphicscene = sceen;
}
void Slide::SetShapeInMap(Shape* shape ,double X)
{
    m_mapshapetoX.insert(std::pair<Shape*,double>(shape,X));
}
