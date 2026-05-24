#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class MyMath {
- MyMath 클래스 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
static int GetMax(int arr[0], int a) {
- 정적함수 GetMax 선언 , 배열 arr[0]과 배열 크기 a를 전달받음
  
int max = arr[0];
- 정수형 변수 max를 선언 후 arr[0] 값을 저장
  
for (int i = 1; i < a; i++) {
- 반복문을 이용해 a번만큼 반복
  
if (arr[i] > max)
- 조건문을 이용해 arr[i]값이 max보다 클때까지
  
max = arr[i];}
- max에 arr[i] 값을 저장
  
return max;}
- max 값을 반환함
  
static int GetMin(int arr[0], int a) {
- 정적함수 GetMin 선언 , 배열 arr[0]과 배열 크기 a를 전달받음
  
int min = arr[0];
- 정수형 변수 min 선언 후 arr[0] 값을 저장
  
for (int i = 1; i < a; i++) {
- 반복문을 이용해 a번만큼 반복
  
if (arr[i] < min)
- 조건문을 이용해 arr[i]값이 min보다 작을떄까지
  
min = arr[i];}
- min 값을 arr[i] 값을 저장
  
return min;}};
- min 값을 반환함
  
int main() {
- 메인 함수 시작
  
int x[5] = { 20,30,-5,2,-30 };
- 정수형 배열 5의 값의 크기를 가진 x 선언 후 20,30,-5,2,-30 값을 저장
  
cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
- 화면에 다음과 같은 텍스트 출력
  
cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;}
- 화면에 다음과 같은 텍스트 출력
