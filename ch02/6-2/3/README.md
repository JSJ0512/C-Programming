#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Point3D {
- Point3D 클래스 선언
  
int x, y, z;
- 정수형 변수 x,y,z 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Point3D(int x = 0, int y = 0, int z = 0) {
- 정수형 변수 x,y,z에 0의 값을 저장한 생성자 선언
  
this->x = x;
- 멤버변수 x에 전달받은 값을 저장
  
this->y = y;
- 멤버변수 y에 전달받은 값을 저장
  
this->z = z;}
- 멤버변수 z에 전달받은 값을 저장
  
void show() {
- show() 함수 선언
  
cout << "3차원 점의 좌표는 ("<< x << "," << y << "," << z << ")" << endl;}};
- 화면에 다음과 같은 텍스트 출력
  
int main() { 
- 메인 함수 시작
  
Point3D p0;
- 기본 생성자 호출
  
p0.show(); 
- show() 함수를 호출하여 객체 정보 출력
  
Point3D p1(1); 
- 매개변수 1개인 생성자 호출
  
p1.show(); 
- show() 함수를 호출하여 객체 정보 출력
  
Point3D p2(1, 2); 
- 매개변수 2개인 생성자 호출
  
p2.show(); 
- show() 함수를 호출하여 객체 정보 출력
  
Point3D p3(1, 2, 3); 
- 매개변수 3개인 생성자 호출
  
p3.show(); 
- show() 함수를 호출하여 객체 정보 출력
  
return 0; }
- 0의 값을 반환함
