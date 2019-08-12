//
//  main.cpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Circle.hpp"
#include "Cylinder.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    Point point(3.2,4.5);
    Circle circle(2.4,1.2,5.6);
    Cylinder cylinder(3.5,6.4,5.2,10.5);
    point.shapeName();
    cout<<point<<endl;
    
    circle.shapeName();
    cout<<circle<<endl;
    
    cylinder.shapeName();
    cout<<cylinder<<endl;
    
    Shape * pt;
    
    pt = &point;
    pt->shapeName();
    cout<<"x = "<<point.getX()<<",y = "<<point.getY()<<"\narea = "<<pt->area()<<"\nvolume = "<<pt->volume()<<"\n\n"<<endl;
    
    pt = &circle;
    pt->shapeName();
    cout<<"x = "<<circle.getX()<<",y = "<<circle.getY()<<"\narea = "<<pt->area()<<"\nvolume = "<<pt->volume()<<"\n\n"<<endl;
    
    pt = &cylinder;
    pt->shapeName();
    cout<<"x = "<<cylinder.getX()<<",y = "<<cylinder.getY()<<"\narea = "<<pt->area()<<"\nvolume = "<<pt->volume()<<"\n\n"<<endl;
    return 0;
}
