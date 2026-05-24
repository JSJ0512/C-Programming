// Title : 6-3-2
// Author : Jeon sejin
// Data : 2026 5.21

#include <iostream>
using namespace std;
class Triangle {
private:
	static int a;
public:
	Triangle() {
		a++;
	}
	~Triangle() {
		a--;
	}
	static int getNumofTriangle() {
		return a;
	}
};
int main() {
	Triangle* tri1 = new Triangle[5];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	delete[] tri1;
	Triangle tri2[15];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	return 0;
}
