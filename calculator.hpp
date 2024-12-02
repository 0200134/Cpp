#ifndef __CALCULATOR_HPP__
#define __CALCULATOR_HPP__

#include<iostream>

/*
이 파일은 calculator.hpp 파일입니다.
이 파일에는 정수 연산(Add, Sub, Div, Mul)클래스와
각각의 클래스 구성 요소들(메소드 및 멤버 변수)이 선언되어 있습니다.
이 클래스들은 각각 impl.cpp에서 최종 정의되며, main.cpp에서 각각의 클래스들의
메소드가 불려집니다(Add a; Sub b; ..이후 a.setValue(int x, int y); 그리고 
a.calculate()).
위에서 setValue(int x, int y) 메소드는 앞서 말한 초기화되지 않은 변수(a, b)에
x와 y의 값을 각각 a와 b의 값에 대입하는 역할을 합니다.
그리고 int calculate()란 메소드는 정수 연산을 하여 setValue(int x, int y)에서 
정의된 a와 b의 값을 연산하는 역할을 합니다.
여기에서 생성자의 역할이 중요합니다.하지만, 이 코드에서는 명시적인 생성자가 
보이지 않습니다. 그렇다면 이 코드를 메인 함수에서 실행할 때에는 어떻게 
a.setValue(int x, int y)라든지 a.calculate() 함수가 어떻게 실행될 수 
있는 것인가요? 그 해답은 바로 이 코드를 해석하여 기계어 코드로 변환하는
컴파일러에 있습니다. 
 C++ 컴파일러는 클래스에 생성자가 하나도 없으면 디폴트 생성자를 집어넣습니다.
따라서 우리가 컴파일 할 때에 아무런 오류가 나지 않는 것이지요.
예를 들어 Add a;로 선언할 때에 a는 Add 클래스의 멤버들을 부를 수 있는 매개변수입니다.
따라서 멤버들을 부를 수 있는 매개변수가 통로가 되어 Add 클래스의 요소들을 부를 수 
있는 것입니다.
*/

class Add{ //클래스 Add 선언
public:
int a, b; //정수 타입 a, b 변수 선언(초기화되지 않은)
void setValue(int x, int y);
int calculate();
};

class Sub{ //클래스 Sub 선언
public:
int a, b;
void setValue(int x, int y);
int calculate();
};

class Mul{ //클래스 Mul 선언
public:
int a, b;
void setValue(int x, int y);
int calculate();
};

class Div{ //클래스 Div 선언
public:
int a, b;
void setValue(int x, int y);
int calculate();
};

#endif 
