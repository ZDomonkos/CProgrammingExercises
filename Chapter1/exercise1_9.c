/* Exercise 1-9. Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

/* count blanks, tabs, and newlines in input*/

int main(){

    int currentChar;
    int bl;

    //read current character
    while((currentChar = getchar()) != EOF){
        //if current character is ' ', increment counter
        if(currentChar == ' '){
            bl++;
            //if counter is larger than 1, don't putchar()
            if(bl > 1){
                ;
            }
            //else print ' '
            else{
                putchar(currentChar);
            }
        }
        //else print the char
        else{
            putchar(currentChar);
            bl = 0;
        }
    }
}