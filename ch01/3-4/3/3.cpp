// Title : 3-4-3
// Author : Jeon sejin
// Data : 2026 3.26

#include <iostream>
using namespace std;
class Triangle {
private:
    int width;
    int height;
public:
    Triangle();
    ~Triangle();
    void setWidth(int w);
    void setHeight(int h);
    int getWidth();
    int getHeight();
    double getArea();
};

Triangle::Triangle() : width(1), height(1) {
    cout << "폭" << width << ",높이" << height << " 삼각형 생성" << endl;
}

Triangle::~Triangle() {
    cout << "폭" << width << ",높이" << height << " 삼각형 소멸" << endl;
}

void Triangle::setWidth(int w) {
    width = w;
}

void Triangle::setHeight(int h) {
    height = h;
}

int Triangle::getWidth() {
    return width;
}

int Triangle::getHeight() {
    return height;
}

double Triangle::getArea() {
    return 0.5 * width * height;
}

int main() {
    Triangle tri;
    tri.setWidth(3);
    tri.setHeight(5);
    cout << "삼각형의 폭은 " << tri.getWidth() << endl;
    cout << "삼각형의 높이는 " << tri.getHeight() << endl;
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
    return 0;
}
