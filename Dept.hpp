#ifndef __DEPT_HPP__
#define __DEPT_HPP__

class Dept
{
    private:
    int size;
    int *scores;
    public:
    Dept(int size);
    Dept(const Dept& dept);
    ~Dept();

    int getSize()const;
    void read();
    bool isOver60(int index) const;
     int countPass(const Dept& dept);
};

#endif 


