/* Exercise 1-7. Write a program to print the value of EOF. */

#include <stdio.h>

/* copy input to output; 2nd version */

int main(){

    int c;

    if(c = (getchar() != EOF)){
        printf("%d. EOF not invoked. (Ctrl-D)\n", c);
    }
    else{
        printf("%d. EOF Invoked. (Ctrl-D)\n", c);
    }
}