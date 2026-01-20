#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    cout << "Before swap:"<<endl;
    cout << "a = " << a << ", b = " << b << endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After swap:"<<endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
