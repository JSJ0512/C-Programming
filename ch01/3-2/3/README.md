`#include <iostream>`
- cout 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`class Sphere {`
- Sphere 이라는 클래스 선언
  
`int rad;`
- 정수형 변수 rad 선언
  
`public:` 
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
`Sphere();`
- 기본 생성자를 선언
  
`Sphere(int a);`
- 매개변수가 있는 생성자를 선언
  
`double getVolume();};`
- 실수형 변수 getVolume을 선언
  
`Sphere::Sphere() : Sphere(1) {}`
- 위임 생성자로 Sphere(int a)생성자에 위임
  
`Sphere::Sphere(int a) : rad(a) {}`
- 멤버 초기화 리스트를 사용하여 a로 rad를 초기화
  
`double Sphere::getVolume() {`
- getVolume() 정의
  
`return (4.0 / 3.0) * 3.14 * (rad * rad * rad);}`
- 다음과 같은 식으로 계산하여 반환
  
`int main() {`
- 메인 함수 시작
  
`Sphere sph1;`
- Sphere 클래스의 객체 sph1 생성
  
`cout << "구의 부피는" << sph1.getVolume() << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`Sphere sph2(3);`
- Sphere 클래스의 객체 sph2 생성
  
`cout << "구의 부피는" << sph2.getVolume() << endl;`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;}`
- 0을 반환 후 메인 함수 종료
