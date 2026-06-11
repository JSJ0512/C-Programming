// Title : 7-3-3
// Author : Jeon sejin
// Data : 2026 6.11

#include <iostream>
using namespace std;
class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick;
        this->punch = punch;
    }
    void show() {
        cout << "kick=" << kick << ",punch=" << punch << endl;
    }
    friend Power operator*(int n, Power z);
};
Power operator*(int n, Power z) {
    Power tmp;
    tmp.kick = n * z.kick;
    tmp.punch = n * z.punch;
    return tmp;
}
int main() {
    Power a(3, 5), b;
    a.show();
    b.show();
    b = 2 * a;
    a.show();
    b.show();
    return 0;
}
