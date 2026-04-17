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
  
int count = 1;
- 정수형 변수 count 선언 후 1의 값으로 저장
  
while (true) {
- 반복문을 사용해 무한 반복
  
cout << "문자열 입력 : ";
- 화면에 다음과 같은 텍스트 출력
  
getline(cin, a);
- 한 줄을 입력받아 변수 a에 저장
  
if (a == "quit")
- 조건문을 이용해 a의 값이 quit인지 확인
  
break;
- 반복문 종료
  
result += "<" + to_string(count) + ">" + a;
- 기존 문자열 뒤에 정수를 문자열로 변환하여 이어 붙임
  
cout << "이어진 문자열: " << result << endl;
- 화면에 다음과 같은 텍스트 출력
  
count++;}
- count 값을 1 증가
  
return 0;}
- 0을 반환 후 메인 함수 종료
