// Title : 3-3-5
// Author : Jeon sejin
// Data : 2026 3.26

#include <iostream>
using namespace std;
class Sphere {
	int radius;
public:
	Sphere();
	Sphere(int r);
	~Sphere();
	double getVolume();
};

Sphere sp1(10);
Sphere sp2(20);

Sphere::Sphere() : radius(1) {
	cout << "반지름 " << radius << "인 구 생성" << endl;
}

Sphere::Sphere(int r) : radius(r) {
	cout << "반지름 " << radius << "인 구 생성" << endl;
}

Sphere::~Sphere() {
	cout << "반지름 " << radius << "인 구 소멸" << endl;
}

double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

int main() {
	cout << "구의 부피는 " << sp1.getVolume() << endl;
	cout << "구의 부피는 " << sp2.getVolume() << endl;

	return 0;
}
