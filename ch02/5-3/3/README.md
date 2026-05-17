#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
void SwapString(string& a, string& b);
- SwapString 함수 선언 문자열을 참조로 전달 받음
  
int main() {
- 메인 함수 시작
  
string s1("hello");
- 문자열 객체 s1 생성 후 "hello" 로 초기화
  
string s2("world");
- 문자열 객체 s2 생성 후 "world" 로 초기화
  
cout << "교환전 문자열 " << s1 << " " << s2 << endl;
- 화면에 다음과 같은 텍스트 출력
  
SwapString(s1, s2);
- s1.s2를 SwapString함수에 참조로 전달
  
cout << "교환후 문자열 " << s1 << " " << s2 << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
  
void SwapString(string& a, string& b) {
- SwapString 함수 정의 시작
  
string temp;
- 문자열 변수 temp 선언
  
temp = a;
- a의 값을 temp에 저장
  
a = b;
- b의 값을 a에 저장
  
b = temp;}
- temp의 값을 b에 저장
