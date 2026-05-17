// Title : 5-4-4
// Author : Jeon sejin
// Data : 2026 5.17

(1) 
    
#include <iostream>
using namespace std;
class Collector {
    int* p;
    int size = 0;
    public:
    Collector(int size, int values[]) {
        this->size = size;
        p = new int[size];
        for (int i = 0; i < size; i++) {
            p[i] = values[i];
        }
    }
    void show() {
        cout << "데이터 수 " << size << ": ";
        for (int i = 0; i < size; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    int getSize() { return size; }
    int get(int index) { return p[index]; }
};
double calcAvg(Collector c) {
    int sum = 0;
    for (int i = 0; i < c.getSize(); i++) {
        sum += c.get(i);
    }
    return (double)sum / c.getSize();
}
int main() {
    int temp[] = { 69,70,71,72,74 };
    Collector weight(4, temp);
    double avg = calcAvg(weight);
    weight.show();
    cout << "평균은 " << avg << endl;
}

(3)

class Collector {
    int* p;
    int size = 0;
public:
    Collector(int size, int values[]) {
        this->size = size;
        p = new int[size];
        for (int i = 0; i < size; i++) {
            p[i] = values[i];
        }
    }
    Collector(const Collector& src) {
        size = src.size;
        p = new int[size];
        for (int i = 0; i < size; i++) {
            p[i] = src.p[i];
        }
    }
    ~Collector() {
        delete[] p;
    }
    void show() {
        cout << "데이터 수 " << size << ": ";
        for (int i = 0; i < size; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    int getSize() { return size; }
    int get(int index) { return p[index]; }
};
