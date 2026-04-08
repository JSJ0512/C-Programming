// Title : 4-2-3
// Author : Jeon sejin
// Data : 2026 4.8

#include <iostream>
using namespace std;
int main()
{
	cout << "입력할 정수의 개수를 입력하세요 : ";
	int a;
	cin >> a;
	if (a <= 0) return -1;
	int* p = new int[a];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}
  
	cout << a << "개의 정수를 입력하시오." << endl;
	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
  
	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += p[i];
	}
  
	cout << "평균값은 " << sum << "입니다.";
	delete[] p;
}
