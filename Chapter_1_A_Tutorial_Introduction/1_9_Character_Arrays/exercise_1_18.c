/*
 * File name:   exercise_1_18.c
 * Author:      Huy Luong Duc <huyluongme.cs@gmail.com>
 * Date:        05-Jan-2025
 *
 * [SECOND EDITION] The C Programming Language
 * by Brian W.Kernighan and Dennis M.Ritchie
 *
 * Exercise 1-18. Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0) {
        while(len > 0 && (line[len - 2] == ' ' || line[len - 2] == '\t'))
            --len;
        if(len > 1) {
            line[len - 1] = '\n';
            line[len] = '\0';
            printf("%s", line);
        }
    }
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

