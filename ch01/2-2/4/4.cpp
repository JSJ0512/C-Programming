// Title : 2-2-4
// Author : Jeon sejin
// Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
	double num = 0;
	double num2 = 0;

	cout << "실수 5개를 입력하세요: ";
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (0 < num) {
			num2 += num;
		}
	}
	cout << "양수 합은 " << num2 << "입니다..";
	return 0;
}
