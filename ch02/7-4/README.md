#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Complex {
- Complex 클래스 선언
  
int real, img;
- 정수형 변수 real,img 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록함
  
Complex(int r = 0, int i = 0) {
- 생성자 선언 후 정수형 변수 r,i 을 선언하여 0으로 초기화
  
real = r;
- r의 값을 real에 저장
  
img = i;}
- i의 값을 img에 저장
  
friend istream& operator>>(istream& a, Complex& b);
- friend 함수를 이용해 >> 연산자 선언
  
friend ostream& operator<<(ostream& c, Complex& b);};
- friend 함수를 이용해 << 연산자 선언
  
istream& operator>>(istream& a, Complex& b) {
- '>>' 연산자 함수 정의
  
cout << "실수부:";
- 화면에 다음과 같은 텍스트 출력
  
a >> b.real;
- a에 b.real 값을 입력받음
  
cout << "허수부:";
- 화면에 다음과 같은 텍스트 출력
  
a >> b.img;
- a에 b.img 값을 입력받음
  
return a;}
- a 값을 반환함
  
ostream& operator<<(ostream& c, Complex& b) {
- '<<' 연산자 함수 정의
  
c << b.real << b.img << "j" << endl;
- 화면에 다음과 같은 텍스트 출력
  
return c;}
- 출력을 반환함
  
int main() {
- 메인 함수 시작
  
Complex x, y;
- 객체 x,y 생성
  
cin >> x >> y;
- x,y에 값을 입력
  
cout << x << y;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0의 값을 반환하여 프로그램 종료
  
