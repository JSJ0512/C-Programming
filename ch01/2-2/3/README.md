`#include <iostream>`
- cout , cin 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout , cin을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`int main() {`
- 메인 함수 시작
  
`char num[10];`
- 문자형 배열 num 선언
  
`char name[10];`
- 문자형 배열 name 선언
  
`char address[50];`
- 문자형 배열 address 선언
  
`cout << "학번을 입력하시오: ";`
- 화면에 다음과 같은 텍스트 출력
  
`cin >> num;`
- 문자형 배열 num 에 값을 입력받아 저장함
  
`cout << "이름을 입력하시오: ";`
- 화면에 다음과 같은 텍스트 출력
  
`cin >> name;`
- 문자형 배열 name 에 값을 입력 받아 저장함
  
`cin.ignore();`
- 키보드 버퍼에 남아있는 엔터키(‘\n’)를 지움
  
`cout << "주소를 입력하시오: ";`
- 화면에 다음과 같은 텍스트 출력
  
`cin.getline(address, sizeof(address), '\n');`
- address 값 만큼의 배열에 문장을 입력받아 address에 저장 후 엔터키까지 읽고 종료
  
`cout << "\n1.학번:" << num << "\n";`
- 화면에 다음과 같은 텍스트 출력
  
`cout << "2.이름:" << name << "\n";`
- 화면에 다음과 같은 텍스트 출력
  
`cout << "3.주소:" << address;`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;`
- 0을 반환 후 메인 함수 종료
