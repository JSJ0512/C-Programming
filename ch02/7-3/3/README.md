#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Power {
- Power 클래스 선언
  
int kick;
- 정수형 변수 kick 선언
  
int punch;
- 정수형 변수 punch 선언

public: 
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Power(int kick = 0, int punch = 0) {
- 생성자 선언 후 정수형 변수 kick,punch 를 선언하여 0으로 초기화
  
this->kick = kick;
- 매개변수 값을 맴버변수에 저장
  
this->punch = punch;}
- 매개변수 값을 맴버변수에 저장
  
void show() {
- 출력 함수 선언
  
cout << "kick=" << kick << ",punch=" << punch << endl;}
- 화면에 다음과 같은 텍스트 출력
  
friend Power operator*(int n, Power z);};
- friend를 이용해 * 연산자 함수 선언
  
Power operator*(int n, Power z) {
- * 연산자 함수 정의
    
Power tmp;
- tmp 객체 생성
  
tmp.kick = n * z.kick;
- tmp객체의 kick 값에 n*z.kick 값을 저장
  
tmp.punch = n * z.punch;
- tmp객체의 punch 값에 n*z.punch 값을 저장
  
return tmp;}
- tmp 값을 반환함
  
int main() {
- 메인 함수 시작
  
Power a(3, 5), b;
- a,b객체 생성
  
a.show();
- a를 출력함
  
b.show();

- b를 출력함
  
b = 2 * a;
- b에 2*a값을 저장
  
a.show();
- a를 출력함
  
b.show();
- b를 출력함
  
return 0;}
- 0의 값을 반환하여 프로그램 종료
