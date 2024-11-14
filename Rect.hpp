#ifndef __RECT_HPP__
#define __RECT_HPP__

#include"Shape.hpp"
#include<iostream>

class Rect : public Shape {
public:
    void draw() override {
        std::cout << "Rect" << std::endl;
    }
};


#endif 
