// Title : 7-1-2
// Author : Jeon sejin
// Data : 2026 5.28

#include <iostream>
using namespace std;
class Complex {
	int z, x;
public:
	Complex(int q = 0, int w = 0) {
		z = q;
		x = w;
		cout << "복소수 " << z << " + " << x << "j 생성" << "\n";
	}
	void show() {
		cout << z << " + " << x << "j";
	}
	friend Complex ComplexAdd(Complex, Complex);
};
Complex ComplexAdd(Complex a, Complex b) {
	return Complex(a.z + b.z, a.x + b.x);
}
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = ComplexAdd(x, y);
	cout << "두 복소수의 합은 ";
	sum.show();
}
