#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input to its output,
    replacing each string of one or more blanks by single blank */
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
