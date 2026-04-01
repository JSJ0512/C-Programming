#define _CRT_SECURE_NO_WARNINGS
- strcpy 사용을 위한 보안 경고 무시 지시문
  
#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <cstring>
- C 문자열 관련 함수를 사용하기 위해 포함하는 전처리 명령
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class CoffeeMachine {
- CoffeMachine 이라는 클래스 선언
  
private:
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int coffee,water,sugar;
- 정수형 변수 coffee,water,sugar 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
CoffeeMachine(int c, int w, int s) {
- 매개변수 생성자 int c,w,s 객체 생성
  
coffee = c, water = w, sugar = s;}
- c의 값을 coffee에 , w의 값을 water에 , s의 값을 sugar에 저장
  
void drinkEspresso() {
- drinkEspresso 함수 정의 시작
  
if (coffee >= 1 && water >= 1) {
- 조건문을 사용해 커피와 물이 1 이상 있는 경우를 확인
  
coffee -= 1;
- 커피 값 1감소
  
water -= 1;}}
- 물 값 1감소
  
void drinkAmericano() {
- drinkAmericano 함수 정의 시작

if (coffee >= 1 && water >= 3) {
-  조건문을 사용해 커피1,물3 이상 있는 경우를 확인

coffee -= 1;
- 커피 값 1감소
  
water -= 3;}}
- 물 값 3감소
  
void drinkSugarCoffee() {
- drinkSugarCoffee 함수 정의 시작
  
if (coffee >= 1 && water >= 2 && sugar >= 1) {
- 조건문을 사용해 커피1,물2,설탕1 이상 있는 경우를 확인
  
coffee -= 1;
- 커피 값 1감소
  
water -= 2;
- 물 값 2감소
  
sugar -= 1;}}
- 설탕 값 1감소
  
void fill() {
- fill 함수 정의
  
coffee = 10;
- coffee의 값을 10으로
  
water = 10;
- water의 값을 10으로
  
sugar = 10;}
- sugar의 값을 10으로
  
void show() {
- show 함수 정의
  
char Machine[20];
- 문자열 배열 Machine을 20칸을 선언
  
strcpy(Machine, "[머신 상태] ");
- 문자열 "[머신 상태]" 를 Machine에 복사
  
cout << Machine;
- 화면에 다음과 같은 텍스트 출력
  
cout << "커피:" << coffee << " ";
- 화면에 다음과 같은 텍스트 출력
  
cout << "물:" << water << " ";
- 화면에 다음과 같은 텍스트 출력
  
cout << "설탕:" << sugar << endl;}};
- 화면에 다음과 같은 텍스트 출력
  
int main() {
- 메인 함수 시작
  
CoffeeMachine java(5, 10, 6);
- java 객체 생성 후 5,10,6 값으로 초기화
  
java.drinkEspresso();
- drinkEspresso를 호출해 에스프레소 제조
  
java.show();
- show를 호출해 머신 상태 출력
  
java.drinkAmericano();
- drinkAmericano를 호출해 아메리카노 제조
  
java.show();
- show를 호출해 머신 상태 출력
  
java.drinkSugarCoffee();
- drinkSugarCoffee를 호출해 설탕커피 제조
  
java.show();
- show를 호출해 머신 상태 출력
  
java.fill();
- fill을 호출해 모든 재료를 최대로 채움
  
java.show();
- show를 호출해 머신 상태 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
