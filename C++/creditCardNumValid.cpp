//Whether credit-card number is valid or not using Luhn's Algorithm
/*
Credit card no.s:
378282246310005
5610591081018250
6011000990139424
*/
#include<iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main(){

    string cardNumber;
    int result = 0;

    cout<<"Enter a Credit card number: ";
    cin>>cardNumber;

    result = sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);
    
    result%10==0 ? cout<<"This is a VALID credit card number\n" : cout<<"This is an INVALID credit card number\n"; 
    return 0;
}

int getDigit(const int number){

    //If we get 2 digits (ie., 9*2=18), then we need to return the sum of these digits(ie., 1+8=9)
    return number % 10 + ((number / 10) % 10);
}

int sumOddDigits(const string cardNumber){

    int sum = 0;
    for(int i=cardNumber.size()-1; i>=0; i-=2){
        sum += cardNumber[i] - '0'; 
        //To get actual digits sum, rather than the typecasted ascii digits sum
    }
    return sum;
}

int sumEvenDigits(const string cardNumber){

    int sum = 0;

    //Treat stirng as a character and iterate over them
    //We need to iterae over the card number in reverse order
    /*
    cardNumber.size() will give 10 for 10 digits
    cardNumber.size() - 1 because the number starts from 0
    cardNumber.size() -2 because we need the second digit from last
    */
   //Here, our index i will begin from 2nd to last digit
    for(int i=cardNumber.size()-2; i>=0; i-=2){
        sum+=getDigit((cardNumber[i]-'0')*2);
        /*
        cardNumber[i] is a character array, means the ascii value of the character will be sent
        For digits the ASCII statrs from 48 - '0' and goes till 57 - '9'
        Since the chars occupy 1byte, the subtraction of acsii numbers will yeild the actual digits
        Ex: 57-48 = 9
            51-48 = 3
            ...
        
        If we don't do this, then the `getDigit()` function will take in 57 for 9 and 51 for 3 ...
        */
    }
    return sum;
}
