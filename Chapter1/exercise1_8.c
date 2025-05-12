/* Exercise 1-8. Write a program to count blanks, tabs, ane newlines. */

#include <stdio.h>

/* count blanks, tabs, and newlines in input*/

int main(){

    int c;
    int bl, tb, nl = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            bl++;
        }
        else if(c == '\t'){
            tb++;
        }
        else if(c == '\n'){
            nl++;
        }
    }
    printf("\nTotal Blanks, Tabs, and Newlines:\n");
    printf("Blanks: %d\tTabs:%d\t\tNewlines:%d\n", bl, tb, nl);
}