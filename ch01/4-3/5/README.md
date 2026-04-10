#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Sphere {
- Sphere이라는 클래스 정의
  
int radius;
- 정수형 변수 radius 선언
  
public: 
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Sphere();
- 기본 생성자 선언
  
void setRadius(int r) { radius = r; }
- radius 값을 설정하는 함수
  
double getVolume() { return 4.0 / 3.0 * 3.14 * radius * radius * radius; }};
- getVolume 함수 선언 후 다음과 같은 식을 계산하여 반환
  
Sphere::Sphere() {
- 생성자 정의 시작
  
radius = 1;}
- radius 값을 1로 초기화

int main() {
- 메인 함수 시작
  
cout << "생성하고자 하는 구의 개수: ";
- 화면에 다음과 같은 텍스트 출력
  
int a, radius;
- 정수형 변수 a와 radius선언
  
cin >> a;
- a에 값을 입력
  
Sphere* pArray = new Sphere[a];
- Sphere 객체를 a개 만큼 동적 배열로 생성
  
for (int i = 0; i < a; i++) {
- 반복문을 이용해 a번만큼 반복
  
cout << "구" << i + 1 << "의 반지름: ";
- 화면에 다음과 같은 텍스트 출력
  
cin >> radius;
- radius에 값을 입력
pArray[i].setRadius(radius);}
- 입력받은 값을 객체에 저장
  
Sphere* p = pArray;
- pArray 주소를 포인터 p에 저장
  
for (int i = 0; i < a; i++) {
- 반복문을 이용해 a번만큼 반복
  
cout << "구" << i + 1 << "의 부피 " << p->getVolume() << endl;
- 화면에 다음과 같은 텍스트 출력
  
p++;}
- p값 증가
  
delete[] pArray;
- 동적 할당한 배열 메모리 해제
  
return 0;}
- 0을 반환 후 메인 함수 종료
