`#include <iostream>`
- cout 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`class Rectangle {`
- Rectangle 이라는 클래스 선언
  
`public:`
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
`int x = 1;`
- 정수형 변수 x 선언 후 1값을 저장
  
`int y = 2;`
- 정수형 변수 y 선언 후 2값을 저장
  
`int width = 3;`
- 정수형 변수 width 선언 후 3값을 저장
  
`int height = 4;`
- 정수형 변수 height 선언 후 4값을 저장
  
`int getArea();`
- 정수형 변수 getArea() 선언
  
`int getPerimeter();`
- 정수형 변수 getPerimeter() 선언
  
`void getDown();};`
- 정수형 변수 getDown() 선언
  
`int Rectangle::getArea() {`
- Rectangle 클래스에 속한 getArea를 클래스 밖에서 정
- 
`return width * height;}`
- 다음과 같은 식을 계산하여 반환
  
`int Rectangle::getPerimeter() {`
- Rectangle 클래스에 속한 getPerimeter를 클래스 밖에서 정의
  
`return 2 * (width + height);}`
- 다음과 같은 식을 계산하여 반환
  
`void Rectangle::getDown() {`
- Rectangle 클래스에 속한 getDown를 클래스 밖에서 정의 하지만 반환 값이 없음
  
`int a = x + width;`
- 정수형 변수 a에 x + width 값을 저장
  
`int b = y + height;`
- 정수형 변수 b에 y + height 값을 저장
  
`cout << "사각형의 우측하단의 좌표는 (" << a << ", " << b << ")" << endl;}`
- 화면에 다음과 같은 텍스트 출력
  
`int main() {`
- 메인 함수 시작
  
`Rectangle rect;`
- Rectangle 클래스의 객체 rect 생성
  
`cout << "사각형의 면적은 " << rect.getArea() << endl;`
- 객체 rect의 getArea()를 호출하여 계산된 값을 출력
`cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;`
- 객체 rect의 getPerimeter()를 호출하여 계산된 값을 출력
`rect.getDown();`
- 객체 rect의 getDown()을 호출
`return 0;}`
- 0을 반환 후 메인 함수 종료
