#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Container {
- Container이라는 클래스 정의
  
int* p;
- 정수형 변수 포인터 p 선언
  
int size;
- 정수형 변수 size 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함

Container(int size);
- 생성자 시작
  
~Container();
- 소멸자 선언
  
void read();
- 배열 입력하는 read 함수 선언
  
void write();
- 배열 출력하는 write 함수 선언
  
void rotate();
- 배열 원소들을 오른쪽으로 회전하는 rotate 함수 선언
  
double avg();};
- 평균을 계산하는 avg 함수 선언
  
Container::Container(int size) {
- 생성자 정의
  
this->size = size;
- 전달받은 size의 값을 맴버 변수에 저장
  
p = new int[size];}
- [size]의 크기의 동적 배열 생성
  
Container::~Container() {
- 소멸자 정의
  
delete[] p;}
- 동적 할당한 배열 메모리 해제
  
void Container::read() {
- 배열 입력 함수 read 시작
  
cout << "정수 " << size << "개 입력 >> ";
- 화면에 다음과 같은 텍스트 출력
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 값 만큼 반복
  
cin >> p[i];}}
- 입력을 받아 p[i]에 저장
  
void Container::write() {
- 출력 함수 write 시작
  
for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 값 만큼 반복
  
cout << p[i] << " ";}
- 화면에 다음과 같은 텍스트 출력
  
cout << endl;}
- 화면에 다음과 같은 텍스트 출력
  
void Container::rotate() {
- 배열 원소들을 오른쪽으로 회전하는 함수 rotate 시작
  
int last = p[size - 1];
- 정수형 변수 last 선언 후 p[size - 1]의 값을 저장
  
for (int i = size - 1; i > 0; i--) {
- 반복문을 이용해 0보다 작을때까지 반복
  
p[i] = p[i - 1];}
- p[i] 에 p[i - 1]의 값을 저장
  
p[0] = last;}
- p[0] 에 last의 값을 저장
  
double Container::avg() {
- 평균을 계산하는 함수 avg 시작
  
int sum = 0;
- 정수형 변수 sum을 선언 후 0으로 저장

for (int i = 0; i < size; i++) {
- 반복문을 이용해 size 값 만큼 반복
  
sum += p[i];}
- sum에 p[i]의 값을 더하고 저장
  
return (double)sum / size;}
- 다음과 같은 식을 계산하여 반환함
  
int main() {
- 메인 함수 시작
  
Container c(10);
- 크기가 10인 객체 생성
  
c.read();
- 배열 값 입력
  
c.write();
- 배열 값 출력
  
c.rotate();
- 배열 원소들을 오른쪽으로 회전
  
c.write();
- 배열 값 출력
  
cout << "평균은 " << c.avg() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
