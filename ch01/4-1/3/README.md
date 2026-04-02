#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Triangle {
- Triangle 이라는 클래스 선언
  
private:
- private 아래 멤버는 외부에서 직접 접근 불가함
  
int width, height;
- 정수형 width,height 변수 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Triangle() { this->width = this->height = 1; }
- 기본 생성자를 생성해 width와 height 값을 1로 초기화
  
Triangle(int w) { this->width = w; this->height = 1; }
- 매개변수 width는 w, height는 1로 저장
  
Triangle(int w, int h) { this->width = w; this->height = h; }
- 매개변수 width와 height를 각각 w, h로 저장
  
double getArea() {
- 실수형 변수 getArea() 선언
  
return 0.5 * this->width * this->height;}};
- 다음과 같은 식을 계산하여 반환
  
int main() {
- 메인 함수 시작
  
Triangle tri1, tri2(10), tri3(10, 2);
- 객체 tri1,tri2,tri3을 생성해 tri2는 10 을 , tri3은 10,2를 저장
  
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
cout << "삼각형의 면적은 " << tri3.getArea() << endl;
- 화면에 다음과 같은 텍스트 출력
  
return 0;}
- 0을 반환 후 메인 함수 종료
