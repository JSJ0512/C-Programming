// Title : 3-5-5
// Author : Jeon sejin
// Data : 2026 4.1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class CoffeeMachine {
private:
    int coffee,water,sugar;
public:
    CoffeeMachine(int c, int w, int s) {
        coffee = c, water = w, sugar = s;
    }

    void drinkEspresso() {
        if (coffee >= 1 && water >= 1) {
            coffee -= 1;
            water -= 1;
        }
    }
    void drinkAmericano() {
        if (coffee >= 1 && water >= 3) {
            coffee -= 1;
            water -= 3;
        }
    }
    void drinkSugarCoffee() {
        if (coffee >= 1 && water >= 2 && sugar >= 1) {
            coffee -= 1;
            water -= 2;
            sugar -= 1;
        }
    }
    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
    }
    void show() {
        char Machine[20];
        strcpy(Machine, "[머신 상태] ");
        cout << Machine;
        cout << "커피:" << coffee << " ";
        cout << "물:" << water << " ";
        cout << "설탕:" << sugar << endl;
    }
};

int main() {
    CoffeeMachine java(5, 10, 6);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}
