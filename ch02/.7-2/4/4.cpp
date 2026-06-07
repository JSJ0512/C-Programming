// Title : 7-2-4
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
	Complex operator-(int a) {
		return Complex(real - a, img - a);
	}
	void show() {
		cout << real << "+" << img << "j" << endl;
	}
};
int main() {
	Complex a(3, 5), b;
	a.show();
	b.show();
	b = a - 2;
	a.show();
	b.show();
	return 0;
}
