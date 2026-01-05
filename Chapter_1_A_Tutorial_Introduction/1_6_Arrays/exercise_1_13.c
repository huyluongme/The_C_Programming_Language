/*
 * File name:   exercise_1_13.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        04-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-13. Write a program to print a histogram of the lengths of word in
 * its input. It is easy to draw the histogram with the bars horizontal; a vertial
 * orientations is more challenging.
 */

#include <stdio.h>

#define MAX_WORD    100
#define IN          1
#define OUT         0

int main()
{
    int c, i, j, max_len, nw, state, w_lens[MAX_WORD];
    
    for(i = 0; i < MAX_WORD; ++i)
        w_lens[i] = 0;

    state = OUT;
    nw = max_len = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else {
            if(state == OUT){
                state = IN;
                ++nw;
            }
            ++w_lens[nw - 1];
            if(max_len < w_lens[nw - 1])
                max_len = w_lens[nw - 1];
        }
    }

    printf("Horizontal Bar:\n");
    for(i = 0; i < nw; ++i) {
        printf("%3d: ", i + 1);
        for(j = 0; j < w_lens[i]; ++j)
            printf("*");
        printf("\n");
    }

    printf("\nVertical Bar:\n");
    for(i = max_len; i >= 1; --i) {
        for(j = 0; j < nw; ++j) {
            if(w_lens[j] >= i)
                printf("   *");
            else
                printf("    ");
        }
        printf("\n");
    }

    for(i = 0; i < nw; ++i)
        printf("%4d", i + 1);
    printf("\n");
    return 0;
}
