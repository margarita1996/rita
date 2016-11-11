#include<iostream>

#include "flatfigure.hpp"
#include"circle.hpp"
#include"triangle.hpp"

int main(void) {
    FlatFigure* array[2];
    array[0] = new Circle(3);
    array[1] = new Triangle(3,4,5);

    for (auto f : array) {
        cout << "----------" << endl;
        cout << f->figure_info();
        cout << "p = " << f->perimeter() << endl;
        cout << "s = " << f->area() << endl;
        delete f;
    }
    return 0;
}
