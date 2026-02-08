#include <iostream>
using namespace std;
class Avg{
private:
int a,b,c,avg;

public:
void avgGetData(){
cout<<"Enter the marks of subject 1:";
cin>>a;
cout<<"Enter the marks of subject 2:";
cin>>b;
cout<<"Enter the marks of subject 3:";
cin>>c;
avg=(a+b+c)/3;
}
void display(){
    cout<<"Average="<<avg;
}
};
int main() {
    Avg a1;
    a1.avgGetData();
    a1.display();
    return 0;
}
