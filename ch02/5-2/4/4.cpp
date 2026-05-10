// Title : 5-2-4
// Author : Jeon sejin
// Data : 2026 5.10

#include <iostream>
using namespace std;
void get_parts(double num, int& a, double& b);
int main() {
    double num;
    int a;
    double b;
    cout << "실수를 입력하시오 : ";
    cin >> num;
    get_parts(num, a, b);
    cout << "정수부 : " << a << endl;
    cout << "소수부 : " << b << endl;
    return 0;
}

void get_parts(double num, int& a, double& b) {
    a = (int)num;
    b = num - a;
}
