#include <iostream>
using namespace std;
class celsius{
private:
int f,c,temp;
public:
void celsiusGetData(){
    cout<<"Enter the fahrenheit:";
    cin>>f;
    c=(f-32)*5/9;
}
void display(){
    cout<<"Celsius="<<c;

}

};
int main(){
    celsius a1;
    a1.celsiusGetData();
    a1.display();
    return 0;
}