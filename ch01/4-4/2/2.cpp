// Title : 4-4-2
// Author : Jeon sejin
// Data : 2026 4.17

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    string result = "";
    int count = 1;

    while (true) {
        cout << "문자열 입력 : ";
        getline(cin, a);

        if (a == "quit")
            break;

        result += "<" + to_string(count) + ">" + a;
        cout << "이어진 문자열: " << result << endl;
        count++;
    }
    return 0;
}
