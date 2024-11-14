#ifndef __CIRCLE_HPP__
#define __CIRCLE_HPP__

#include"Shape.hpp"
#include<iostream>

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Circle" << std::endl;
    }
};


#endif 
