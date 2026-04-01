// Title : 3-5-2
// Author : Jeon sejin
// Data : 2026 4.1

#include <iostream>
using namespace std;
class Triangle {
private :
	int width;
	int height;
public :
	Triangle() { width = 1, height = 1; }
	Triangle(int w, int h) { width = w, height = h; }
	int setWidth(int a) { return width = a; }
	int setHeight(int b) { return height = b; }
	double getArea() {
		return 0.5 * (width * height);
	}
};
int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;
}
