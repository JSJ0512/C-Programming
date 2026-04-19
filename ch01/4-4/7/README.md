#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Container {
- Container이라는 클래스 정의
  
int size;
- 정수형 변수 size 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Container() : size(10) {}
- 객체 생성 시 초기값을 10으로 저장
  
void fill() { size = 10; }
- size를 10으로 저장하는 함수
  
bool consume(int n) {
- n 만큼의 재료를 사용시 호출하는 함수
  
if (size < n) return false;
- 조건문을 이용해 size 값이 n 보다 작다면 false 반환
  
size -= n;
- size의 값을 n만큼 빼고 저장
  
return true;}
- true 반환
  
int getSize() { return size; }};
- 정수형 getSize()를 이용해 size 반환
  
class CoffeeVendingMachine {
- CoffeeVendingMachine이라는 클래스 정의
  
Container tong[3];
- 3 값의 배열 tong 생성
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
void fill() {
- 모든 tong을 채우는 함수
  
for (int i = 0; i < 3; i++)
- 반복문을 이용해 3번 반복
  
tong[i].fill();}
- tong[i]에 tong을 채움
  
void show() {
- 재료 상태를 출력하는 함수 show

cout << "커피 " << tong[0].getSize()
- 화면에 다음과 같은 텍스트 출력
  
<< ", 물 " << tong[1].getSize()
- 화면에 다음과 같은 텍스트 출력
  
<< ", 설탕 " << tong[2].getSize() << endl;}
- 화면에 다음과 같은 텍스트 출력
  
bool make(int c, int w, int s, const string& name) {
- make 함수 선언 후 정수형 변수 c,w,s 선언 , name을 복사하지 않고 안전하게 전달
  
if (!tong[0].consume(c) ||
- 조건문을 이용해 재료가 부족한지 확인
  
!tong[1].consume(w) ||
- 조건문을 이용해 재료가 부족한지 확인
  
!tong[2].consume(s)) {
- 조건문을 이용해 재료가 부족한지 확인 
cout << "원료가 부족합니다." << endl;
- 화면에 다음과 같은 텍스트 출력
  
return false;}
- false 반환
  
cout << name << " 드세요" << endl;
- 화면에 다음과 같은 텍스트 출력
  
return true;}
- true 반환
  
void run() {
- 커피자판기 작동 함수
  
cout << "***** 커피자판기를 작동합니다. *****" << endl;
- 화면에 다음과 같은 텍스트 출력
  
fill();
- 모든 tong 채우기
  
while (true) {
- 반복문을 이용해 무한 반복
  
int menu;
- 정수형 변수 menu 선언
  
cout << "메뉴(1:에스프레소 2:아메리카노 3:설탕커피 4:잔량 5:채우기) >> ";
- 화면에 다음과 같은 텍스트 출력
  
cin >> menu; 
- 입력을 받아 menu에 저장
  
if (menu == 1)
- 조건문을 이용해 menu가 1일시
  
make(1, 1, 0, "에스프레소");
- 에스프레소 제작을 위한 1,1,0 값을 소모
  
else if (menu == 2)
- 조건문을 이용해 menu가 2일시
  
make(1, 2, 0, "아메리카노");
- 아메리카노 제작을 위한 1,2,0 값을 소모
  
else if (menu == 3)
- 조건문을 이용해 menu가 3일시
  
make(1, 2, 1, "설탕커피);
- 설탕커피 제작을 위한 1,2,1 값을 소모
  
else if (menu == 4)
- 조건문을 이용해 menu가 4일시
  
show();
- 현재 재료 상태 출력
  
else if (menu == 5) {
- 조건문을 이용해 menu가 5일시
  
fill();
- 모든 tong을 채움
  
cout << "커피 10, 물 10, 설탕 10" << endl;}}}};
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
CoffeeVendingMachine m;
- 커피자판기 객체 생성
  
m.run();}
- 커피자판기 작동
