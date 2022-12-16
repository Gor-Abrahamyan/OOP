#ifndef SLIDEVIEW_H
#define SLIDEVIEW_H

#include "SlideCollectionView.h"
#include "Slide.h"
#include <QGraphicsScene>

class SlideView
{
public:
    SlideView(SlideCollection*);
    QGraphicsScene* GetSlideSceen(int);

private:
    SlideCollection* m_slidecollection;
};

#endif // SLIDEVIEW_H
