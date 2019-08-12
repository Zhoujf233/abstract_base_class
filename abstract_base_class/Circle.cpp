//
//  Circle.cpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include "Point.hpp"
#include "Circle.hpp"

Circle::Circle(float x,float y,float r):Point(x,y),radius(r){}

void Circle::setRadius(float r){radius = r;}

float Circle::getRadius() const{return radius;}

float Circle::area() const{return 3.14159*radius*radius;}

ostream& operator <<(ostream &output,const Circle &c)
{
    output<<"["<<c.x<<","<<c.y<<"],r = "<<c.radius;
    return output;
}

