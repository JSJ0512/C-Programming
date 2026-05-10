// Title : 5-1-4
// Author : Jeon sejin
// Data : 2026 5.10

#include <iostream>
#include <string>
using namespace std;
void SwapString(string* a, string* b);
int main() {
    string s1("hello");
    string s2("world");
    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
    SwapString(&s1, &s2);
    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
}
void SwapString(string* a, string* b) {
    string temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
