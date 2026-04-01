// Title : 3-5-4
// Author : Jeon sejin
// Data : 2026 4.1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Coffee {
private:
    int coffee, sugar, milk, water;
public:
    Coffee() {
        coffee = 10;
        sugar = 0;
        milk = 0;
        water = 0;
    }

    Coffee(int a, int b, int c, int d) {
        coffee = a;
        sugar = b;
        milk = c;
        water = d;
    }

    void show() {
        char aaa[10];

        strcpy(aaa, "coffee");
        cout << aaa << " ";
        for (int i = 0; i < coffee; i++) cout << "*";
        cout << endl;

        strcpy(aaa, "sugar");
        cout << aaa;
        if (sugar > 0) cout << " ";
        for (int i = 0; i < sugar; i++) cout << "*";
        cout << endl;

        strcpy(aaa, "milk");
        cout << aaa;
        if (milk > 0) cout << " ";
        for (int i = 0; i < milk; i++) cout << "*";
        cout << endl;

        strcpy(aaa, "water");
        cout << aaa;
        if (water > 0) cout << " ";
        for (int i = 0; i < water; i++) cout << "*";
        cout << endl;
    }
};

int main() {
    Coffee espresso;
    Coffee americano(5, 0, 0, 10);
    Coffee cappucchino(5, 1, 5, 2);
    Coffee mySweet(3, 7, 5, 5);

    espresso.show();
    cout << endl;
    mySweet.show();
}
