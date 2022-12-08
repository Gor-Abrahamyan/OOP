#include "SlideCollection.h"

SlideCollection::SlideCollection()
{


}


void SlideCollection::AddSlideInVector(Slide* slide)
{
    qDebug() << "Slide Added SlideCollection";
    m_slide.push_back(slide);
}

Slide* SlideCollection::GetSlide(int index)
{
    return m_slide[index];
}
