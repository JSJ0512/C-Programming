#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
int main(){
- 메인 함수 시작
  
cout << "저장할 문자열의 크기를 입력하세요: ";
- 화면에 다음과 같은 텍스트 출력
  
int a;
- 정수형 변수 a 선언
  
cin >> a;
- 입력을 받아 a 값에 저장
  
if (a <= 0) return -1;
- 조건문을 이용해 입력값이 0 이하이면 프로그램 종료
  
char* str = new char[a + 1];
- 캐릭터형 변수 포인터 str을 선언 후 [a+1] 배열을 동적으로 할당
  
if (!str) {
-  [a+1] 배열이 동적으로 할당 되었는지 확인
- 
cout << "메모리를 할당할 수 없습니다.";
- 화면에 다음과 같은 텍스트 출력
  
return -1;}
- 프로그램 종료
  
cout << "문자열을 입력하시오: ";
- 화면에 다음과 같은 텍스트 출력
  
cin.ignore();
- 이전 입력 중에서 남아있는 \n 을 제거
  
cin.getline(str, a + 1);
- a 값의 문자열을 받아서 str에 저장
  
cout << "입력한 문자열은 " << str << "입니다.";
- 화면에 다음과 같은 텍스트 출력
  
delete[] str;}
- 동적 할당한 배열 메모리 해제
