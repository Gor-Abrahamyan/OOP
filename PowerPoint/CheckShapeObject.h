#ifndef CHECKSHAPEOBJECT_H
#define CHECKSHAPEOBJECT_H

#include "Shape.h"
#include <string>

class CheckShapeObject
{
public:
    CheckShapeObject();
    void Insert();
    Shape* GetShapeObject(std::string);
private:
    std::map <std::string, Shape*> m_shapetypes;
};

#endif // CHECKSHAPEOBJECT_H
