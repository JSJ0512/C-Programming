#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Triangle {
- Triangle 클래스 선언
  
static int a;
- 정적 변수 a 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Triangle() {
- 생성자 선언
  
a++;}
- a값을 1 더함
  
~Triangle() {
- 소멸자 선언
  
a--;}
- a값을 1 뺌
  
static int getNumofTriangle() {
- 정적변수 getNumofTriangle 선언
  
return a;}};
- a값을 반환함
  
int main() {
- 메인 함수 시작
  
Triangle* tri1 = new Triangle[5];
- Triangle 객체를 동적으로 5개 생성함
  
cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
- 화면에 다음과 같은 텍스트 출력
  
delete[] tri1;
- 동적 할당한 배열 메모리 해제
  
Triangle tri2[15];
-  Triangle 객체를 15개 생성함
  
cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
