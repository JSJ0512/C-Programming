// Title : 7-2-1
// Author : Jeon sejin
// Data : 2026 6.2

#include <iostream>
using namespace std;
class Complex {
	int real,img;
public:
	Complex(int r = 0, int i = 0) {
		real = r;
		img = i;
	}
	Complex operator+(Complex a) {
		Complex tmp;
		tmp.real = this->real + a.real;
		tmp.img = this->img + a.img;
		return tmp;
	}
	void show() {
		cout << real << "+" << img << endl;
	}
};
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x + y;
	cout << "두 복소수의 합은 ";
	sum.show();
	return 0;
}
