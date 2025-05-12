/* Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

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