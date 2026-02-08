#include <iostream>
using namespace std;
   class Alphabet{
char ch;
public:
void getData(){
    cout<<"Enter the letter";
    cin>>ch;
}
void Vowel(){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'
    )
    cout<<"Vowel";
else cout<<"Consonant";
}
   };
   int main(){
    Alphabet A;
    A.getData();
    A.Vowel();
   }