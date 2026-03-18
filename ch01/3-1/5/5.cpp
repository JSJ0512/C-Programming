# Title : 3-1-5
# Author : Jeon sejin
# Data : 2026 3.18

#include <iostream>
using namespace std;
class Rectangle {
public:
    int x = 1;
    int y = 2;
    int width = 3;
    int height = 4;
    int getArea();
    int getPerimeter();
    void getDown();
};

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::getDown() {
    int a = x + width;
    int b = y - height;
    cout << "사각형의 우측하단의 좌표는 (" << a << ", " << b << ")" << endl;
}

int main() {
    Rectangle rect;
    cout << "사각형의 좌측상단좌표(x,y) : ";
    cin >> rect.x >> rect.y;
    cout << "사각형의 폭과 높이(width,height) : ";
    cin >> rect.width >> rect.height;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
    cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
    rect.getDown();
    return 0;
}
