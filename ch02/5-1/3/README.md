#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
string GetLatterString(string* a, string* b);
- 문자열 GetLatterString 함수 선언 두 문자열 포인터를 받아옴
  
int main() {
- 메인 함수 시작
  
string s1("hello");
- 문자열 객체 s1 생성 후 "hello" 로 초기화
  
string s2("world");
- 문자열 객체 s2 생성 후 "world" 로 초기화
  
string res;
- 문자열 res 변수 선언
  
res = GetLatterString(&s1, &s2);
- res에 s1 , s2의 주소를 전달하 GetLatterString 함수 호출
  
cout << "사전에서 뒤에 나오는 문자열은 "<< res<< "입니다." << endl;}
- 화면에 다음과 같은 텍스트 출력
  
string GetLatterString(string* a, string* b) {
- 문자열 GetLatterString 함수 정의 시작
  
if (*a > *b)
- 조건문을 이용해 포인터a가 포인터b보다 클 경우
  
return *a;
- 포인터a값을 반환
  
else
- 그렇지 않을 경우
  
return *b;}
- 포인터b값을 반환
