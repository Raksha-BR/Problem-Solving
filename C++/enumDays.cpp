//Display days in the week using `enum` datastructure
#include<iostream>
using namespace std;

enum Days{Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7};

int main(){
    Days today=Monday;

    switch(today){
        case Sunday:
            cout<<"It's Sunday!"<<endl;
            break;
        case Monday:
            cout<<"It's Monday!"<<endl;
            break;
        case Tuesday:
            cout<<"It's Tuesday!"<<endl;
            break;
        case Wednesday:
            cout<<"It's Wednesday!"<<endl;
            break;
        case Thursday:
            cout<<"It's Thursday!"<<endl;
            break;
        case Friday:
            cout<<"It's Friday!"<<endl;
            break;
        case Saturday:
            cout<<"It's Saturday!"<<endl;
            break;
        default:
            cout<<"Please enter the correct day"<<endl;
    }
    return 0;
}