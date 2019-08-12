//
//  Circle.hpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Point.hpp"

class Circle:public Point
{
public:
    Circle(float x = 0,float y = 0,float r = 0);
    void setRadius(float);
    float getRadius() const;
    virtual float area() const;
    virtual void shapeName() const {cout<<"Circle:";}
    friend ostream& operator <<(ostream &,const Circle &);
protected:
    float radius;
};

#endif /* Circle_hpp */
