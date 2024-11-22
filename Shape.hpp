#ifndef __SHAPE_HPP__
#define __SHAPE_HPP__

#include<vector>
#include<iostream>
class Shape{
protected:
    virtual void draw()=0;
public:
    void paint();

};

#endif 
