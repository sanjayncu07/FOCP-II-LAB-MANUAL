#include <iostream>
using namespace std;
class Event{
int event_id;
public:
void getData(){
    cout<<"Enter the event ID:";
    cin>>event_id;

}
void eventId(){
    if(event_id%3==0 && event_id%5==0)
    cout<<"Buzz & Fuzz";
    else if(event_id%3==0)
    cout<<"buzz";
    else if(event_id%5==0)
    cout<<"fuzz";
    else cout<<"nil";
}

};

int main(){
    Event E;
    E.getData();
    E.eventId();
}