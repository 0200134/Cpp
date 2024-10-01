#include "calculator.cpp"
/*이 파일은 main.cpp입니다. 
이 파일에서는 Add 클래스와 Sub 클래스 , Mul 클래스, Div 클래스를 호출하고 있습니다.
그리고 while(true) 구문을 통하여 main 함수 내의 기능들을 반복하고 있습니다.
여기에서 주목할 것은 char c; 선언입니다.
문자 변수 c는 아직 초기화 되지 않았습니다(while 구문 이전에).
만약 변수 'c'가 정수 산술연산을 나타내는 기호이면 클래스 Add 혹은 Sub 혹은 Mul 
혹은 Div의 setValue(int x, int y)를 부르고 해당 클래스의 멤버 변수(a,b)에 우리가
입력한 초기값(x, y)을 할당합니다.
이후 해당 클래스의 calculate()를 부른 뒤 정수 연산을 한 후에 결과값을 리턴합니다.
이 메인 함수는 Ctrl+C를 하기 전까지는 멈추지 않습니다. 

다음은 실행 예시 입니다.
enter the two integers and operators : 9 8 -
1
enter the two integers and operators : 9 7 (
unknown operator
...
이런 식으로 반복이 됩니다.




*/
int main(int argc, char *argv[]){
Add a;
Sub s;
Mul m;
Div d;
char c;
int x;
int y;
while(true){
std::cout<<"enter the two integers and operators : ";

std::cin>>x>>y>>c;


if(c=='+')
{
    a.setValue(x,y);
    std::cout<<a.calculate()<<std::endl;
}
if(c=='*'){
    m.setValue(x,y);
    std::cout<<m.calculate()<<std::endl;
}
if(c=='/')
{
    d.setValue(x,y);
    std::cout<<d.calculate()<<std::endl;

}
if(c=='-')
{
    s.setValue(x,y);
    std::cout<<s.calculate()<<std::endl;
}else{
    std::cout<<"unknown operator"<<std::endl;
    continue;
}
}
}