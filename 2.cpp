#include <iostream>

using namespace std;

struct ComplexCls {
    double re = 0, img = 0;

    void set(double r = 0, double i = 0) {
        re = r;
        img = i;
    }

    void print() {
        cout << '(' << re << ',' << img << ')' << endl;
    }

    void input() {
        cout << "Enter real part: ";
        cin >> re;
        cout << "Enter imaginary part: ";
        cin >> img;
    }
};

void f1(ComplexCls c1) {
    c1.re = 12;
    c1.print();
    c1.set(12, 14);
    c1.print();
}

int main() {
    ComplexCls c1;
    f1(c1);
    return 0;
}
