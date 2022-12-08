#include "CheckShapeObject.h"
#include "Rectangle.h"
#include "Circle.h"

CheckShapeObject::CheckShapeObject()
{
    Insert();
}
void CheckShapeObject::Insert()
{
    m_shapetypes.insert(std::pair<std::string, Shape*>("Rectangle", new Rectangle()));
    m_shapetypes.insert(std::pair<std::string, Shape*>("Circle", new Circle()));
}
Shape* CheckShapeObject::GetShapeObject(std::string currentshape)
{
    std::map<std::string, Shape*>::iterator itr;
    for (itr = m_shapetypes.begin(); itr != m_shapetypes.end(); ++itr)
    {
        if(itr->first == currentshape)
        {
            return itr->second;
        }
    }

}
