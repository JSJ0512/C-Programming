// Title : 7-3-4
// Author : Jeon sejin
// Data : 2026 6.11

#include <iostream>
using namespace std;
class Power {
    int kick, punch;
public:
    Power(int k = 0, int p = 0) {
        kick = k;
        punch = p;
    }
    void show() {
        cout << "kick=" << kick << ",punch=" << punch << endl;
    }
    friend Power operator*(Power a, int n);
    friend Power operator*(int n, Power a);
    friend Power operator+(Power a, Power b);
};
Power operator*(Power a, int n) {
    return a;
}
Power operator*(int n, Power a) {
    return Power(a.kick * n, a.punch * n);
}
Power operator+(Power a, Power b) {
    return Power(a.kick + b.kick, a.punch + b.punch);
}
int main() {
    Power a(1, 1), b(2, 2), c;
    c.show();
    c = a * 2 + 2 * b;
    c.show();
    return 0;
}
