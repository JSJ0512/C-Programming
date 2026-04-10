// Title : 4-3-5
// Author : Jeon sejin
// Data : 2026 4.9

#include <iostream>
using namespace std;

class Sphere {
    int radius;
public:
    Sphere();
    void setRadius(int r) { radius = r; }
    double getVolume() { return 4.0 / 3.0 * 3.14 * radius * radius * radius; }
};

Sphere::Sphere() {
    radius = 1;
}

int main() {
    cout << "생성하고자 하는 구의 개수: ";
    int a, radius;
    cin >> a;

    Sphere* pArray = new Sphere[a];
    for (int i = 0; i < a; i++) {
        cout << "구" << i + 1 << "의 반지름: ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    Sphere* p = pArray;
    for (int i = 0; i < a; i++) {
        cout << "구" << i + 1 << "의 부피 " << p->getVolume() << endl;
        p++;
    }

    delete[] pArray;
    return 0;
}
