#include "shape.h"

class Rectangle : public Shape
{
    public:
        void setWidth(double v)
        {
            width = v;
        }
        void setHeight(double v)
        {
            height = v;
        }
        double getArea()
        {
            return width * height;
        }
        double getParameter()
        {
            return 2 * width + 2 * height;
        }
};