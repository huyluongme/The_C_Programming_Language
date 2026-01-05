/*
 * File name:   exercise_1_6.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        03-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main()
{
    int c;
    
    while((c = getchar()) != EOF)
        printf("getchar() != EOF is: %d\n", c != EOF);

    printf("getchar() != EOF is: %d\n", c != EOF);
    return 0;
}
