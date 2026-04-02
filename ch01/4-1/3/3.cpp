// Title : 4-1-3
// Author : Jeon sejin
// Data : 2026 4.2

#include <iostream>
using namespace std;
class Triangle {
private:
    int width, height;
public:
    Triangle() { this->width = this->height = 1; }
    Triangle(int w) { this->width = w; this->height = 1; }
    Triangle(int w, int h) { this->width = w; this->height = h; }
    double getArea() {
        return 0.5 * this->width * this->height;
    }
};

int main() {
    Triangle tri1, tri2(10), tri3(10, 2);
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;
    return 0;
}
