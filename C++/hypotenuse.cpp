//Calculate hypotenus of a right anled triangle
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int length, breadth;
    cout<<"enter length and breadth of a triangle in the same order resp. ";
    cin>>length>>breadth;
    cout<<"hypotenus is "<<sqrt((length*length)+(pow(breadth,2)))<<endl;
}