# Title : 2-2-6
# Author : Jeon sejin
# Data : 2026 3.12

#include <iostream>
using namespace std;
int main() {
    char line[1000];

    while (true) {
        cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>>";

        cin.getline(line, 1000);

        if (line[0] == 'e' && line[1] == 'x' && line[2] == 'i' && line[3] == 't' && line[4] == '\0')
            break;

        int count = 0;

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != ' ' && (i == 0 || line[i - 1] == ' ')) {
                count++;
            }
        }
         cout << "단어의 개수는 " << count << "개이다." << endl;
    }
    return 0;
}
