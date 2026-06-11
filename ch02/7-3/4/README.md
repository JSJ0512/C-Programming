#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Power {
- Power 클래스 선언
  
int kick, punch;
- 정수형 변수 kick,punch 선언
  
public: 
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Power(int k = 0, int p = 0) {
- 생성자 선언 후 정수형 변수 kick,punch 를 선언하여 0으로 초기화
  
kick = k;
- kick에 k값을 저장
  
punch = p;}
- punch에 p값을 저장
  
void show() {
- 출력 함수 선언
  
cout << "kick=" << kick << ",punch=" << punch << endl;}
- 화면에 다음과 같은 텍스트 출력
  
friend Power operator*(Power a, int n);
- friend를 이용해 * 연산자 함수 선언
  
friend Power operator*(int n, Power a);
- friend를 이용해 * 연산자 함수 선언
  
friend Power operator+(Power a, Power b);};
- friend를 이용해 + 연산자 함수 선언
  
Power operator*(Power a, int n) {
- * 연산자 함수 정의
    
return a;}
- a값을 반환함
  
Power operator*(int n, Power a) {
- * 연산자 함수 정의
    
return Power(a.kick * n, a.punch * n);}
- a.kick*n과 a.punch*n 의 계산 값을 반환함
  
Power operator+(Power a, Power b) {
- * 연산자 함수 정의
    
return Power(a.kick + b.kick, a.punch + b.punch);}
- a.kick + b.kick 과 a.punch + b.punch 의 계산 값을 반환함
  
int main() {
- 메인 함수 시작
  
Power a(1, 1), b(2, 2), c;
- a,b,c 객체 생성
  
c.show();
- c값을 출력함
  
c = a * 2 + 2 * b;
- c에 a*2+2*b 계산 값을 저장
  
c.show();
- c값을 출력함
  
return 0;} 
- 0의 값을 반환하여 프로그램 종료
