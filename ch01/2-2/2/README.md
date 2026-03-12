`#include <iostream>`
- cout , cin 객체 선언을 위한 iostream 해더파일
  
`using namespace std;`
- cout , cin을 간략하게 사용하기 위해 std 네임스페이스를 사용
  
`int main() {`
- 메인 함수 시작
  
`int x = 0;`
- 변수 x 를 선언 후 0으로 초기화
  
`int y = 0;`
- 변수 y 를 선언 후 0으로 초기화
  
`cout << "정수 x를 입력 하시오:";`
- 화면에 다음과 같은 텍스트 출력
  
`cin >> x;`
- 변수 x에 입력 값을 받아 x에 저장
  
`y = (x * x) + 2 * x - 5;`
- 변수 y에 다음과 같은 식을 저장
  
`cout << "x=" << x << "일때 y의 값은 " << y << "입니다.";`
- 화면에 다음과 같은 텍스트 출력
  
`return 0;`
- 0을 반환 후 메인 함수 종료
