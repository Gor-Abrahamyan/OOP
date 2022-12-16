#ifndef SLIDECOLLECTIONVIEW_H
#define SLIDECOLLECTIONVIEW_H

#include "SlideCollection.h"

class SlideCollectionView
{
public:
    SlideCollectionView(SlideCollection* slidecollection);
    void ShowAllSlideWindow();

private:
    SlideCollection* m_slidecollection;
};

#endif // SLIDECOLLECTIONVIEW_H
