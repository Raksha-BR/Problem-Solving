//Calculator program using `switch`
#include<iostream>
using namespace std;

int main(){
    
    char op;
    double num1, num2, result;

    cout<<"*************** CALCULATOR ***************"<<endl;

    cout<<"Enter either (+ - * /): "<<endl;
    cin>>op;

    switch(op){
        case '+':
            cout<<"Enter two numbers to add, separated by space: ";
            cin>>num1>>num2;
            cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
            break;
        
        case '-':
            cout<<"Enter two numbers to Subtract, separated by space: ";
            cin>>num1>>num2;
            cout<<"Difference of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
            break;
        
        case '*':
            cout<<"Enter two numbers to Multiply, separated by space: ";
            cin>>num1>>num2;
            cout<<"Product of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
            break;

        case '/':
            cout<<"Enter two numbers to divide, separated by space: ";
            cin>>num1>>num2;
            cout<<"Quotient of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
            break;
        
        default:
            cout<<"The input is an invalid operator\n";
    }

    cout<<"******************************************"<<endl;

    return 0;
}