#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
int main(){
- 메인 함수 시작
  
cout << "입력할 실수의 개수를 입력하세요 : ";
- 화면에 다음과 같은 텍스트 출력
  
int a;
- 정수형 변수 a 선언
  
cin >> a;
- 입력을 받아 a 값에 저장
  
if (a <= 0) return -1;
- 조건문을 이용해 입력값이 0 이하이면 프로그램 종료
  
double* p = new double[a];
- 실수형 포인터 p에 a개를 저장할 배열을 동적 메모리로 할당
  
if (!p) {
- 조건문을 이용해 메모리 할당 실패 여부 확인
  
cout << "메모리를 할당할 수 없습니다.";
- 화면에 다음과 같은 텍스트 출력
  
return -1;}
- 프로그램 종료
  
cout << a << "개의 실수를 입력하시오." << endl;
- 화면에 다음과 같은 텍스트 출력
  
for (int i = 0; i < a; i++) {
- 반복문을 통해 a번 만큼 반복
  
cin >> p[i];}
- 입력을 받아 p[i] 배열에 값에 저장
  
double max = p[0];
- 실수형 변수 max 선언 후 p[0] 값을 저장
  
for (int i = 1; i < a; i++) {
- 반복문을 통해 a번 만큼 반복
  
if (p[i] > max) {
- 조건문을 이용해 현재 값이 최대값보다 크면
  
max = p[i];}}
- max에 p[i] 값을 저장
  
cout << "최대값은 " << max << "입니다.";
- 화면에 다음과 같은 텍스트 출력
  
delete[] p;}
- 동적 할당한 배열 메모리 해제
