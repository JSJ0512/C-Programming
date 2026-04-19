#include <iostream>
- cout,cin 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout,cin 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
int main() {
- 메인 함수 시작
  
int a;
- 정수형 변수 a 선언
  
cout << "구입할 물품의 개수 >> ";
- 화면에 다음과 같은 텍스트 출력
  
cin >> a;
- 입력을 받아 a 값에 저장
  
int* price = new int[a];
- 크기가 a인 동적으로 메모리 생성 후 포인터 price에 저장
  
cout << "물품 " << a << "개의 가격 입력 >> ";
- 화면에 다음과 같은 텍스트 출력
  
for (int i = 0; i < a; i++) {
- 반복문을 이용해 a번만큼 반복
  
cin >> price[i];}
- 입력을 받아 price[i] 값에 저장
  
int min = price[0];
- 정수형 변수 min 선언 후 price[0] 값으로 초기화
  
int max = price[0];
- 정수형 변수 max 선언 후 price[0] 값으로 초기화
  
for (int i = 1; i < a; i++) {
- 반복문을 이용해 a번 만큼 반복
  
if (price[i] < min)
- 조건문을 이용해 price[i]이 min보다 작을때만
  
min = price[i];
- price[i]의 값을 min에 저장
  
if (price[i] > max)
- 조건문을 이용해 price[i]이 max보다 클때만
  
max = price[i];}
- price[i]의 값을 max에 저장
  
cout << "제일 싼 가격은 " << min << endl;
- 화면에 다음과 같은 텍스트 출력
  
cout << "제일 비싼 가격은 " << max << endl;
- 화면에 다음과 같은 텍스트 출력
  
delete[] price;
- 동적 할당한 배열 메모리 해제
  
return 0;}
- 0을 반환 후 메인 함수 종료
