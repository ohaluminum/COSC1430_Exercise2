#pragma once

#ifndef SHAPE2D_H
#define SHAPE2D_H

class Shape2D
{
public:
    Shape2D(float cx = 0, float cy = 0);
    float getCenter_x();
    float getCenter_y();
    float getArea();
    void setCenter(float cx, float cy);
    void setArea(float a);

private:
    float center_x;
    float center_y;
    float area;
};

#endif
