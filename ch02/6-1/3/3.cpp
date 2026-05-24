// Title : 6-1-3
// Author : Jeon sejin
// Data : 2026 5.21

#include <iostream>
using namespace std;
class Rectangle {
    int w, h;
public:
    Rectangle() {
        w = h = 1;
    }
    Rectangle(int w) {
        this->w = w;
        h = 1;
    }
    Rectangle(int w, int h) {
        this->w = w;
        this->h = h;
    }
    void show() {
        cout << "사각형 폭은 " << w << " 높이는 " << h << endl;
    }
};
int main() {
    Rectangle rect0;
    rect0.show();
    Rectangle rect1(10);
    rect1.show();
    Rectangle rect2(10, 20);
    rect2.show();
    return 0;
}
