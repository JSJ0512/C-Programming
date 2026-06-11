// Title : 7-3-2
// Author : Jeon sejin
// Data : 2026 6.11

#include <iostream>
using namespace std;
class Complex {
    int real, img;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
        cout << "복소수 " << real << img << "j 생성" << endl;
    }
    void show() {
        cout << real << img << "j" << endl;
    }
    friend Complex& operator++(Complex& a);
    friend Complex operator--(Complex& a, int);
};
Complex& operator++(Complex& a) {
    a.real++;
    a.img++;
    return a;
}
Complex operator--(Complex& a, int) {
    Complex tmp = a;
    a.real--;
    a.img-=2;
    return tmp;
}
int main() {
    Complex x(2, -3);
    ++x;
    cout << "증가결과";
    x.show();
    x--;
    cout << "감소결과";
    x.show();
    return 0;
}
