#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Triangle {
- Triangle 이라는 클래스 선언
  
int width;
- 정수형 변수 width 선언
  
int height;
- 정수형 변수 height 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Triangle();
- 기본 생성자 선언
  
Triangle(int w, int h);
- 매개변수를 받는 생성자 w,h 선언
  
~Triangle();
- 소멸자 선언
  
double getArea();};
- 실수형 변수 getArea()선언
  
Triangle::Triangle() : Triangle(1, 1) {}
- 타겟 생성자를 호출 후에 1 ,1 매개변수로 변경
  
Triangle::Triangle(int w, int h) : width(w), height(h) {
- 멤버 초기화 리스트로 width, height 를 w,h값으로 초기화
  
cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
Triangle::~Triangle() {
- 소멸자 정의 시작
  
cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
double Triangle::getArea() {
- getArea() 정의
  
return 0.5 / width * height;}
- 다음과 같은 식을 계산하여 값을 반환함
  
int main() {
- 메인 함수 시작
  
Triangle tri1;
- Triangle 클래스의 객체 tri1 생성
  
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
Triangle tri2(2, 4);
- Triangle 클래스의 객체 tri2 생성 후 2,4 값을 저장
  
cout << "삼각형의 면적은" << tri2.getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
