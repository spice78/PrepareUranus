#include "stdio.h" 
#include "stdlib.h"

#define MAXLINE 1000 
#define EXIT 96 //`
#define Ent 126//~
#define ON 1
#define OFF 0

void getlin(char line[], int);

int main()
{
	int max;
	char line[MAXLINE];	
	max = 0;
	while (1) {
		getlin(line, MAXLINE);
		printf("%s", line);
	}
	return EXIT_SUCCESS;
}

void getlin(char s[], int lim)
{
	int c, i, state;
	state = OFF;
	int nb = 0;
	for (i = 0; i < lim - 1 && (c = getchar()) != EXIT; ++i)
	{
		s[i] = c;
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {nb = 0;}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {s[i] = ' ', nb++;}		
		if (nb == 2) { --i; nb = 1; }
	}
	s[i] = '\0';
}
