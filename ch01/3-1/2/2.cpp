# Title : 3-1-2
# Author : Jeon sejin
# Data : 2026 3.18

#include <iostream>
using namespace std;
class Triangle {
public:
	int a;
	int b;
	int getResult();
};

int Triangle::getResult() {
	return 0.5 * a * b;
}

int main() {
	Triangle tri;
	tri.a = 6;
	tri.b = 4;
	cout << "삼각형의 면적은 " << tri.getResult() << endl;
	return 0;
}
