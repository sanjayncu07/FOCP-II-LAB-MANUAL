#include <iostream>
using namespace std;

class Swap {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter value of a: ";
        cin >> a;

        cout << "Enter value of b: ";
        cin >> b;
    }

    void swapNumbers() {
        a = a * b;
        b = a / b;
        a = a / b;
    }

    void display() {
        cout << "After swap:" << endl;
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Swap s1;      
    s1.getData();
    
    cout << "Before swap:" << endl;
    s1.display();   

    s1.swapNumbers();
    s1.display();

    return 0;
}
