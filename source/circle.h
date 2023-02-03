#include <math.h>
#include "shape.h"

class Circle : public Shape
{
private:
    double radius;

public:
    void setRadius(double v)
    {
        radius = v;
    }
    double getArea()
    {
        return M_PI * pow(radius, 2);
    }
    double getParameter()
    {
        return 2 * M_PI * radius;
    }
    int getSides(){
        return sides;
    }
};