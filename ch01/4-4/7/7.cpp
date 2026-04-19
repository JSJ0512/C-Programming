// Title : 4-4-7
// Author : Jeon sejin
// Data : 2026 4.17

#include <iostream>
using namespace std;
class Container {
    int size;
public:
    Container() : size(10) {}
    void fill() { size = 10; }
    bool consume(int n) {
        if (size < n) return false;
        size -= n;
        return true;
    }
    int getSize() { return size; }
};

class CoffeeVendingMachine {
    Container tong[3];
public:
    void fill() {
        for (int i = 0; i < 3; i++)
            tong[i].fill();
    }

    void show() {
        cout << "커피 " << tong[0].getSize()
            << ", 물 " << tong[1].getSize()
            << ", 설탕 " << tong[2].getSize() << endl;
    }

    bool make(int c, int w, int s, const string& name) {
        if (!tong[0].consume(c) ||
            !tong[1].consume(w) ||
            !tong[2].consume(s)) {
            cout << "원료가 부족합니다." << endl;
            return false;
        }
        cout << name << " 드세요" << endl;
        return true;
    }

    void run() {
        cout << "***** 커피자판기를 작동합니다. *****" << endl;
        fill();

        while (true) {
            int menu;
            cout << "메뉴(1:에스프레소 2:아메리카노 3:설탕커피 4:잔량 5:채우기) >> ";
            cin >> menu;

            if (menu == 1)
                make(1, 1, 0, "에스프레소");
            else if (menu == 2)
                make(1, 2, 0, "아메리카노");
            else if (menu == 3)
                make(1, 2, 1, "설탕커피");
            else if (menu == 4)
                show();
            else if (menu == 5) {
                fill();
                cout << "커피 10, 물 10, 설탕 10" << endl;
            }
        }
    }
};

int main() {
    CoffeeVendingMachine m;
    m.run();
}
