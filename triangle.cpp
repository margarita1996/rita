#include "triangle.hpp"

#include <cmath>
#include <sstream>

Triangle::Triangle(double _a, double _b, double _c) : a(_a), b(_b), c(_c)
{
}

string Triangle::figure_info() {

    stringstream stream;
    stream << "a = " << a << "; b = " << b << "; c = " << c  << ";" << endl;
    return stream.str();
}

double Triangle::perimeter() {
    return a + b + c;
}

double Triangle::area() {
    double p = perimeter() / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}



Triangle::~Triangle()
{
}
