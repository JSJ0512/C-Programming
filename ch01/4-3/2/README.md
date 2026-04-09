#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Circle {
- Circle이라는 클래스 정의
  
int radius;
- 정수형 변수 radius 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Circle();
- 기본 생성자 선언
  
Circle(int r);
- 매개변수를 받는 생성자 선언
  
~Circle();
- 소멸자 선언
  
void setRadius(int r) { radius = r; }
- radius 값을 설정하는 함수
  
double getArea() { return 3.14 * radius * radius; }};
- 실수형 변수 getArea() 선언 후 다음과 같은 식을 계산 후 반환 해주는 함수
  
Circle::Circle() {
- 기본 생성자 정의
  
radius = 1; cout << "생성자 실행 radius = " << radius << endl;}
- radius 값을 1로 저장 후 화면에 다음과 같은 텍스트 출력
  
Circle::Circle(int r) {
- 매개변수가 있는 생성자 정의
  
radius = r; cout << "생성자 실행 radius =" << radius << endl;}
- radius 값을 r로 저장 후 화면에 다음과 같은 텍스트 출력
  
Circle::~Circle() {
- 소멸자 정의
  
cout << "소멸자 실행 radius =" << radius << endl;}
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
int radius;
- 정수형 변수 radius 선언
  
while (true) {
- 반복문을 이용해 반복 하도록
  
cout << "정수 반지름 입력(음수이면 종료)>>";
- 화면에 다음과 같은 텍스트 출력
  
cin >> radius;
- 입력을 받아 radius 값에 저장
  
if (radius < 0)break;
- 조건문을 이용해 radius 값이 0보다 작다면 멈춤
  
Circle* p = new Circle(radius);
- Circle 객체를 동적으로 생성
  
cout << "원의 면적:" << p->getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
delete p;}}
- 동적 할당한 배열 메모리 해제

- 문제점 : 동적 할당한 배열 메모리를 해제하지 않아 누수가 발생할 수 있음. 그러므로 delete p; 를 이용해 해제 해줘야함
