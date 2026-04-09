#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
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
  
radius = r; cout << "생성자 실행 radius = " << radius << endl;}
- radius 값을 r로 저장 후 화면에 다음과 같은 텍스트 출력
  
Circle::~Circle() {
- 소멸자 정의
  
cout << "소멸자 실행 radius = " << radius << endl;}
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
Circle* pArray = new Circle[3];
- Circle 객체를 동적으로 배열로 생성
  
for (int i = 0; i < 3; i++) {
- 반복문을 이용해 3번 반복
  
cout << pArray[i].getArea() << '\n';}
- 화면에 다음과 같은 텍스트 출력
  
delete[] pArray;
- 동적 할당한 배열 메모리 해제
  
return 0;}
- 0을 반환 후 메인 함수 종료

- 문제점
for (int i = 0; i < 3; i++) {
cout << pArray ->getArea() << '\n';
pArray++;
}
에서 pArray[i] 와 (pArray + i) 같은 방식으로 접근하여야 배열의 주소를 잃어버리지 않음 
