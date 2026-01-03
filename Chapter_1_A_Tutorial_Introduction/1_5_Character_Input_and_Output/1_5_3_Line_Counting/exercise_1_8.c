#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines */
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
