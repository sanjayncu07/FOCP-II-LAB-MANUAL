#include <iostream>
using namespace std;
class Area{
    private:
float r,area;
public :
void areaGetData(){
cout<<"Enter the radius:";
cin>>r;
area=3.14*r*r;

}
void display(){
    cout<<"Area="<<area;
}
};
int main() {
    Area a1;
    a1.areaGetData();
    a1.display();
    return 0;
}