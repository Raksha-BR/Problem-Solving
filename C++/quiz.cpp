//Quiz game using Multi-dimentional array
#include<iostream>
using namespace std;

int main(){

    //Array of questions
    string questions[] = {"1. What year was C++ created? ",
                            "2. Who invented C++? ",
                        "3. What is the predecessor of C++? ",
                        "4. Is Earth flat? "};
    
    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Cena", "D. Mark Zukenberg"},
                            {"A. C", "B. C+", "C. C--", "D. B++"},
                            {"A. yes", "B. no", "C. sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i=0; i<size; i++){
        cout<<"*****************************\n";
        cout<<questions[i]<<'\n';
        cout<<"*****************************\n";
        for(int j=0; j<(sizeof(options[i])/sizeof(options[i][0])); j++){
            cout<<options[i][j]<<'\n';
        }
        cin>>guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout<<"CORRECT!\n";
            score++;
        }
        else{
            cout<<"WRONG :(\n";
            cout<<"Answer: "<<answerKey[i]<<'\n';
        }
    }
    cout<<"*****************************\n";
    cout<<"           RESULT            \n";
    cout<<"*****************************\n";
    cout<<"CORRECT GUESSES: "<<score<<'\n';
    cout<<"# of Questions: "<<size<<'\n';
    cout<<"SCORE: "<<(score/(double)size)*100 << "%\n"; 
    //For the double cast division (if 1 operand is double, the entire operation becomes double)

    return 0;
}