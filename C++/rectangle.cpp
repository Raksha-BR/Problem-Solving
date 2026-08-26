//rectangle made of synmbols (here for examples *)
/*
4*3 => 4 rows and 3 columns

***
***
***
***

*/

#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    char symbol;
    cout<<"enter row, columns and symbol in the same order resp. ";
    cin>>rows>>cols>>symbol;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<symbol;
        }
        cout<<endl;
    }
    return 0;
}