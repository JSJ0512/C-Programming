#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Complex {
- Complex 클래스 선언
  
int real, img;
- 정수형 변수 real,img 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 
- 
Complex(int r = 0, int i = 0) {
- 생성자 선언 후 정수형 변수 r,i 을 선언하여 0으로 초기화
  
real = r;
- r의 값을 real에 저장
  
img = i;}
- i의 값을 img에 저장
  
Complex operator-(int a) {
- '-' 연산자 함수 정의
  
return Complex(real - a, img - a);}
- real - a, img - a 값을 계산하는 Complex 객체 생성 후 반환
  
void show() {
- 출력하는 함수 선언
  
cout << real << "+" << img << "j" << endl;}};
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
Complex a(3, 5), b;
- 복소수 객체 2개를 생성함
  
a.show();
- a 객체를 출력
  
b.show();
- b 객체를 출력
  
b = a - 2;
- a - 2의 값을 b에 저장
  
a.show();
- a 객체를 출력
  
b.show();
- b 객체를 출력
  
return 0;}
- 0의 값을 반환하여 프로그램 종료
