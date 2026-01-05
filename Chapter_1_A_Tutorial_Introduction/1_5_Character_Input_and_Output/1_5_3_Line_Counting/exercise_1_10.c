/*
 * File name:   exercise_1_10.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-10. Write a program to copy its input to its output,
 * replacing each rab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 */

#include <stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF) {
        if(c == '\t')
            printf("\\t");
        else if(c == '\b')
            printf("\\b");
        else if(c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
    return 0;
}
