#ifndef __LINE_HPP__
#define __LINE_HPP__

#include "Shape.hpp"
#include<iostream>

class Line : public Shape {
public:
    void draw() override {
        std::cout << "Line" << std::endl;
    }
};

#endif 
