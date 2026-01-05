/*
 * File name:   exercise_1_4.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        02-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-4. Write a program to print 
 * the corresponding Celsiue to Fahrenheit table
 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    printf("Celsiue   Fahr\n");
    while(celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
