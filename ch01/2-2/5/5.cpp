# Title : 2-2-5
# Author : Jeon sejin
# Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
	char text[100];
	int a = 0;

	cout << "빈칸 없이 문자열을 입력하세요>>";

	cin.getline(text, sizeof(text), '\n');

	while (text[a] !='\0') {
		cout << text[a] << " ";
		a++;
	}
	return 0;
}
