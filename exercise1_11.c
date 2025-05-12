/* Exercise 1-11. How would you test the word count program?
What kinds of input are most likely to unewCharacterCountover bugs if there are any. */

#include <stdio.h>

// inside a word
#define IN  1
// outside a word
#define OUT 0

// count lines, words, and characters in input

int main(){

    // declare int variables
    int currentChar, newLineCount, newWordCount, newCharacterCount, state;

    // initialize state to outside of word
    state = OUT;
    // initialize counts to zero
    newLineCount = newWordCount = newCharacterCount = 0;
    // while not end-of-file, grab user input
    while((currentChar = getchar()) != EOF){
        // increment character counter
        newCharacterCount++;
        // if a newline is found, increment newline counter
        if(currentChar == '\n'){
            newLineCount++;
        }
        // if a blank, newline, or tab are found, place state outside of word
        if(currentChar == ' ' || currentChar == '\n' || currentChar == '\t'){
            state = OUT;
        }
        // else if state is out of word, place state inside of word and increment word counter
        else if(state == OUT){
            state = IN;
            newWordCount++;
        }

    }
    // print a counted variables
    printf("\n%d, %d, %d\n", newCharacterCount, newWordCount, newLineCount);

}