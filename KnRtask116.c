#include "stdio.h" 
#include "stdlib.h"
 
#define MAXLINE 1000 
#define Exit 96
 
int getlin(char line[]); 
void copy(char to[], char from[]); 
 
int main() 
{ 
    int len; 
    int max;
    char line[MAXLINE]; 
    char longest[MAXLINE];
    max = 0; 
    while ((len = getlin(line)) > 1) 
        if (len > max) { 
            max = len; 
            copy(longest, line); 
        } 
    if (max > 0) 
        printf("%s", longest);

return EXIT_SUCCESS; 
} 

int getlin(char s[]) 
{ 
    int c, i; 
    for (i = 0; i < (c = getchar()) != Exit && c != '\n'; ++i) 
        s[i] = c; 
    if (c == '\n'){ 
        s[i] = c; 
        ++i; 
    } 
    s[i] = '\0'; 
    return i; 
} 

void copy(char to[], char from[]) 
{ 
    int i; 
    i = 0; 
    while ((to[i] = from[i]) != '\0') 
        ++i; 
} 
