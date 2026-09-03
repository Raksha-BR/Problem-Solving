//convert Celcius to Fahrenheit
/*
***************************
Celsius to Fahrenheit conversion:
°F = (°C × 9/5) + 32
***************************
*/
#include<iostream>
using namespace std;

int main(){

    double temp;
    char unit;

    cout<<"***************** Temperature Converter *******************\n";
    cout<<"F = Fahrenheit\n";
    cout<<"C = Celsius\n";
    cout<<"What unit would you like to convert to? ";
    cin>>unit;

    if(unit=='F'||unit=='f'){
        cout<<"Enter the temperature in Celsius: ";
        cin>>temp;
        cout<<temp<<" deg Celcius is equal to "<<((1.8*temp)+32)<<" deg Fahrenheit\n";
    }
    else if(unit=='C'||unit=='c'){
        cout<<"Enter the temperature in Fahrenheit: ";
        cin>>temp;
        cout<<temp<<" deg Fahrenheit is equal to "<<((temp-32)/1.8)<<" deg Celcius\n";
    }
    else{
        cout<<"Invalid temperature selected. Please select C or F\n";
    }
    cout<<"***********************************************************\n";

    return 0;
}
