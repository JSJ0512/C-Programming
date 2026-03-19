`#include <iostream>`
- cout 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`class Triangle {`
- Triangle 이라는 클래스 선언
  
`int down, height;`
- 정수형 변수 down 과 height 선언
  
`public:`
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
`Triangle() : Triangle(1, 1) {}`
- Triangle() 위임 생성자에 Triangle(int a, int b) 위임생성자를 위임함
  
`Triangle(int a, int b) : down(a), height(b) {}`
- 멤버 변수들을 초기화 리스트로 초기화함
  
`double getArea() { return 0.5 * down * height; }};`
- 실수형 변수 getArea()를 선언 후 다음과 같은 식으로 계산
  
`int main() {`
- 메인 함수 시작
  
`Triangle tri1;`
- Triangle 클래스의 객체 tri1 생성
  
`cout << "삼각형의 면적은 " << tri1.getArea() << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`Triangle tri2(2, 4);`
- Triangle 클래스의 객체 tri2 생성 후 2와 4의 값을 저장함
  
`cout << "삼각형의 면적은 " << tri2.getArea() << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;}`
- 0을 반환 후 메인 함수 종료
