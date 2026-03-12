# Title : 2-1-5
# Author : Jeon sejin
# Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
    for (int n = 0; n < 4; n++) {
        for (int m = 0; m <= n; m++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
