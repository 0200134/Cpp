#include "printer.hpp"

class LaserPrint:public Printer{
private:
    int needpages;

public:
    std::string Lsrprinter{"SCX-6x45, samsung-electronics"};
    int availablePage{};
    int availableToner{};
    int printLaser(int needpages);

    LaserPrint();
    ~LaserPrint();
};

int LaserPrint::printLaser(int needpages)
{
int A;
availablePage = LaserPrint::availablePage;
availableToner = LaserPrint::availableToner;

A = print(needpages, availablePage);

if (A != false){
availablePage = A;
availableToner = availableToner - needpages;
}

return availablePage;
};

LaserPrint::LaserPrint(){
}

LaserPrint::~LaserPrint(){    
}