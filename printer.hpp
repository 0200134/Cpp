#ifndef __PRINTER_H__
#define __PRINTER_H__

#include<iostream>
#include<string>

class Printer;
class Printer{
private: 
    int needpages;
    int leftpages;

protected:
    std::string model{};
    std::string manufacture{};
    unsigned int printedCount{};
    unsigned int availableCount{};
    friend int print(int needpages, int leftpages);

public:
    Printer();
    ~Printer();
};

int print(int needpages, int leftpages){

if (needpages > leftpages){
std::cout << "용지가 부족하여 프린트할 수 없습니다." << std::endl;
return false;
}

else{
std::cout<<"프린트하였습니다."<<std::endl;
return leftpages - needpages;
}

}

Printer::Printer(){
}

Printer::~Printer(){
}

#endif 
