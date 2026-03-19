# Title : 3-2-4
# Author : Jeon sejin
# Data : 2026 3.19

#include <iostream>
using namespace std;
class Rectangle {
public:
	int width,height,x,y;

	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int a, int b, int c, int d);

	int getArea();
	int getPerimeter();
	void getDown();
};
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int a, int b) : Rectangle(a, b, 1, 1) {}
Rectangle::Rectangle(int a, int b, int c, int d) : x(a), y(b), width(c), height(d) {}

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getPerimeter() {
	return (height * 2)+(width * 2);
}

void Rectangle::getDown() {
	y = y - height;
	x = x + width;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3, 5, 2, 4);

	rect3.getDown();
	cout << "rect1의 면적은 : " << rect1.getArea() << endl;
	cout << "rect2의 둘레는 : " << rect2.getPerimeter() << endl;
	cout << "rect3의 우측하단의 좌표는 : (" << rect3.x << " , " << rect3.y << ")" << endl;
	return 0;
}
