#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Triangle {
- Triangle 이라는 클래스 선언
  
private:
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int width, height;
- 정수형 width ,height 변수 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Triangle(int w = 1) : width(w), height(1) {}
- 매개변수 w를 입력받아 w값을 1로 저장 후 width 는 w로 초기화, height는 1로 초기화
  
double getArea() { return width * height; }};
- 실수형 변수 getArea() 선언하여 width* height 값을 반환
  
int main() {
- 메인 함수 시작
  
Triangle triArr[3] = { {2}, {4}, {6} };
- 배열 triArr[3] 을 생성 후 [0]에는 2 값을 , [1]에는 4 값을 , [2]에는 6 값을 저장
  
for (int i = 0; i < 3; i++) {
- 반복문으로 3번 반복
  
Triangle* p = &triArr[i];
- 포인터 p를 선언해 triArr[i]를 저장
  
cout << "삼각형" << i << "의 면적은 " << p->getArea() << endl;}
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
