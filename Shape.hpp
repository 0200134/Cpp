#ifndef __SHAPE_HPP__
#define __SHAPE_HPP__

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}
};

#endif 
