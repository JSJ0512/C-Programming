#define _CRT_SECURE_NO_WARNINGS
- 보안 경고를 무시하기 위한 지시
  
#include <iostream>
- cout 등등 객체 선언을 위한 iostream 해더파일
  
#include <string>
- 문자열 클래스를 사용하기 위한 헤더 파일
  
using namespace std;
- cout 을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
class Person {
- Person 클래스 선언
  
string name;
- 문자열 변수 name 선언
  
int id;
- 정수형 변수 id 선언
  
public:
- public 아래에 속하는 변수와 함수를 클래스 외부에서 접근 가능하도록 함
  
Person(int id, string name);
- 생성자 선언
  
void changeName(string name);
- changeName 함수 선언
  
void show() { cout << id << "," << name << endl; }};
- show() 함수 선언 id와 name을 출력
  
Person::Person(int id, string name) {
- 생성자 정의
  
this->id = id;
- 매개변수 id를 멤버 변수 id에 저장
  
this->name = name;}
- 메게변수 name을 멤버 변수 name에 저장
  
void Person::changeName(string name) {
- 이름 변경 함수 정의
  
this->name = name;}
- 매개변수 name을 멤버 변수 name에 저장
  
int main() {
- 메인 함수 시작
  
Person father(1, "Kitae");
- id는 1 name은 "Kitae"인 객체 father 생성
  
Person daughter(father);
- 복사 생성자를 호출하여 father 내용을 복사
  
cout << "daughter 객체 생성 직후 ----" << endl;
- 화면에 다음과 같은 텍스트 출력
  
father.show();
- show()함수를 이용해 father의 정보를 출력함
  
daughter.show();
- show()함수를 이용해 daughter의 정보를 출력함
  
daughter.changeName("Grace");
- changeName함수를 이용해 daughter의 이름을 변경함

cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
- 화면에 다음과 같은 텍스트 출력
  
father.show();
- show()함수를 이용해 father의 정보를 출력함
  
daughter.show();
- show()함수를 이용해 daughter의 정보를 출력함
  
return 0;}
- 0을 반환 후 메인 함수 종료
