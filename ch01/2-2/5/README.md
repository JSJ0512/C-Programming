`#include <iostream>`
- cout , cin 등등 객체 선언을 위한 iostream 해더파일

`using namespace std;`
- cout , cin을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`int main() {`
- 메인 함수 시작
  
`char text[100];`
- 문자형 배열 text 선언
  
`int a = 0;`
- 변수 a 선언 후 0으로 초기화
  
`cout << "빈칸 없이 문자열을 입력하세요>>";`
- 화면에 다음과 같은 텍스트 출력
  
`cin.getline(text, sizeof(text), '\n');`
- text 값의 크기 먼큼의 배열에 문자열을 입력받아 text에 저장 후 엔터키까지 읽고 종료

`while (text[a] !='\0'){`
- 조건문을 사용해 거짓이 될때까지 반복
  
`cout << text[a] << " ";`
- 화면에 다음과 같은 텍스트 출력
  
`a++;}`
- 변수 a에 1을 더함
  
`return 0;`
- 0을 반환 후 메인 함수 종료
