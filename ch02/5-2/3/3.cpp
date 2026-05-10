// Title : 5-2-3
// Author : Jeon sejin
// Data : 2026 5.10

#include <iostream>
using namespace std;
void swap(int& a, int& b);
int main() {
    int x, y;
    cout << "정수x를 입력 하시오: ";
    cin >> x;
    cout << "정수y를 입력 하시오: ";
    cin >> y;
    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
    swap(x, y);
    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;
    return 0;
}
void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
