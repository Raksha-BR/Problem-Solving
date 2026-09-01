//Returning FLoat value in main function, when the return type is int (It works)
//The compiler will convert the float value to int and return it. 
//The decimal part will be truncated (So the main returns 0 here => program ran successfully with no errors)
#include <iostream>
using namespace std;

int main(){
    cout<<"I am Raksha B R"<<endl;
    return 0.1;
}