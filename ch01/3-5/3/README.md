#define _CRT_SECURE_NO_WARNINGS
- strcpy 사용을 위한 보안 경고 무시 지시문
  
#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일

#include <cstring>
- C 문자열 관련 함수를 사용하기 위해 포함하는 전처리 명령
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Picture {
- Picture 이라는 클래스 선언
  
private:
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int width;
- 정수형 변수 width 선언
  
int height;
- 정수형 변수 height 선언
  
char place[50];
- 문자 배열 place를 50칸 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Picture() {
- 기본 생성자 선언
  
width = 5;
- width 의 값을 5로 초기화
  
height = 7;
- height의 값을 7로 초기화
  
strcpy(place, "모름");}
- place 문자열을 "모름"으로 초기화
  
Picture(int w, int h, const char* p) {
- 매개변수 생성자 선언
  
width = w;
- w의 값을 width에 저장
  
height = h;
- h의 값을 height에 저장
  
strcpy(place, p);}
- 문자열 p를 place에 복사
  
int getWidth() { return width; }
- getWidth()객체에 width값을 반환
  
int getHeight() { return height; }
- getHeight()객체에 height값을 반환
  
const char* getPlace() { return place; }};
- 문자형 getplace()에 포인터를 지정해주고 place 값을 반환
  
int main() {
- 메인 함수 시작
  
Picture pic;
- Picture 클래스의 객체 pic 생성
  
Picture mt(10, 14, "한라산");
- Picture 클래스의 객체 mt 생성 후 10,14,"한라산"으로 초기화
  
cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
- 화면에 다음과 같은 텍스트 출력
  
cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
