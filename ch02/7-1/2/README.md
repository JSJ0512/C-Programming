#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Complex {
- Complex 클래스 선언
  
int z, x;
- 정수형 변수 z,x 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Complex(int q = 0, int w = 0) {
- 생성자 선언 후 정수형 변수 q,w 선언 및 0으로 초기화
  
z = q;
- z값에 q값을저장

x = w;
- x값에 w값을 저장
  
cout << "복소수 " << z << " + " << x << "j 생성" << "\n";}
- 화면에 다음과 같은 텍스트 출력
  
void show() {
- show() 함수 선언
  
cout << z << " + " << x << "j";}
- 화면에 다음과 같은 텍스트 출력
  
friend Complex ComplexAdd(Complex, Complex);};
- ComplexAdd 함수를 friend 함수로 선언해 내부 변수 z,x에 접근 가능해짐
  
Complex ComplexAdd(Complex a, Complex b) {
- 복소수 a,b 두개를 받는 함수
  
return Complex(a.z + b.z, a.x + b.x);}
- 복소수를 계산하여 반환함
  
int main() {
- 메인 함수 시작
  
Complex x(2, 3), y(-5, 10), sum;
- 복소수 객체 3개를 생성함
  
sum = ComplexAdd(x, y);
- sum에 x,y를 더한 결과를 저장함
  
cout << "두 복소수의 합은 ";
- 화면에 다음과 같은 텍스트 출력
  
sum.show();}
- show()함수를 이용해 sum 값 출력
