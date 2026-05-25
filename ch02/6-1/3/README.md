#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Rectangle {
- Rectangle 클래스 선언
  
int w, h;
- 정수형 변수 w,h 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Rectangle() {
- 생성자 선언
  
w = h = 1;}
- 변수 1의 값을 h에 저장하고 h의 값을 w에 저장해 w,h를 1의 값으로 초기화
  
Rectangle(int w) {
- 정수형 변수 w를 받는 생성자
  
this->w = w;
- 멤버변수 w에 전달받은 값을 저장
  
h = 1;}
- h에 1의 값을 저장
  
Rectangle(int w, int h) {
- 정수형 변수 w,h를 받는 생성자
  
this->w = w;
- 멤버변수 w에 전달받은 값을 저장
  
this->h = h;}
- 멤버변수 h에 전달받은 값을 저장
  
void show() {
- show() 함수 선언
  
cout << "사각형 폭은 " << w << " 높이는 " << h << endl;}};
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
Rectangle rect0;
- 기본 생성자 호출
  
rect0.show();
- show() 함수를 호출하여 객체 정보 출력
  
Rectangle rect1(10);
- 매개변수 1개인 생성자 호출
  
rect1.show();
- show() 함수를 호출하여 객체 정보 출력
  
Rectangle rect2(10, 20);
- 매개변수 2개인 생성자 호출
  
rect2.show();
- show() 함수를 호출하여 객체 정보 출력
  
return 0;}
- 0의 값을 반환함 
