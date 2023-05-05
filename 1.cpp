#include<iostream>
using namespace std;

struct complexCls {
    double re, img;
    complexCls(double r = 0, double i = 0) {
        re = r;
        img = i;
    }
    void setRe(double r) {
        re = r;
    }
    void setImg(double i) {
        img = i;
    }
    double getRe() {
        return re;
    }
    double getImg() {
        return img;
    }
    void set(double r = 0, double i = 0) {
        re = r;
        img = i;
    }
};

void f1() {
    complexCls c1(12, 4);
    cout << "Real Part: " << c1.getRe() << endl;
    cout << "Imaginary Part: " << c1.getImg() << endl;
}

int main() {
    f1();
    return 0;
}