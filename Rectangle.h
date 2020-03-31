#pragma once

#include "Shape2D.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Shape2D
{
public:
    Rectangle();
    Rectangle(float cx, float cy, float w, float h);

    float getWidth();
    float getHeight();
    void setWidth(float width);
    void setHeight(float height);
    void compArea();

private:
    float width;
    float height;
};


#endif
