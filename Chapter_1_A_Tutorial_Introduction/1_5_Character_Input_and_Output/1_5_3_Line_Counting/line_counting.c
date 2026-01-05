/*
 * File name:   line_counting.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Sample code copied from the book
 */

#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
    printf("%d\n", nl);
    return 0;
}
