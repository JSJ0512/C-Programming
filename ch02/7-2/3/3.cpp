// Title : 7-2-3
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
	Complex& operator+=(Complex a) {
		real += a.real;
		img += a.img;
		return *this;
	}
	void show() {
		cout << real << "+" << img << "j" << endl;
	}
};
int main() {
	Complex a(3, 5), b(1, 1);
	a.show();
	b.show();
	b += a;
	a.show();
	b.show();
	return 0;
}
