#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
void SwapString(string* a, string* b);
- SwapString 함수 선언 두 문자열 포인터를 받아옴
  
int main() {
- 메인 함수 시작
  
string s1("hello");
- 문자열 객체 s1 생성 후 "hello" 로 초기화
  
string s2("world");
- 문자열 객체 s2 생성 후 "world" 로 초기화
  
cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
- 화면에 다음과 같은 텍스트 출력
  
SwapString(&s1, &s2);
- s1 , s2의 주소를 전달하여 SwapString 함수 호출
  
cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;}
- 화면에 다음과 같은 텍스트 출력
  
void SwapString(string* a, string* b) {
- SwapString 함수 정의 시작
  
string temp;
- 문자열 변수 temp 선언
  
temp = *a;
- 포인터a값을 temp에 저장
  
*a = *b;
- 포인터b값을 포인터a에 저장
  
*b = temp;}
- temp값을 포인터b에 저장
