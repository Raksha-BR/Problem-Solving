//Area of a square, side length is an input from user
#include<iostream>
using namespace std;

double area(double side);

int main(){
    double side;
    cout<<"Enter the side of a square ";
    cin>>side;
    cout<<"Area is "<<area(side)<<" cm^2"<<endl;
    return 0;
}

double area(double side){
    return side*side;
}