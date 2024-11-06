#include "printer.hpp"
#include "Inkjetprint.cpp"
#include "Laserprint.cpp"

char yorno(char c){
if(c=='y'){
}

else if (c=='n'){
}

return c;
}

int main(){

char c;
Inkjetprint ikjp;
LaserPrint Lsrp;
int Pages;
int Printernum;

///종이, 잉크, 토너 입력
ikjp.availablePage = 5;
ikjp.availableInk = 10;
Lsrp.availablePage = 3;
Lsrp.availableToner = 20;

std::cout<<"현재 작동중인 2대의 프린터는 아래와 같다"<<std::endl;
std::cout<<"잉크젯 : "<<ikjp.IkjPritner<<" , "<<"남은 종이: "<<ikjp.availablePage<<" , 남은 잉크: "<<ikjp.availableInk<<std::endl;
std::cout<<"레이저 : "<<Lsrp.Lsrprinter<<" , "<<"남은 종이:  "<<Lsrp.availablePage<<" , 남은 토너: "<<Lsrp.availableToner<<std::endl;

while(true){

std::cout << "\n프린터(1: 잉크젯, 2:레이저)와 매수 입력>>";
std::cin >> Printernum >> Pages;

if (Printernum == 1){
ikjp.printInkJet(Pages);
}

else if(Printernum==2){
Lsrp.printLaser(Pages);
}

std::cout<<ikjp.IkjPritner<<" , "<<"남은 종이: "<<ikjp.availablePage<<" , 남은 잉크: "<<ikjp.availableInk<<std::endl;
std::cout<<Lsrp.Lsrprinter<<" , "<<"남은 종이:  "<<Lsrp.availablePage<<" , 남은 토너: "<<Lsrp.availableToner<<std::endl;

std::cout<<"계속 프린트 하시겠습니까(y/n)>>";
std::cin>>c;

if (yorno(c)=='y'){
continue;
}

else if(yorno(c)=='n'){
break;
}

}
}