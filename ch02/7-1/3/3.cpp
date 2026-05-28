// Title : 7-1-3
// Author : Jeon sejin
// Data : 2026 5.28

#include <iostream>
using namespace std;
class Complex;
class ComplexManager {
public:
	Complex ComplexAdd(Complex, Complex);
};
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
	friend class ComplexManager;
};
Complex ComplexManager::ComplexAdd(Complex a, Complex b) {
	return Complex(a.z + b.z, a.x + b.x);
}
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	ComplexManager man;
	sum = man.ComplexAdd(x, y);
	cout << "두 복소수의 합은 ";
	sum.show();
}
