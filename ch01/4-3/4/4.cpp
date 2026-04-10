// Title : 4-3-4
// Author : Jeon sejin
// Data : 2026 4.9


#include <iostream>
using namespace std;
class Triangle {
    int a;
    int b;
public:
    Triangle() {
        a = 1, b = 1;
        cout << "밑변 " << a << "높이 " << b << "인 삼각형 생성" << endl;
    }

    Triangle(int m, int h) {
        a = m, b = h;
        cout << "밑변 " << a << "높이 " << b << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "밑변 " << a << "높이 " << b << "인 삼각형 소멸" << endl;
    }

    void setTriangle(int m, int h) {
        a = m, b = h;
    }

    double getArea() {
        return 0.5 * a * b;
    }
};

int main() {
    Triangle* pArray = new Triangle[3]{
        Triangle(1,1),
        Triangle(2,2),
        Triangle(4,4)
    };

    for (int i = 0; i < 3; i++) {
        cout << "삼각형의 면적은 " << pArray[i].getArea() << endl;
    }

    delete[] pArray;
    return 0;
}
