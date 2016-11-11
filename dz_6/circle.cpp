#define _USE_MATH_DEFINES
#include "circle.hpp"
#include <sstream>
#include <cmath>


Circle::Circle(double _r) : r(r)
{
}

string Circle::figure_info() {
    stringstream stream;
    stream << "radius = " << r << endl;
    return stream.str();
}

double Circle::area() {
    return r * r * M_PI;
}

double Circle::perimeter() {
    return 2 * r * M_PI;
}

Circle::~Circle()
{

}
