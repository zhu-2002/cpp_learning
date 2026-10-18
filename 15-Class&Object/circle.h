//
// Created by Zenos on 2026-10-18.
//

#ifndef CPP_LEARNING_CIRCLE_H
#define CPP_LEARNING_CIRCLE_H

#include <iostream>
#include "constants.h"

class Circle
{
public:
    static int number;

    Circle();
    Circle(double r);
    ~Circle();

    double get_radius();
    void set_radius(double radius);


    double area();

private:
    double radius{0.0};
};


#endif //CPP_LEARNING_CIRCLE_H
