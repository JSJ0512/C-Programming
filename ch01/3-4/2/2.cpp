// Title : 3-4-2
// Author : Jeon sejin
// Data : 2026 3.26

#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};

Circle::Circle() : radius(1) {}

void Circle::setRadius(int r) {
	radius = r;
}

int Circle::getRadius() {
	return radius;
}

int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
