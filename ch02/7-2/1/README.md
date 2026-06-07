#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Complex {
- Complex 클래스 선언
  
int real,img;
- 정수형 변수 real,img 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Complex(int r = 0, int i = 0) {
- 생성자 선언 후 정수형 변수 r,i 을 선언하여 0으로 초기화
  
real = r;
- r의 값을 real에 저장
  
img = i;}
- i의 값을 img에 저장
  
Complex operator+(Complex a) {
- '+' 연산자 함수 정의
    
Complex tmp;
- tmp 객체 생성
  
tmp.real = this->real + a.real;
- 현재 객체의 real의 값과 a 객체의 real 값을 더하여 tmp 객체 real에 저장
  
tmp.img = this->img + a.img;
- 현재 객체의 img의 값과 a 객체의 img 값을 더하여 tmp 객체 img에 저장
  
return tmp;}
- tmp 객체 값을 반환
  
void show() {
- 출력하는 함수 선언
  
cout << real << "+" << img << endl;}};
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
Complex x(2, 3), y(-5, 10), sum;
- 복소수 객체 3개를 생성함
  
sum = x + y;
- x+y의 값을 sum에 저장
  
cout << "두 복소수의 합은 ";
- 화면에 다음과 같은 텍스트 출력
  
sum.show();
- sum의 값을 출력
  
return 0;}
- 0의 값을 반환하여 프로그램 종료
