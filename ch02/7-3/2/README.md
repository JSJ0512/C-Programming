#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일

using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Complex {
- Complex 클래스 선언
  
int real, img;
- 정수형 변수 real,img 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Complex(int r = 0, int i = 0) {
- 생성자 선언 후 정수형 변수 r,i 을 선언하여 0으로 초기화
  
real = r;
- r의 값을 real에 저장
  
img = i;
- i의 값을 img에 저장
  
cout << "복소수 " << real << img << "j 생성" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
void show() {
- 출력 함수 선언
  
cout << real << img << "j" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
friend Complex& operator++(Complex& a);
- friend를 이용해 전위 증가 연산자 ++ 선언
  
friend Complex operator--(Complex& a, int);};
- friend를 이용해 후위 감소 연산자 -- 선언
  
Complex& operator++(Complex& a) {
- 전위 증가 연산자 ++ 정의
  
a.real++;
- a객체의 real 값을 1증가시킴
  
a.img++;
- a객체의 img 값을 1감소시킴
  
return a;}
- a를 반환함
  
Complex operator--(Complex& a, int) {
- 후위 감소 연산자 -- 정의
  
Complex tmp = a;
- tmp 객체에 a값을 저장
  
a.real--;
- a객체의 real 값을 1감소시킴
  
a.img-=2;
- a객체의 img 값을 2감소 시킨 후 img에 저장
  
return tmp;}
- tmp 값을 반환함
  
int main() {
- 메인 함수 시작
  
Complex x(2, -3);
- x 객체 생성
  
++x;
- 전위 증가 연산
  
cout << "증가결과";
- 화면에 다음과 같은 텍스트 출력
  
x.show();
- x 값을 출력함
  
x--;
- 후위 감소 연산
  
cout << "감소결과";
- 화면에 다음과 같은 텍스트 출력
  
x.show();
- x 값을 출력함
  
return 0;}
- 0의 값을 반환하여 프로그램 종료
