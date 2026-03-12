`#include <iostream>`
- cout , cin 등등 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout , cin을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`int main() {`
- 메인 함수 시작
  
`double num = 0;`
- 실수형 변수 num 을 선언 후 0으로 초기화
  
`double num2 = 0;`
- 실수형 변수 num2 를 선언 후 0으로 초기화
  
`cout << "실수 5개를 입력하세요: ";`
- 화면에 다음과 같은 텍스트 출력
  
`for (int i = 0; i < 5; i++) {`
- 반복문을 사용해 5번 반복
  
`cin >> num;`
- 실수형 변수 num 에 값을 입력 받아 저장
  
`if (0 < num) {`
- 조건문을 사용해 num이 0보다 큰지 확인
  
`num2 += num;}}`
- num2에 num의 값을 더하고 저장함
  
`cout << "양수 합은 " << num2 << "입니다..";`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;`
- 0을 반환 후 메인 함수 종료
