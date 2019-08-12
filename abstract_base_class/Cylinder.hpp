//
//  Cylinder.hpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Cylinder_hpp
#define Cylinder_hpp

#include <stdio.h>
#include "Circle.hpp"

class Cylinder:public Circle
{
public:
    Cylinder(float x = 0,float y = 0,float r = 0,float h = 0);
    void setHeight(float);
    virtual float area()const;
    virtual float volume()const;
    virtual void shapeName()const{cout<<"Cylinder:";}
    friend ostream& operator <<(ostream&,const Cylinder&);
protected:
    float height;
};

#endif /* Cylinder_hpp */
