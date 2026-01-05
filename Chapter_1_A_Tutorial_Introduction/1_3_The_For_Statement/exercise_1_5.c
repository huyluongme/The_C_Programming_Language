/*
 * File name:   exercise_1_5.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-5. Modify the temperature conversion program
 * to print the table in reverse order, from 300 degrees to 0.
 */

#include <stdio.h>

int main()
{
    int fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr -32));
    return 0;
}
