# Title : 2-2-2
# Author : Jeon sejin
# Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
	int x = 0;
	int y = 0;

	cout << "정수 x를 입력 하시오:";
	cin >> x;
	y = (x * x) + 2 * x - 5;
	cout << "x= " << x << "일때 y의 값은 " << y << "입니다.";
	return 0;
}
