// Title : 4-2-4
// Author : Jeon sejin
// Data : 2026 4.8

#include <iostream>
using namespace std;
int main()
{
    cout << "입력할 실수의 개수를 입력하세요 : ";
    int a;
    cin >> a;
    if (a <= 0) return -1;

    double* p = new double[a];
    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return -1;
    }

    cout << a << "개의 실수를 입력하시오." << endl;
    for (int i = 0; i < a; i++) {
        cin >> p[i];
    }

    double max = p[0];
    for (int i = 1; i < a; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }
    cout << "최대값은 " << max << "입니다.";
    delete[] p;
}
