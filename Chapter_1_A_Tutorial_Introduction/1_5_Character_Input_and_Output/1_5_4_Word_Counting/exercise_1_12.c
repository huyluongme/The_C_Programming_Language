/*
 * File name:   exercise_1_12.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN  1
#define OUT 0
int main()
{
    int c, state = OUT;

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            if(state == IN) {
                state = OUT;
                putchar('\n');
            }
        }
        else{
            state = IN;
            putchar(c);
        }
    }
    return 0;
}
