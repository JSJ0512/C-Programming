#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
string GetLastString(string name[], int size);
- 문자열 GetLatterString 함수 선언 문자열 배열 크기를 받아옴
  
int main() {
- 메인 함수 시작
  
string name[5];
- 문자열 변수 name에 5크기 만큼을 저장할 배열 선언
  
string a;
- 문자열 변수 a 선언
  
for (int i = 0; i < 5; i++) {
- 반복문을 이용해 5번만큼 반복
  
cout << "이름 >> ";
- 화면에 다음과 같은 텍스트 출력
  
getline(cin, name[i], '\n');}
- 공백 포함 한줄을 문자열로 입력 받음
  
a = GetLastString(name, 5);
- a에 GetLastString 함수 저장
  
cout << "사전에서 가장 뒤에 나오는 문자열은 " << a << endl;}
- 화면에 다음과 같은 텍스트 출력
  
string GetLastString(string name[], int size) {
- 문자열 배열을 받는 GetLastString 함수 정의
  
string max = name[0];
- 문자열 변수 max에 name의 첫번째 배열 저장
  
for (int i = 1; i < size; i++) {
- 반복문을 이용해 size 만큼 반복
  
if (name[i] > max)
- 조건문을 이용해 name[i]가 max보다 클 경우
  
max = name[i];}
- max에 name[i]를 저장
  
return max;}
- max의 값을 반환
