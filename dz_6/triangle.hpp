#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "flatfigure.hpp"
class Triangle :
    public FlatFigure
{
private:
    double a, b, c;
public:
    Triangle(double, double, double);
    virtual ~Triangle();
    virtual string figure_info();
    virtual double area();
    virtual double perimeter();
};


#endif // TRIANGLE_HPP
