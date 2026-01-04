#include <stdio.h>

/* Exercise 1-14. Write a program to print a histogram of 
    the frequencies of different characters in its input. */
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
