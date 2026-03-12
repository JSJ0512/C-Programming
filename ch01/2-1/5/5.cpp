# Title : 2-1-5
# Author : Jeon sejin
# Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
    for (int a = 0; a < 4; a++) {
        for (int b = 0; b <= a; b++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
