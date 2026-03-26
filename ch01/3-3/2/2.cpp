// Title : 3-3-2
// Author : Jeon sejin
// Data : 2026 3.26

#include <iostream>
using namespace std;
class Triangle {
	int width;
	int height;
public:
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea();
};

Triangle::Triangle() : Triangle(1, 1) {
}

Triangle::Triangle(int w, int h) : width(w), height(h) {
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 생성" << endl;
}

Triangle::~Triangle() {
	cout << "밑변 " << width << " 높이 " << height << " 인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
	return 0.5 / width * height;
}

int main() {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;

	Triangle tri2(2, 4);
	cout << "삼각형의 면적은" << tri2.getArea() << endl;
	return 0;
}
