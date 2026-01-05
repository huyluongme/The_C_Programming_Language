/*
 * File name:   exercise_1_9.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-9. Write a program to copy its input to its output,
 * replacing each string of one or more blanks by single blank.
 */

#include <stdio.h>

int main()
{
    int c, pre_c = ' ';

    while((c = getchar()) != EOF) {
        if(c != ' ')
            putchar(c);
        else
            if(pre_c != ' ')
                putchar(c);

        pre_c = c;
    }
    return 0;
}
