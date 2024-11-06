#include "printer.hpp"

class Inkjetprint:public Printer{
private:
    int needpages;

public:
    std::string IkjPritner{"Officenet V40, HP"};
    int availablePage{};
    int availableInk{};
    int printInkJet(int needpages);

    Inkjetprint();
    ~Inkjetprint();
};

int Inkjetprint::printInkJet(int needpages)
{
int A;
availablePage = Inkjetprint::availablePage;
availableInk = Inkjetprint::availableInk;

A = print(needpages, availablePage);

if (A != false){
availablePage = A;
availableInk = availableInk - needpages;
}

return availablePage;
};

Inkjetprint::Inkjetprint(){
}

Inkjetprint::~Inkjetprint(){
}