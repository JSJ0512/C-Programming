// Title : 5-1-5
// Author : Jeon sejin
// Data : 2026 5.10

#include <iostream>
#include <string>
using namespace std;
string GetLastString(string name[], int size);
int main() {
    string name[5];
    string a;
    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, name[i], '\n');
    }
    a = GetLastString(name, 5);
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << a << endl;
}
string GetLastString(string name[], int size) {
    string max = name[0];
    for (int i = 1; i < size; i++) {
        if (name[i] > max)
            max = name[i];
    }
    return max;
}
