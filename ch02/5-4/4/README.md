(1)

#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Collector {
- 클래스 Collector 선언
  
int* p;
- 정수형 변수 포인터p 선언
  
int size = 0;
- 정수형 변수 size 선언 후 0으로 초기화
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Collector(int size, int values[]) {
- 생성자 선언 size와 value 값을 받아 초기화
  
this->size = size;
- 매개변수 size 값을 멤버 변수 size에 저장
  
p = new int[size];
- size크기 만큼의 동적 배열 생성
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 만큼 반복
  
p[i] = values[i];}}
- values의 값을 p 배열로 복사
  
void show() {
- show() 함수 선언
  
cout << "데이터 수 " << size << ": ";
- 화면에 다음과 같은 텍스트 출력
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 만큼 반복
  
cout << p[i] << " ";}
- 화면에 다음과 같은 텍스트 출력
  
cout << endl;}
- 화면에 다음과 같은 텍스트 출력
  
int getSize() { return size; }
- getSize() 함수 선언 size값을 반환
  
int get(int index) { return p[index]; }};
- 특정한 인덱스 값을 반환
  
double calcAvg(Collector c) {
- Collector 객체를 값으로 전달
  
int sum = 0;
- 정수형 변수 sum 선언 후 0으로 초기화
  
for (int i = 0; i < c.getSize(); i++) {
- 반복문을 이용해 c.getSize()값만큼 반복
  
sum += c.get(i);}
- sum에 c.get(i)의 값을 더한 후 저장
  
return (double)sum / c.getSize();}
- 다음과 같은 식으로 계산하여 반환
  
int main() {
- 메인 함수 시작
  
int temp[] = { 69,70,71,72,74 };
- 정수형 배열 temp에 다음과 같은 5개의 값을 저장
  
Collector weight(4, temp);
- Collector 객체 weight 생성
  
double avg = calcAvg(weight);
- 평균값을 계산하는 avg 함수 호출
  
weight.show();
- show()를 이용해 weight 값을 출력
  
cout << "평균은 " << avg << endl;}
- 화면에 다음과 같은 텍스트 출력

(2)

다음과 같은 오류가 발생하는 이유는 복사 생성자가 없기 때문이다. 

(3)

class Collector {
- 클래스 Collector 선언
  
int* p;
- 정수형 변수 포인터 p 선언
  
int size = 0;
- 정수형 변수 size 선언 후 0으로 초기화
  
public:
-public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 

Collector(int size, int values[]) {
- 생성자 선언 size와 value 값을 받아 초기화
  
this->size = size;
- 매개변수 size 값을 멤버 변수 size에 저장
  
p = new int[size];
- size크기 만큼의 동적 배열 생성
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 만큼 반복
  
p[i] = values[i];}}
- values의 값을 p 배열로 복사
  
Collector(const Collector& src) {
- 기존 객체를 이용해 새객체를 만들때 호출
  
size = src.size;
- 원본 객체의 size를 복사
  
p = new int[size];
- size크기 만큼의 동적 배열 생성
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 만큼 반복
  
p[i] = src.p[i];}}
- src.c의 값을 p 배열로 복사
  
~Collector() {
- 소멸자
  
delete[] p;}
- 동적 배열 메모리 해제
  
void show() {
- show() 함수 선언
  
cout << "데이터 수 " << size << ": ";
- 화면에 다음과 같은 텍스트 출력
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 만큼 반복
  
cout << p[i] << " ";}
- 화면에 다음과 같은 텍스트 출력
  
cout << endl;}
- 화면에 다음과 같은 텍스트 출
  
int getSize() { return size; }
- getSize() 함수 선언 size값을 반환
  
int get(int index) { return p[index]; }};
- 특정한 인덱스 값을 반환
