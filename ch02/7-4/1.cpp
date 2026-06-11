// Title : 7-4-1
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
    }
    friend istream& operator>>(istream& a, Complex& b);
    friend ostream& operator<<(ostream& c, Complex& b);
};
istream& operator>>(istream& a, Complex& b) {
    cout << "실수부:";
    a >> b.real;
    cout << "허수부:";
    a >> b.img;
    return a;
}
ostream& operator<<(ostream& c, Complex& b) {
    c << b.real << b.img << "j" << endl;
    return c;
}
int main() {
    Complex x, y;
    cin >> x >> y;
    cout << x << y;
    return 0;
}
