#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
int big(int, int);
- 정수형 변수 big 선언 후 정수형 변수 2개를 받음
  
double big(double, double);
- 실수형 변수 big 선언 후 실수형 변수 2개를 받음
  
string big(string, string);
- 문자열 big 선언 후 문자열 2개를 받음
  
int main() {
- 메인 함수 시작
  
int x = big(10, 20);
- 정수형 변수 x 선언 후 x에 big(int,int) 함수를 호출하여 10,20값을 저장
  
cout << "큰 정수값은 " << x << endl;
- 화면에 다음과 같은 텍스트 출력
  
double y = big(3.14, 1.05);
- 실수형 변수 y 선언 후 y에 big(double,double) 함수를 호출하여 3.14,1.05 값을 저장
  
cout << "큰 실수값은 " << y << endl;
- 화면에 다음과 같은 텍스트 출력
  
string z = big("hello", "world");
- 문자열 z 선언 후 z에 big(string,string) 함수를 호출하여 hello,world 를 저장
  
cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0의 값을 반환함
  
int big(int a, int b) {
- 정수형 변수 big 선언 후 정수형 변수 a,b 값을 받음
  
if (a > b)
- 조건문을 이용해 a 가 b 보다 클 경우
  
return a;
- a의 값을 반환함
  
else
- 그렇지 않다면
  
return b;}
- b의 값을 반환함
  
double big(double a, double b) {
- 실수형 변수 big 선언 후 실수형 변수 a,b 값을 받음
  
if (a > b)
- 조건문을 이용해 a가 b 보다 클 경우
  
return a;
- a의 값을 반환함
  
else
- 그렇지 않다면
  
return b;}
- b의 값을 반환함

string big(string a, string b) {
- 문자열 big 선언 후 문자열 a,b 값을 받음
  
if (a > b)
- 조건문을 이용해 a가 b보다 클 경우
  
return a;
- a의 값을 반환함
  
else
- 그렇지 않다면
  
return b;}
- b의 값을 반환함
