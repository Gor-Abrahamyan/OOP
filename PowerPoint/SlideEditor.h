#ifndef SLIDEEDITOR_H
#define SLIDEEDITOR_H
#include "Slide.h"
#include "CheckShapeObject.h"

class SlideEditor
{
public:
    SlideEditor();
    void SetSlide(Slide*);
    void AddShape(QString,double,double,double,double);

private:
    Slide* m_slide;
    CheckShapeObject* m_checkshapeobject;
};

#endif // SLIDEEDITOR_H
