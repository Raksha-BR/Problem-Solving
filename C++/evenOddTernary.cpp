//Given number is odd or even using ternary operator
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