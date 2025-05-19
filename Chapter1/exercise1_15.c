/* Exercise 1-15.  Rewrite the temperature conversion program of Section 1.2 to
use a function for conversion */

#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300;
floating point version*/

/* From page 13:
%d      print as decimal integer
%6d     print as decimal integer, at least 6 characters wide
%f      print as floating point
%6f     print as floating point, at least 6 characters wide
%.2f    print as floating point, 2 characters after decimal point
%6.2f   print as floating point, at least 6 wide and 2 after decimal point
*/

// Function prototype
float convertFahrCel(float fahr);

float upper = 300.0;
float step = 20.0;

int main(){

    printf("Fahrenheit Conversion Table:\n");
    printf("Fahrenheit\tCelsius\n");

    for(float fahr = 0.0; fahr <= upper; fahr = fahr + step){
        printf("%4.2f\t\t%4.2f\n", fahr, convertFahrCel(fahr));
    }
}

float convertFahrCel(float fahr){
    float celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}