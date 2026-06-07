// Title : 7-2-2
// Author : Jeon sejin
// Data : 2026 6.2

#include <iostream>
using namespace std;
class Complex {
	int real, img;
public:
	Complex(int r = 0, int i = 0) {
		real = r;
		img = i;
	}
	Complex operator*(Complex a) {
		return Complex(
			real * a.real - img * a.img,
			real * a.img + img * a.real
		);
	}
	void show() {
		cout << real << "+" << img << "j" << endl;
	}
};
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x * y;
	cout << "두 복소수의 곱은 ";
	sum.show();
	return 0;
}
