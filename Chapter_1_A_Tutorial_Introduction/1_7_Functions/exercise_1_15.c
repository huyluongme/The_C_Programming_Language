/*
 * File name:   exercise_1_15.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        04-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-15. Rewrite the temperature conversion program
 * of Section 1.2 to use a function for conversion.
 */

#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float convertFahrToCel(int fahr);

int main()
{
    float fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f %6.1f\n", fahr, convertFahrToCel(fahr));

    return 0;
}

float convertFahrToCel(int fahr)
{
    return (5.0 / 9.0) *  (fahr - 32.0);
}
