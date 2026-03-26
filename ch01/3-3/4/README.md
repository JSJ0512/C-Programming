#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Sphere {
- Sphere 이라는 클래스 선언
  
int radius;
- 정수형 변수 radius 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Sphere();
- 기본 생성자 선언
  
Sphere(int r);
- 매개변수를 받는 생성자 선언
  
~Sphere();
- 소멸자 선언
  
double getVolume();};
- 실수형 변수 getVolume() 선언
  
Sphere::Sphere() : radius(1) {
- 멤버 초기화 리스트로 radius를 1로 초기화
  
cout << "반지름 " << radius << "인 구 생성" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
Sphere::Sphere(int r) : radius(r) {
- 매개변수 생성자 정의 후 radius를 전달받은 값으로 초기화
  
cout << "반지름 " << radius << "인 구 생성" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
Sphere::~Sphere() {
- 소멸자 정의 시작
  
cout << "반지름 " << radius << "인 구 소멸" << endl;}
- 화면에 다음과 같은 텍스트 출력
  
double Sphere::getVolume() {
- getVolume() 정의
  
return (4.0 / 3.0) * 3.14 * radius * radius * radius;}
- 다음과 같은 식을 계산하여 값을 반환함
  
int main() {
- 메인 함수 시작
  
Sphere sp1;
- Sphere 클래스의 객체 sp1 생성
  
cout << "구의 부피는 " << sp1.getVolume() << endl;
- 화면에 다음과 같은 텍스트 출력
  
Sphere sp2(3);
- Sphere 클래스의 객체 sp2 생성 후 3의 값을 저장
  
cout << "구의 부피는 " << sp2.getVolume() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
