#include "Dept.hpp"
#include<iostream>
#include<tchar.h>



Dept::~Dept()
{
delete[]scores;
}
Dept::Dept(int size)
{
this->size =size;
scores = new int[size];
}
Dept::Dept(const Dept& dept)
{
 this -> size = dept.size;
 scores = new int[size];
 for(int i=0;i<size;i++)
 {
    scores[i]= dept.scores[i];
 }   
}
int Dept::getSize()const
{
    return this->size;
}
bool Dept::isOver60(int index) const
{
  if(index<0 || index>=size)
  {
    return false;
  }
  return scores[index]>=60;
}
void Dept::read()
{
    std::wcout<<"student scores enter : ";
    for(int i = 0 ;i<size; i++)
    {
        std::cin>>scores[i];
    }

}
 int Dept::countPass(const Dept& dept)
{
    int count = 0;
    for(int i =0; i<dept.getSize();i++)
    {
        if(dept.scores[i]>=60)
        {
            count++;
        }
    }
    return count;

}