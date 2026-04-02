// Title : 4-1-5
// Author : Jeon sejin
// Data : 2026 4.2

#include <iostream>
using namespace std;
class Triangle {
private:
    int width, height;
public:
    Triangle(int w = 1) : width(w), height(1) {}
    double getArea() { return width * height; }
};

int main() {
    Triangle triArr[3] = { {2}, {4}, {6} };
    for (int i = 0; i < 3; i++) {
        Triangle* p = &triArr[i];
        cout << "삼각형" << i << "의 면적은 " << p->getArea() << endl;
    }
    return 0;
}
