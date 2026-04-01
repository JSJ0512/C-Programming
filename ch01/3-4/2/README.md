#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Circle {
- Circle 이라는 클래스 선언
  
private:
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int radius;
- 정수형 변수 radius 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Circle();
- 기본 생성자 선언
  
void setRadius(int r);
- setter 함수 선언
  
int getRadius();};
- 정수형 변수 getRadius();
  
Circle::Circle() : radius(1) {}
- 멤버 초기화 리스트로 radius를 1로 초기화
  
void Circle::setRadius(int r) {
- setter 함수 정의 시작
  
radius = r;}
- radius 값을 전달받은 r로 변경함
  
int Circle::getRadius() {
- getter 함수 정의 시작
  
return radius;}
- 0을 반환 후 메인 함수 종료

int main() {
- 메인 함수 시작

Circle waffle;
- Circle 클래스의 객체 waffle 생성
  
waffle.setRadius(5);
- waffle 객체의 setRadius 값을 5로 저장

cout << "원의반지름은 " << waffle.getRadius() << endl;
- 화면에 다음과 같은 텍스트 출력

return 0;}
- 0을 반환 후 메인 함수 종료
