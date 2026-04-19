// Title : 4-4-4
// Author : Jeon sejin
// Data : 2026 4.17

#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "구입할 물품의 개수 >> ";
    cin >> a;

    int* price = new int[a];
    cout << "물품 " << a << "개의 가격 입력 >> ";
    for (int i = 0; i < a; i++) {
        cin >> price[i];
    }

    int min = price[0];
    int max = price[0];

    for (int i = 1; i < a; i++) {
        if (price[i] < min)
            min = price[i];
        if (price[i] > max)
            max = price[i];
    }

    cout << "제일 싼 가격은 " << min << endl;
    cout << "제일 비싼 가격은 " << max << endl;

    delete[] price;
    return 0;
}
