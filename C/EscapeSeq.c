//Escape sequence example
#include<stdio.h>
int main(){

    printf("Hii iam Raksha\n"); //Next line
    printf("This\timplements\ttabs\n"); //Tabs
    /*
    Does not append the the spaces after a word
    Works in multiple of 8

    After This, the cursor is at column 4 → first tab goes to column 8: 4 columns.
    `implements` is 10 characters, so the cursor goes from column 8 to 18.
    The next tab stop is column 24 → second tab moves 6 columns.
    */
    printf("Virus found\a\n"); //Beep sound as many times as `\a` is there
    printf("Greetings\b"); //Cursor moves backwards from current place
    printf("Xp\r"); //Cursor goes to the beginning of line
    printf("RM\n");
    /*
    Without `\n` at the end, we get the output: RMrakshabr@LAPTOP-AE147F4N:/mnt/d/CODE/Problem-Sol..

    This is because the cursor will be after the letter M, and the next input interface of terminal 
    will over-write the `eetingXp`
    
    ***************************************************************************************
    printf("Greetings\b"); //Cursor moves backwards from current place
    printf("Xp\r"); //Cursor goes to the beginning of line
    printf("RM\n");
    */
    return 0;

}

