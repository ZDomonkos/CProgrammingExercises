/* Exercise 1-12. Write a program that prints its output one word per line. */

#include <stdio.h>

int main(){

    int currentChar;

    // while not end-of-file, grab user input
    while((currentChar = getchar()) != EOF){
        if(currentChar == ' ' || currentChar == '\n' || currentChar == '\t'){
            putchar('\n');
        }
        else{
            putchar(currentChar);
        }
    }
}