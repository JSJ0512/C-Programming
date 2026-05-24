// Title : 6-1-2
// Author : Jeon sejin
// Data : 2026 5.21

#include <iostream>
#include <string>
using namespace std;

int big(int, int);
double big(double, double);
string big(string, string);

int main() {
    int x = big(10, 20);
    cout << "큰 정수값은 " << x << endl;
    double y = big(3.14, 1.05);
    cout << "큰 실수값은 " << y << endl;
    string z = big("hello", "world");
    cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
    return 0;
}

int big(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
double big(double a, double b) {
    if (a > b)
        return a;
    else
        return b;
}
string big(string a, string b) {
    if (a > b)
        return a;
    else
        return b;
}
