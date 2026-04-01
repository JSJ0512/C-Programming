#define _CRT_SECURE_NO_WARNINGS
- strcpy 사용을 위한 보안 경고 무시 지시문
  
#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <cstring>
- C 문자열 관련 함수를 사용하기 위해 포함하는 전처리 명령
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Coffee {
- Coffee 이라는 클래스 선언
  
private:
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int coffee, sugar, milk, water;
- 정수형 변수 coffee,sugar,milk,water 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Coffee() {
- 기본 생성자 선언
  
coffee = 10;
- coffee 의 값을 10으로 초기화
  
sugar = 0;
- sugar 의 값을 0으로 초기화
  
milk = 0;
- milk 의 값을 0으로 초기화
  
water = 0;}
- water 의 값을 0으로 초기화
  
Coffee(int a, int b, int c, int d) {
- 매개변수 생성자 int a,b,c,d 객체 생성
  
coffee = a;
- a의 값을 coffee에 저장
  
sugar = b;
- b의 값을 sugar에 저장
  
milk = c;
- c의 값을 milk에 저장
  
water = d;}
- d의 값을 water에 저장
  
void show() {
- 객체의 상태를 출력하는 멤버 함수 정의
  
char aaa[10];
- 문자열 배열 aaa를 10칸으로 선언
  
strcpy(aaa, "coffee");
- 문자열 "coffee" 를 aaa에 복사
  
cout << aaa << " ";
- 화면에 다음과 같은 텍스트 출력
  
for (int i = 0; i < coffee; i++) cout << "*";
- 반복문을 사용해 coffee 값 만큼 반복
  
cout << endl;
- 한줄 띄움
  
strcpy(aaa, "sugar");
- 문자열 "sugar" 를 aaa에 복사
  
cout << aaa;
- 화면에 다음과 같은 텍스트 출력
  
if (sugar > 0) cout << " ";
- 조건문을 사용해 값이 0보다 크다면 공백 추가
  
for (int i = 0; i < sugar; i++) cout << "*";
- 반복문을 사용해 sugar 값 만큼 반복
  
cout << endl;
- 한줄 띄움
  
strcpy(aaa, "milk");
- 문자열 "milk" 를 aaa에 복사
  
cout << aaa;
- 화면에 다음과 같은 텍스트 출력
  
if (milk > 0) cout << " ";
- 조건문을 사용해 값이 0보다 크다면 공백 추가
  
for (int i = 0; i < milk; i++) cout << "*";
- 반복문을 사용해 milk 값 만큼 반복
  
cout << endl;
- 한줄 띄움
  
strcpy(aaa, "water");
- 문자열 "water" 를 aaa에 복사
  
cout << aaa;
- 화면에 다음과 같은 텍스트 출력
  
if (water > 0) cout << " ";
- 조건문을 사용해 값이 0보다 크다면 공백 추가
  
for (int i = 0; i < water; i++) cout << "*";
- 반복문을 사용해 water 값 만큼 반복
  
cout << endl;}};
- 한줄 띄움
  
int main() {
- 메인 함수 시작
  
Coffee espresso;
- espresso 객체 생성
  
Coffee americano(5, 0, 0, 10);
- americano 객체 생성 후 5,0,0,10 값으로 초기화
  
Coffee cappucchino(5, 1, 5, 2);
- cappucchino 객체 생성 후 5,1,5,2 값으로 초기화
  
Coffee mySweet(3, 7, 5, 5);
- mySweet 객체 생성 후 3,7,5,5 값으로 초기화
  
espresso.show();
- espresso 재료 상태 출력
  
cout << endl;
- 한줄 띄움
  
mySweet.show();
- mySweet 재료 상태 출력
  
return0;}
- 0을 반환 후 메인 함수 종료
