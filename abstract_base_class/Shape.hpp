//
//  Shape.hpp
//  abstract_base_class
//
//  Created by JF Zhou on 2019/8/12.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Shape_h
#define Shape_h

class Shape
{
public:
    virtual float area() const {return 0.0;}
    virtual float volume() const {return 0.0;}
    virtual void shapeName() const = 0;
};


#endif /* Shape_h */
