/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300;
floating point version*/

/* From page 13:
%d      print as decimal integer
%6d     print as decimal integer, at least 6 characters wide
%f      print as floating point
%6f     print as floating point, at least 6 characters wide
%.2f    print as floating point, 2 characters after decimal point
%6.2f   print as floating point, at least 6 wide and 2 after decimal point
*/

int main(){

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius Conversion Table:\n");
    printf("Celsius\t\tFahrenheit\n");

    while(celsius <= upper){
        fahr = (celsius * (9.0/5.0) + 32);
        printf("%3.0f \t\t %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}