#ifndef APPLICATION_H
#define APPLICATION_H

#include "Slide.h"
#include "SlideCollection.h"
#include "SlideEditor.h"
#include "SlideCollectionView.h"
#include <QGraphicsView>
#include "SlideView.h"

class Application
{
public:
    Application();
    void NewSlide();
    void SetGraphicsView(QGraphicsView*);
    void ShowSlideForThisNumber(int index);
    int GetActiveSlideNumber();
    void AddShapeInSlide(QString,double,double,double,double);
    void AddFirstSlide();

private:
    int m_activeslideindex;
    SlideCollection* m_slidecollection;
    SlideCollectionView* m_slidecollectionview;
    SlideView* m_slideview;
    QGraphicsView* m_graphicsview;
    SlideEditor* m_slideeditor;
};

#endif // APPLICATION_H
