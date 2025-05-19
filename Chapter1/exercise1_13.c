/* Exercise 1-13.  Write a program to print a histogram of the lengths of words in its inputs.
It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>

/* This program counts the lengths of words (words meaning any characters inbetween white space).
It then displays word lengths in a histogram from 0 to 9+.
I'm just going to do a horizontal because I don't feel like formatting a table right now.*/

int main(){

    int c, i , letterCount;
    int ndigit[10];

    letterCount = 0;
    for(i = 0; i < 10; i++){
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            ++ndigit[letterCount];
            letterCount = 0;
        }
        else{
            letterCount++;
        }
    }

    printf("\nWord Length Counter:");
    for(i = 0; i < 10; i++){
        printf("\n(%d): ", i);
        for(int j = 0; j < ndigit[i]; j++){
            printf("#");
        }
        printf("\n");
    }
}