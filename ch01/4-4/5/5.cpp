// Title : 4-4-5
// Author : Jeon sejin
// Data : 2026 4.17

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    string result = "";

    cout << "텍스트 입력(한글 안 됨) >> ";
    getline(cin, a);

    for (int i = 0; i < a.length(); i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z') ||
            (a[i] >= 'a' && a[i] <= 'z') ||
            a[i] == ' ') {
            result += a[i];
        }
    }

    cout << result << endl;
    return 0;
}
