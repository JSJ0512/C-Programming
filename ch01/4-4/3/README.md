#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 객체를 사용하기 위한 헤더
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
int main() {
- 메인 함수 시작
  
string str;
- 문자열 변수 str
  
int count = 0;
- 정수형 변수 count 선언 후 0으로 저장
  
cout << "문자열 입력 : ;
- 화면에 다음과 같은 텍스트 출력
  
getline(cin, str);
- 한 줄을 입력받아 변수 str에 저장
  
for (int i = 0; i < str.length(); i++) {
- 반복문을 이용해 str.length만큼 반복
  
if (str[i] == 'a') {
- 조건문을 이용해 str[i]의 값이 a인지 확인
  
count++;}}
- count를 1 증가
  
cout << "문자 a는 " << count << "개 있습니다." << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
  
