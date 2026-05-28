#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Complex;
- Complex 클래스 선언
  
class ComplexManager {
- ComplexManager 클래스 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Complex ComplexAdd(Complex, Complex);};
- 복소수 2개를 더하는 함수 선언
  
class Complex {
- 복소수 클래스 선언
  
int z, x;
- 정수형 변수 z,x 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Complex(int q = 0, int w = 0) {
- 생성자 선언 후 정수형 변수 q,w 선언 및 0으로 초기화
  
z = q;
- z 값에 q 값을저장
  
x = w;
- x 값에 w 값을 저장
  
cout << "복소수 " << z << " + " << x << "j 생성" << "\n";}
- 화면에 다음과 같은 텍스트 출력
  
void show() {
- show() 함수 선언
  
cout << z << " + " << x << "j";}
- 화면에 다음과 같은 텍스트 출력
  
friend class ComplexManager;};
- ComplexManager 함수를 friend 클래스로
  
Complex ComplexManager::ComplexAdd(Complex a, Complex b) {
- ComplexManager 클래스의 함수를 정의함
  
return Complex(a.z + b.z, a.x + b.x);}
- 복소수를 계산하여 반환함
  
int main() {
- 메인 함수 시작
  
Complex x(2, 3), y(-5, 10), sum;
- 복소수 객체 3개를 생성함
  
ComplexManager man;
- ComplexManager와 같은 man객체 생성
  
sum = man.ComplexAdd(x, y);
- man객체를 이용해 복소수 계산
  
cout << "두 복소수의 합은 ";
- 화면에 다음과 같은 텍스트 출력
  
sum.show();}
- show()함수를 이용해 sum 값 출력
