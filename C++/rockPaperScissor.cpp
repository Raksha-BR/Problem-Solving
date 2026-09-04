//Rock Paper Scissor game
#include<iostream>
#include<limits>
#include<ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
bool checkInput();

int main(){

    char player, computer;
    
    player = getUserChoice();
    cout<<"Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    cout<<"Computer's choice is: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    cout<<"Rock-Paper-Scissors Game\n";
    do{
        cout<<"Choose one of the following\n";
        cout<<"************************\n";
        cout<<"'r' for rock\n";
        cout<<"'p' for paper\n";
        cout<<"'s' for scissors\n";
        cin>>player;

        //If user entered string, then to clean the input buffer
        //Otherwise the loop runs the number of times = length of string
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){

    srand(time(NULL));
    int num = rand()%3+1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r': cout<<"ROCK\n";
            break;
        case 'p':cout<<"PAPER\n";
            break;
        case 's':cout<<"SCISSORS\n";
            break;
    }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': 
            if(computer == 'r'){cout<<"It's a tie\n";}
            else if(computer == 'p'){cout<<"You Loose :(\n";}
            else{cout<<"You WIN!!\n";}
            break;

        case 'p': 
            if(computer == 'p'){cout<<"It's a tie\n";}
            else if(computer == 's'){cout<<"You Loose :(\n";}
            else{cout<<"You WIN!!\n";}
            break;

        case 's': 
            if(computer == 's'){cout<<"It's a tie\n";}
            else if(computer == 'r'){cout<<"You Loose :(\n";}
            else{cout<<"You WIN!!\n";}
            break;
    }
}