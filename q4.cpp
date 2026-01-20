#include <iostream>
using namespace std;
int main (){
int itemNo,quantity,unitPrice,amt,famt;
cout<<"Enter the item no.";
cin>>itemNo;
cout<<"enter the quantity";
cin>>quantity;
cout<<"enter the price of one unit";
cin>>unitPrice ;
amt=quantity*unitPrice;
cout<<"the total price is:"<<amt<< endl;
famt= amt-(amt*20/100);
cout<<"final price after discount is :"<<famt<<endl;


    return 0;
}