//
// Created by Zenos on 2026-10-18.
//
#include "circle.h"

// 初始化类的静态成员变量
int Circle::number = 0 ;


Circle::Circle()
{
    number++;
    radius = 1.0;
    std::cout << "Construction default number : " << number <<std::endl;
    std::cout << "Construction radius : " << radius <<std::endl;

}

Circle::Circle(double r)
{
    number++;
    set_radius(r) ;
    std::cout << "Construction default number : " << number <<std::endl;
    std::cout << "Construction radius : " << radius <<std::endl;
}

Circle::~Circle()
{
    number--;
    std::cout << "Destruction default number : " << number <<std::endl;
    std::cout << "Destruction radius : " << radius <<std::endl;
}


double Circle::get_radius()
{
    return radius;
}

void Circle::set_radius(double radius)
{
    this->radius = radius;
}


double Circle::area()
{
    return PI * get_radius() * get_radius() ;
}