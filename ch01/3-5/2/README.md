#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Triangle {
- Triangle 이라는 클래스 선언
  
private :
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int width;
- 정수형 width 변수 선언
  
int height;
- 정수형 height 변수 선언
  
public :
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Triangle() { width = 1, height = 1; }
- 타켓 생성자 Triangle 객체의 width와height를 1로 초기화함
  
Triangle(int w, int h) { width = w, height = h; }
- 매개변수 생성자 전달 받은 값으로 초기화함
  
int setWidth(int a) { return width = a; }
- 정수형 변수 setWidth를 생성 후 width 값을 a로 설정하고 그 값을 반환
  
int setHeight(int b) { return height = b; }
- 정수형 변수 setHeight를 생성 후 height 값을 b로 설정하고 그 값을 반환
  
double getArea() {
- getArea() 함수 시작
  
return 0.5 * (width * height);}};
- 다음과 같은 식을 계산하여 반환함
  
int main() {
- 메인 함수 시작
  
Triangle tri;
- Triangle 클래스의 객체 tri 생성
  
tri.setWidth(3);
- tri 객체의 setWidth 값을 3로 저장
  
tri.setHeight(5);
- tri 객체의 setHeight 값을 5로 저장
  
cout << "삼각형의 면적은 " << tri.getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
