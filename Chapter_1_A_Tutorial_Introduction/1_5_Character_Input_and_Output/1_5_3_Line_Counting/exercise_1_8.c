/*
 * File name:   exercise_1_8.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main()
{
    int c, nb = 0, nt = 0, nl = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++nb;
        if(c == '\t')
            ++nt;
        if(c == '\n')
            ++nl;
    }
    
    printf("blank: %d - tab: %d - newline: %d\n", nb, nt, nl);
    return 0;
}
