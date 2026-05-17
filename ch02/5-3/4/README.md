#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Circle {
- Circle 클래스 선언
  
int radius;
- 정수형 변수 radius 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Circle(int radius) { this->radius = radius; }
- 생성자 선언 후 전달 받은 값은 radius로 초기화
  
Circle& plus(int n) {
- 참조로 반환
  
radius += n;
- n의 값을 radius에 더한 후 저장
  
return *this;}
- 현재 객체를 반환
  
Circle& minus(int n) {
- 참조로 반환
  
radius -= n;
- n의 값을 radius에 뺀 후 저장
  
return *this;}
- 현재 객체를 반환
  
int getRadius() { return radius; }};
- 정수형 getRadius() 함수 선언 radius 값을 반환함
  
int main() {
- 메인 함수 시작
  
Circle a(5);
- 5값을 지닌 Circle a객체 생성
  
a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
- a객체에 +1 , +2 , +3 , -3 , -2 , -1 , -5
  
cout << "객체 a의 반지름은 " << a.getRadius();
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
