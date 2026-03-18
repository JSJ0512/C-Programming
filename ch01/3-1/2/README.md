`#include <iostream>`
- cout 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`class Triangle {`
- Triangle 이라는 클래스 선언
  
`public:`
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
`int a;`
- 정수형 변수 a선언
  
`int b;`
- 정수형 변수 b선언
  
`int getResult();};`
- 정수형 변수 getResult선언
  
`int Triangle::getResult() {`
- Triangle 클래스에 속한 getResult를 클래스 밖에서 정의
  
`return 0.5 * a * b;}`
- 다음과 같은 식을 계산하여 반환
  
`int main() {`
- 메인 함수 시작
  
`Triangle tri;`
- Triangle 클래스의 객체 tri 생성
  
`tri.a = 6;`
- 객체 tri의 a에 6을 저장
  
`tri.b = 4;`
- 객체 tri의 b에 4를 저장
  
`cout << "삼각형의 면적은 " << tri.getResult() << endl;`
- 객체 tri의 getResult()를 호출하여 계산된 값을 출력
  
`return 0;}`
- 0을 반환 후 메인 함수 종료
