//Implementing getLine function to take string as input from user
//Reads inputs separated by space, until it encounters `enter or newline`
#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your full name ";
    getline(cin, name);
    cout<<"Hi "<<name<<endl;
    return 0;
}