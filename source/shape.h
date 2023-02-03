#ifndef SHAPE_H_
#define SHAPE_H_

class Shape
{
public:
    double getArea();
    double getParameter();
    int getSides()
    {
        return sides;
    }

protected:
    double width;
    double height;
    int sides;
};

#endif