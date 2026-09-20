//Return value of a function is considered as an argument for printf and scanf
#include<stdio.h>

int main(){
    int x;
    x=printf("Hello..");
    printf("%d",x);
    return 0;
}
/*
output:
Hello..7
*/