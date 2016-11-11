#ifndef CIRCLE_H
#define CIRCLE_H

#include "flatfigure.hpp"
class Circle :
    public FlatFigure
{
private:
    double r;

public:
    Circle(double r);
    virtual ~Circle();
    virtual string figure_info();
    virtual double area();
    virtual double perimeter();
};


#endif // CIRCLE_H
