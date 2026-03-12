`#include <iostream>`
- cout , cin 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout , cin을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`int main() {`
- 메인 함수 시작
  
`char line[1000];`
- 문자형 배열 line 선언
  
`while (true) {`
- 조건문을 사용해 true일때 동안 반복
  
`cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>>";`
- 화면에 다음과 같은 텍스트 출력
  
`cin.getline(line, 1000);`
- 한 문장을 입력 받아 line에 저장
  
`if (line[0] == 'e' && line[1] == 'x' && line[2] == 'i' && line[3] == 't' && line[4] == '\0')`
- 조건문을 사용해 각 조건이 맞는지 확인
  
`break;`
- 조건문을 종료시킴
  
`int count = 0;`
- 변수 count 를 선언 후 0으로 초기화
  
`for (int i = 0; line[i] != '\0'; i++) {`
- 반복문을 사용해 함수 i를 선언 후 0으로 초기화 한 뒤에 \0이 아닐때 까지 반복
  
`if (line[i] != ' ' && (i == 0 || line[i - 1] == ' ')) {`
- 조건문을 사용해 공백이 아닌지 판단함
  
`count++;}}`
- 변수 count에 1을 더함
  
`cout << "단어의 개수는 " << count << "개이다." << endl;}`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;`
- 0을 반환 후 메인 함수 종료
