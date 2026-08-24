//GIven umber is odd or even
#include<iostream>
using std::cout;
using std::cin;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<(num%2 ? "odd" : "even")<<"\n";
    return 0;
}