//
//  Point.hpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>
#include "Shape.hpp"
using namespace std;

class Point:public Shape
{
public:
    Point(float x = 0,float y = 0);
    void setPoint(float,float);
    float getX() const {return x;}
    float getY() const {return y;}
    virtual void shapeName() const {cout<<"Point:";}
    friend ostream& operator <<(ostream&,const Point&);
protected:
    float x,y;
};



#endif /* Point_hpp */
