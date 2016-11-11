#ifndef FLATFIGURE_HPP
#define FLATFIGURE_HPP

#include <string>
using namespace std;

class FlatFigure
{
public:
    int test = 13;
    FlatFigure() {}
    virtual string figure_info() = 0; // { return string("undefined\n") };
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~FlatFigure() {}
};


#endif // FLATFIGURE_HPP
