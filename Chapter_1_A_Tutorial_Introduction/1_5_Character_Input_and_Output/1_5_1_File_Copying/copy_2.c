/*
 * File name:   copy_2.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Sample code copied from the book
 */

#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
    int c;

    while((c = getchar()) != EOF)
        putchar(c);
    return 0;
}
