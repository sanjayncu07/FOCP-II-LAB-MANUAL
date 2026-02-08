#include <iostream>
using namespace std;

class Employee {
private:
    int no_of_empl;
    int salary, bonus, net_salary, total;

public:
    void getData() {
        cout << "Enter the number of employees: ";
        cin >> no_of_empl;
        cout << "Enter the basic salary of each employee: ";
        cin >> salary;
    }

    void calculate() {
        bonus = salary * 12 / 100;
        net_salary = salary + bonus;
        total = net_salary * no_of_empl;
    }

    void display() {
        cout << "Bonus for each employee = " << bonus << endl;
        cout << "Net salary for each employee = " << net_salary << endl;
        cout << "Total salary given to all employees = " << total << endl;
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.calculate();
    emp.display();
    return 0;
}
