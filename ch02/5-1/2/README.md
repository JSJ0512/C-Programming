#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;      
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
string GetLatterString(string a, string b);
- 문자열 2개를 매개변수로 받아 문자열 1개를 반환하는 함수선언
  
int main() {
- 메인 함수 시작
  
string s1("hello");
- 문자열 객체 s1 생성 후 "hello" 로 초기화
  
string s2("world");
- 문자열 객체 s2 생성 후 "world" 로 초기화
  
string res;
- 문자열 변수 res 선언
  
res = GetLatterString(s1, s2);
- GetLatterString 함수 호출하여 s1,s2값을 res에 전달하여 저장
  
cout << "사전에서 뒤에 나오는 문자열은 "<< res<< "입니다." << endl;}
- 화면에 다음과 같은 텍스트 출력
  
string GetLatterString(string a, string b) {
- 문자열 두 개를 받아 비교하는 함수
  
if (a > b)
- 조건문을 이용해 a가 b보다 크다면 참
  
return a;
- a 를 반환
  
else
- 거짓이라면
  
return b;}
- b 를 반환 
