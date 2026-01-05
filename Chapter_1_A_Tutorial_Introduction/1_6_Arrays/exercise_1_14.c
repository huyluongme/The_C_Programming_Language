/*
 * File name:   exercise_1_14.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        04-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-14. Write a program to print a histogram of
 * the frequencies of different characters in its input.
 */

#include <stdio.h>

#define ASCII_MAX   128

int main()
{
    int c, i, freq[ASCII_MAX];

    for(i = 0; i < ASCII_MAX; ++i)
        freq[i] = 0;

    while((c = getchar()) != EOF)
        ++freq[c];

    for(i = 0; i < ASCII_MAX; ++i)
        if(i >= '!' && i <= '~')
            printf("[%03d][%c]:              %d\n", i, i, freq[i]);
        else
            printf("[%03d]<can't print>:    %d\n", i, freq[i]);
    return 0;
}
