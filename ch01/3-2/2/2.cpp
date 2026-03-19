# Title : 3-2-2
# Author : Jeon sejin
# Data : 2026 3.19

#include <iostream>
using namespace std;
class Triangle {
    int down, height;
public:
    Triangle() : Triangle(1, 1) {}
    Triangle(int a, int b) : down(a), height(b) {}
    double getArea() { return 0.5 * down * height; }
};

int main() {
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    Triangle tri2(2, 4);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    return 0;
}
