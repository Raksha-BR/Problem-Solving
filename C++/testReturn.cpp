// Even when the return type for main function is int, we can return a float value.
// The compiler will convert the float value to int and return it. 
// The decimal part will be truncated.
#include <iostream>
using namespace std;

int main(){
    cout<<"I am Raksha B R"<<endl;
    return 0.1;
}