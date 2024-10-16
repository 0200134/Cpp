#include<iostream>
#include "Dept.cpp"
#include<tchar.h>


int main(int argc, char *argv[])
{

Dept dept(10);
dept.read();

int numPassed = dept.countPass(dept);
std::wcout<<"over 60 student count :"<<numPassed<<std::endl;

return 0;

    
}