#include "SlideEditor.h"
#include "Rectangle.h"
#include <QGraphicsScene>

SlideEditor::SlideEditor() : m_checkshapeobject(new CheckShapeObject)
{

}
void SlideEditor::SetSlide(Slide* slide)
{
    m_slide = slide;
}
void SlideEditor::AddShape(QString shape,double x,double y,double width,double heigth)
{
    // Check Type
   QGraphicsScene* slidesceen =  m_slide->GetGraphicsSceen();
   Shape* shapetype = m_checkshapeobject->GetShapeObject(shape.toStdString());
   m_slide->SetShapeInMap(shapetype,x);
   QGraphicsScene* rect  = shapetype->Drow(slidesceen,x,y,width,heigth);


   /*
   if(shape == "Rectangle")
   {
        Rectangle* rectangle = new Rectangle();
        QGraphicsScene* rect  = rectangle->Drow(slidesceen,x,y,width,heigth);
        m_slide->SetGraphicsSceen(rect);
   }*/
}
