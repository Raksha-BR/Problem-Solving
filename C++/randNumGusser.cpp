//Number Guessing game using `random number generator`
#include<iostream>
using namespace std;

int main(){

    int num, guess, tries=0;

    srand(time(NULL));
    num=(rand()%100)+1; //% has higher precedence than +

    cout<<"********************** NUMBER GUESSING GAME ************************\n";
    
    do{
        cout<<"Enter a guess between 1 to 100: ";
        cin>>guess;
        tries ++;

        if(guess>num){
            cout<<"Too high!\n";
        }
        else if(guess<num){
            cout<<"Too low!\n";
        }
        else{
            cout<<"CORRECT GUESS! # of tries: "<<tries<<"\n";
        }
    }while(guess != num);

    cout<<"********************************************************************\n";
    
    return 0;
}