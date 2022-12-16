#include "SlideView.h"

SlideView::SlideView(SlideCollection* slidecollection) : m_slidecollection(slidecollection)
{

}

QGraphicsScene* SlideView::GetSlideSceen(int index)
{
    Slide* slide = m_slidecollection->GetSlide(index);
    qDebug () << "GetSlideSceen";
    return slide->GetGraphicsSceen();
}
