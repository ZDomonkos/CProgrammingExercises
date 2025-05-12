/* Exercise 1-2. Experiment to find out what happens when printf's argument string
contains \c, where c is some character not listed above.*/

// Placing \c in printf causes a compilation warning and prints just 'c'.

#include <stdio.h>

int main(){
    printf("hello, ");
    printf("world");
    printf("\n");
}