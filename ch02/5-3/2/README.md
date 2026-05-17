#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
#include <cctype>
- toupper(문자 처리 함수)를 사용하기 위한 헤더
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
void Uppercase(string& str);
- Uppercase 함수 선언 문자열을 참조로 전달 받음
  
int main() {
- 메인 함수 시작
  
string s1("hello");
- 문자열 객체 s1 생성 후 "hello" 로 초기화
  
cout << "변환전 문자열 " << s1 << endl;
- 화면에 다음과 같은 텍스트 출력
  
Uppercase(s1);
- s1을 Uppercase함수에 참조로 전달
  
cout << "변환후 문자열 " << s1 << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
  
void Uppercase(string& str) {
- Uppercase 함수 정의 시작
  
for (int i = 0; i < str.length(); i++) {
- 반복문을 사용하여 문자열 길이만큼 반복
  
str[i] = toupper(str[i]);}}
- 소문자를 대문자로 변환하여 str[i]에 저장
