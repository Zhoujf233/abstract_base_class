//
//  Cylinder.cpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include "Cylinder.hpp"
#include "Circle.hpp"

Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r),height(h){}

void Cylinder::setHeight(float h){height = h;}

float Cylinder::area() const {return 2*Circle::area()+2*3.14159*radius*height;}

float Cylinder::volume() const {return Circle::area()*height;}

ostream& operator <<(ostream &output,const Cylinder &cy)
{
    output<<"["<<cy.x<<","<<cy.y<<"],r = "<<cy.radius<<",h = "<<cy.height<<endl;
    return output;
}

