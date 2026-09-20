//The return from scanf
#include<stdio.h>
int main(){

    int v,a,b,c;
    v=scanf("%d %d %d",&a,&b,&c);
    printf("Value returned from scanf: %d\n",v);
    return 0;
}
/*
Input:
3 hi 6
Output:
Value returned from scanf: 1
************************************

1 2 6
Value returned from scanf: 3
***********************************

2 7 lrfkgjh
Value returned from scanf: 2
*/