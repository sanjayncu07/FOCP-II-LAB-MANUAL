#include <iostream>
using namespace std;
int main (){
int no_of_empl,salary,bonus,net_salary,total;
cout<<"Enter the no. of employees:"<<endl;
cin>>no_of_empl;
cout<<"enter the basic salary:"<<endl;
cin>>salary;
bonus=salary*12/100;
cout<<"Bonus is :"<<bonus<<endl;
net_salary=bonus+salary;
cout<<"Net salary for each worker is:"<<net_salary<<endl;
total=net_salary*no_of_empl;
cout<<"the net salary given to all employees:"<<total<<endl;
return 0; 

}