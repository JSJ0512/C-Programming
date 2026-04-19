#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 객체를 사용하기 위한 헤더
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
int main() {
- 메인 함수 시작
  
string a;
- 문자열 변수 a
  
string result = "";
- 입력된 문자열들을 계속 이어 붙여 저장하는 변수
  
cout << "텍스트 입력(한글 안 됨) >> ";
- 화면에 다음과 같은 텍스트 출력
  
getline(cin, a);
- 한 줄을 입력받아 변수 a에 저장
  
for (int i = 0; i < a.length(); i++) {
- 반복문을 이용해 a.length()의 값 만큼 반복
  
if ((a[i] >= 'A' && a[i] <= 'Z') ||
- 조건문을 이용해 a[i]의 값이 대문자인지 확인
  
(a[i] >= 'a' && a[i] <= 'z') ||
- 조건문을 이용해 a[i]의 값이 소문자인지 확인
  
a[i] == ' ') {
- a[i]의 값이 공백인지 확인
  
result += a[i];}}
- result에 a[i]을 더하고 저장함
  
cout << result << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
