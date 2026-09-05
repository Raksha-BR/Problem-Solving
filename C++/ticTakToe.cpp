//Tic Tac Toe
#include<iostream>
#include<ctime>
using namespace std;

void drawBoard(char *spaces); 
//Parameter is a ptr to an array named spaces (*space is a ptr to spaces)
//Spaces is a 1D array that will keep track of all the markers, like which spots are occupied and taken
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    //char spaces[9] = {} will initialize array with \0 - null chars, but we want empty chars - ' '
    char player = 'X', computer = 'O';
    bool running = true; //Game running condition
    //When we exit out of the game, we set `running` to false

    //As soon as the program starts, we need the board to be drawn
    drawBoard(spaces);//When we pass an array to a function, it decays into a ptr
    
    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            //The if condition becomes True, when there is a winner, then the while loop will stop
            //Ie., asking inputs will stop
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            //checkTie() returns true means there is `no space`
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    cout<<"Thanks for playing :)\n";

    return 0;
}

void drawBoard(char *spaces){

    //Grid
    cout<<"\n     |     |     \n";
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  \n";
    cout<<"     |     |     \n\n";
}

void playerMove(char *spaces, char player){

    int number; 
    //These will enter in a number between 1 and 9, depending on what space user wants to occupy with their marker

    do{
        cout<<"Enter a spot to place a marker (1-9): ";
        cin>>number;
        number--;

        if(spaces[number] == ' '){
            spaces[number]=player;
            break;
        }
    }while(true); //number between 0 and 8
    //0 is false, anything other than 0 is true
    //! has higher precedence than > or <
}

void computerMove(char *spaces, char computer){

    int number;
    srand(time(0));
    
    while(true){
        number=rand()%9;
        if(spaces[number]==' '){
            spaces[number]=computer;
            break;
        }
    }

}

bool checkWinner(char *spaces, char player, char computer){

    /*
    if(spaces[0] == spaces[1] && spaces[1] == spaces[2]), 
    Here, if the 1st col has all empty spaces, then it will take that somebody won, and we lost
    So we need to make sure that atleast 1 space in first row should not be empty
    */
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? cout<<"You WIN!\n" : cout<<"You Lose :(\n";
    }
    else{
        return false;
    }
    return true;
}

bool checkTie(char *spaces){

    //Iterate over the elements of spaces array
    for(int i=0; i<9; i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    cout<<"It's a TIE!\n";
    return true;
}