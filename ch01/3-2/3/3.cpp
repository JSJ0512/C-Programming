// Title : 3-2-3
// Author : Jeon sejin
// Data : 2026 3.19

#include <iostream>
using namespace std;
class Sphere {
    int rad;

public:
    Sphere();
    Sphere(int a);
    double getVolume();
};
Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(int a) : rad(a) {}
double Sphere::getVolume() {
    return (4.0 / 3.0) * 3.14 * (rad * rad * rad);
}

int main() {
    Sphere sph1;
    cout << "구의 부피는" << sph1.getVolume() << endl;

    Sphere sph2(3);
    cout << "구의 부피는" << sph2.getVolume() << endl;
    return 0;
}
