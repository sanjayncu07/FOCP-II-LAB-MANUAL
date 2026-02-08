#include <iostream>
using namespace std;
class Year{
int year;
public:
void getData(){
    cout<<"Enter the year:";
    cin>>year;
}
void check(){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    cout << "Leap Year";
else
    cout << "Not a Leap Year";}

};
int main(){
Year Y;
Y.getData();
Y.check();
}