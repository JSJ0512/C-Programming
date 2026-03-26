// Title : 3-1-3
// Author : Jeon sejin
// Data : 2026 3.18

#include <iostream>
using namespace std;
class Sphere { 
public:
    double rad = 2;  
    double getNum1(); 
    double getNum2(); 
};

double Sphere::getNum1() {
    return (4.0 / 3.0) * 3.14 * rad * rad * rad;
}

double Sphere::getNum2() {
    return 4 * 3.14 * rad * rad;
}

int main() {
    Sphere Sph; 
    cout << "구의 부피는 " << Sph.getNum1() << endl;
    cout << "구의 표면적은 " << Sph.getNum2() << endl;
}

	return 0;
}
