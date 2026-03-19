`#include <iostream>`
- cout 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`class Rectangle {`
- Rectangle 이라는 클래스 선언
  
`public:`
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
`int width,height,x,y;`
- 정수형 변수 width, height, x, y 선언
  
`Rectangle();`
- 기본 생성자 선언
  
`Rectangle(int a, int b);`
- 정수형 변수 a,b 를 매개변수로 하는 생성자 선언
  
`Rectangle(int a, int b, int c, int d);`
- 정수형 변수 a,b,c,d 를 매개변수로 하는 생성자 선언
  
`int getArea();`
- 정수형 변수 getArea() 선언
  
`int getPerimeter();`
- 정수형 변수 getPerimeter() 선언
  
`void getDown();};`
- 반환값 없는 getDown() 선언
  
`Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}`
- RRectangle() 위임 생성자에 Ractangle(int a, int b,int c,int d) 위임생성자를 위임
  
`Rectangle::Rectangle(int a, int b) : Rectangle(a, b, 1, 1) {}`
- Rectangle() 위임 생성자에 a,b 값을 받고 c,d는 1의 값으로 Ractangle(int a, int b,int c,int d) 위임생성자를 위임 및 초기화
  
`Rectangle::Rectangle(int a, int b, int c, int d) : x(a), y(b), width(c), height(d) {}`
- 모든 멤버를 초기화 리스트로 초기화
  
`int Rectangle::getArea() {`
- getArea() 정의
  
`return width * height;}`
- width * height 값을 반환
  
`int Rectangle::getPerimeter() {`
- getPerimeter() 정의
  
`return (height * 2)+(width * 2);}`
- (height * 2)+(width * 2) 값을 반환
  
`void Rectangle::getDown() {`
- getdown()을 선언
  
`y = y - height;`
- y에 y - height 값을 저장
  
`x = x + width;}`
- x에 x + width 값을 저장
  
`int main() {`
- 메인 함수 시작
  
`Rectangle rect1;`
- Rectangle 클래스의 객체 rect1 생성
  
`Rectangle rect2(3, 5);`
- Rectangle 클래스의 객체 rect2 생성 후 3과 5로 초기화
  
`Rectangle rect3(3, 5, 2, 4);`
- Rectangle 클래스의 객체 rect3 생성 후 3,5,2,4로 초기화
  
`rect3.getDown();`
- rect3 객체의 getdown() 호츨
  
`cout << "rect1의 면적은 : " << rect1.getArea() << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`cout << "rect2의 둘레는 : " << rect2.getPerimeter() << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`cout << "rect3의 우측하단의 좌표는 : (" << rect3.x << " , " << rect3.y << ")" << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;}`
- 0을 반환 후 메인 함수 종료
