#include "Shape2D.h"

Shape2D::Shape2D(float cx = 0, float cy = 0)
    : center_x(cx), center_y(cy), area(0.0)
{

}

float Shape2D::getCenter_x()
{
    return center_x;
}

float Shape2D::getCenter_y()
{
    return center_y;
}

float Shape2D::getArea()
{
    return area;
}

void Shape2D::setCenter(float cx = 0, float cy = 0)
{
    center_x = cx;
    center_y = cy;
}

void Shape2D::setArea(float a)
{
    area = a;
}

