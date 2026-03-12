# Title : 2-2-3
# Author : Jeon sejin
# Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
	char num[10];
	char name[10];
	char address[50];

	cout << "학번을 입력하시오: ";
	cin >> num;

	cout << "이름을 입력하시오: ";
	cin >> name;
  
	cin.ignore();

	cout << "주소를 입력하시오: ";
	cin.getline(address, sizeof(address), '\n');

	cout << "\n1.학번:" << num << "\n";
	cout << "2.이름:" << name << "\n";
	cout << "3.주소:" << address;
	return 0;
}
