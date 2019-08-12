//
//  Point.cpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include "Point.hpp"

Point::Point(float a,float b)
{x = a;y = b;}

void Point::setPoint(float a, float b)
{x = a;y = b;}

ostream& operator <<(ostream &output,const Point &p)
{
    output<<"["<<p.x<<","<<p.y<<"]";
    return output;
}
