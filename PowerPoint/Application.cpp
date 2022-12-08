#include "Application.h"

Application::Application() : m_slidecollection(new SlideCollection)
                            , m_slidecollectionview(new SlideCollectionView(m_slidecollection))
                            , m_slideview(new SlideView(m_slidecollection))
                            , m_slideeditor(new SlideEditor())
{
    AddFirstSlide();
}

void Application::NewSlide()
{
    Slide* newslide = new Slide();
    m_slidecollection->AddSlideInVector(newslide);
}
void Application::SetGraphicsView(QGraphicsView* graphicsview)
{
    m_graphicsview = graphicsview;
}
void Application::ShowSlideForThisNumber(int index)
{
    m_activeslideindex = index;
    m_graphicsview->setScene(m_slideview->GetSlideSceen(index));
}
int Application::GetActiveSlideNumber()
{
    return  m_activeslideindex;
}
void Application::AddShapeInSlide(QString shape,double x,double y,double width,double heigth)
{
    Slide* slide = m_slidecollection->GetSlide(m_activeslideindex);
    m_slideeditor->SetSlide(slide);
    m_slideeditor->AddShape(shape,x,y,width,heigth);
}
void Application::AddFirstSlide()
{
   // NewSlide();
   // ShowSlideForThisNumber(0);
}
