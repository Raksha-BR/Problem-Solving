//Random event generator
//Lottery game generator
//We need seed to work with random numbers
#include<iostream>
#include<ctime>
//Access to the time function
using namespace std;

int main(){

    //Current time as the seed to generate random numbers
    srand(time(0));
    
    //Local variable to store random number
    /*
    To get numbers 1 to 5
    rand()%5 will give 0 to 4
    +1 will give 1 to 5
    */
    int randNum=rand()%5+1;

    switch (randNum){
        case 1:
            cout<<"You win a bumper sticker!\n";
            break;
        
        case 2:
            cout<<"You win a T-shirt!\n";
            break;

        case 3:
            cout<<"You win a free lunch!\n";
            break;

        case 4:
            cout<<"You win a gift card!\n";
            break;

        case 5:
            cout<<"You win concert tickets!\n";
            break;
    }


    return 0;
}