#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Triangle {
- Triangle이라는 클래스 정의
  
int a;
- 정수형 변수 a선언
  
int b;
- 정수형 변수 b선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Triangle() {
- 기본 생성자 선언
  
a = 1, b = 1;
- a와b 값을 1로 초기화
  
cout << "밑변 " << a << "높이 " << b << "인 삼각형 생성" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
Triangle(int m, int h) {
- 매개변수 m,h 생성자 선언
  
a = m, b = h;
- a의 값은 m , b의 값은 h 로 초기화
  
cout << "밑변 " << a << "높이 " << b << "인 삼각형 생성" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
~Triangle() {
- 소멸자 선언
  
cout << "밑변 " << a << "높이 " << b << "인 삼각형 소멸" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
void setTriangle(int m, int h) {
- m과 h 값을 설정하는 함수
  
a = m, b = h;}
- a의 값은 m , b의 값은 h 로 초기화
  
double getArea() {
- 실수형 변수 getARea() 함수 선언
  
return 0.5 * a * b;}};
- 다음과 같은 식을 계산하여 반환
  
int main() {
- 메인 함수 시작
  
Triangle* pArray = new Triangle[3]{
- Triangle 객체를 동적으로 배열로 생성
  
Triangle(1,1),
- 객체를 (1,1)로 생성
  
Triangle(2,2),
- 객체를 (2,2)로 생성
  
Triangle(4,4)};
- 객체를 (4,4)로 생성
  
for (int i = 0; i < 3; i++) {
- 반복문을 이용해 3번 반복
  
cout << "삼각형의 면적은 " << pArray[i].getArea() << endl;}
- 화면에 다음과 같은 텍스트 출력
  
delete[] pArray;
- 동적 할당한 배열 메모리 해제

return 0;}
- 0을 반환 후 메인 함수 종료
