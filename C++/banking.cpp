//Banking program using functions
//Deposit, Withdraw and show the balance

#include<iostream>
#include<iomanip>
#include<limits>
// To handle invalid input and clear the input buffer
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
bool checkInput();

int main(){

    double balance=0;
    int choice=0;

    do{
        cout<<"*****************\n";
        cout<<"Enter your choice: ";
        cout<<"\n*****************\n";
        cout<<"1. Show Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n";
        cin>>choice;
        
        if(!checkInput()){
            continue;
        }

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout<<"Thanks for visiting!\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    cout<<"Your balance is Rs. "<<setprecision(2)<<fixed<<balance<<"\n";
}

double deposit(){
    double amount=0;
    cout<<"Enter amount to be deposted: ";
    cin>>amount;

    if(!checkInput()){
            return 0;
    }

    //TO prevent negative deposit
    if(amount>0){
        return amount;
    }
    else{
        cout<<"That's not a valid amount\n";
        return 0;
    }
    
}

double withdraw(double balance){
    double amount = 0;
    cout<<"Enter amount to be withdrawn: ";
    cin>>amount;

    if(!checkInput()){
        return 0;
    }

    //To prevent user from over-drafting their account (withdrawing more than the available balance)
    if(amount>balance){
        cout<<"Insufficient funds\n";
        return 0;
    }
    else if(amount<0){
        cout<<"That's not a valid input\n";
        return 0;
    }
    return amount;
}

bool checkInput(){
    if(cin.fail()){
            cin.clear(); // Reset any error flags, when the `stdin` fails to interpret any input
            cin.ignore(numeric_limits<streamsize>::max(),'\n'); //clean the input buffer
            cout<<"Invalid input\n";
            return false;
        }
        return true;
}