#include "stdio.h" 
#include "stdlib.h"

#define MAXLINE 1000 
#define Exit 96

int getlin(char line[], int);
void copy(char to[], char from[], int);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while ((len = getlin(line, MAXLINE)) > 1){
		copy(longest, line, len);	
		printf("%s", longest);}

	return EXIT_SUCCESS;
}

int getlin(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != Exit && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[], int lim)
{
	int i;
	i = 0;
	int max = lim-1;
	to[lim] = '\0';
	to[lim-1] = '\n';
	for (i = 0; i < max; ++i) {
		to[i] = from[lim-2];
		--lim;	
	}	
}
