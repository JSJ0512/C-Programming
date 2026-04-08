// Title : 4-2-5
// Author : Jeon sejin
// Data : 2026 4.8

#include <iostream>
using namespace std;
int main()
{
    cout << "저장할 문자열의 크기를 입력하세요: ";
    int a;
    cin >> a;

    if (a <= 0) return -1;

    char* str = new char[a + 1];
    if (!str) {
        cout << "메모리를 할당할 수 없습니다.";
        return -1;
    }

    cout << "문자열을 입력하시오: ";
    cin.ignore();
    cin.getline(str, a + 1);
    cout << "입력한 문자열은 " << str << "입니다.";
    delete[] str;
}
