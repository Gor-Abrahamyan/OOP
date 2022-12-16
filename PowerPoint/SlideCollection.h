#ifndef SLIDECOLLECTION_H
#define SLIDECOLLECTION_H

#include "Slide.h"
#include <vector>
#include <QDebug>

class SlideCollection
{
public:
    SlideCollection();
    void AddSlideInVector(Slide*);
    Slide* GetSlide(int index);

private:
    std::vector<Slide*> m_slide;
};

#endif // SLIDECOLLECTION_H
