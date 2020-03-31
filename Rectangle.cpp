#include "Rectangle.h"

Rectangle::Rectangle()
    : Shape2D(0, 0), width(0), height(0)
{

}

Rectangle::Rectangle(float cx, float cy, float w, float h)
    : Shape2D(cx, cy), width(w), height(h)
{

}

//Provide the implementation of the member functions of the Rectangle class below
float Rectangle::getWidth()
{
    return width;
}

float Rectangle::getHeight()
{
    return height;
}

void Rectangle::setWidth(float width)
{
    this->width = width;
}

void Rectangle::setHeight(float height)
{
    this->height = height;
}

//A public function to compute and the area of a rectangle and set the area to the variable area inherited from Shape2D
void Rectangle::compArea()
{
    setArea(width * height);
}