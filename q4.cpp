#include <iostream>
using namespace std;

class Bill {
private:
    int itemNo, quantity, unitPrice;
    int amt, famt;

public:
    void getData() {
        cout << "Enter the item no: ";
        cin >> itemNo;

        cout << "Enter the quantity: ";
        cin >> quantity;

        cout << "Enter the price of one unit: ";
        cin >> unitPrice;
    }

    void calculate() {
        amt = quantity * unitPrice;
        famt = amt - (amt * 20 / 100);   
    }

    void display() {
        cout << "Total price = " << amt << endl;
        cout << "Final price after discount = " << famt << endl;
    }
};

int main() {
    Bill b1;        
    b1.getData();   
    b1.calculate();
    b1.display();

    return 0;
}
