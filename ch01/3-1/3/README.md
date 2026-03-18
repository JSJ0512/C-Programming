`#include <iostream>`
- cout 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`class Sphere { `
- Sphere 이라는 클래스 선언
  
`public:`
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
`double rad = 2;`
- 실수형 변수 rad를 선언 후 2의 값을 저장
  
`double getNum1();`
- 실수형 변수 getNum1()을 선언
  
`double getNum2();};`
- 실수형 변수 getNum2()을 선언
  
`double Sphere::getNum1() {`
- Sphere 클래스에 속한 getNum1()를 클래스 밖에서 정의
  
`return (4.0 / 3.0) * 3.14 * rad * rad * rad;}`
- 다음과 같은 식을 계산하여 반환
  
`double Sphere::getNum2() {`
- Sphere 클래스에 속한 getNum2()를 클래스 밖에서 정의
  
`return 4 * 3.14 * rad * rad;}`
- 다음과 같은 식을 계산하여 반환
  
`int main() {`
- 메인 함수 시작
  
`Sphere Sph;`
- Sphere 클래스의 객체 Sph 생성
  
`cout << "구의 부피는 " << Sph.getNum1() << endl;`
- 객체 Sph의 getNum1()를 호출하여 계산된 값을 출력
  
`cout << "구의 표면적은 " << Sph.getNum2() << endl;}`
- 객체 Sph의 getNum2()를 호출하여 계산된 값을 출력
  
`return 0;}`
- 0을 반환 후 메인 함수 종료
