#include "stdio.h" 
#include "stdlib.h"

#define MAXLINE 1000 
#define Exit 96
#define DETAB 4 

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlin(void);
void tabula(int);

int main()
{
	int len;
	extern int max;
	extern char longest[MAXLINE];
	max = 0;
	while ((len = getlin()) > 1)
	{
		tabula(len);
		printf("%s", longest);
	}
	return EXIT_SUCCESS;
}

int getlin()
{
	int c, i, k;
	extern char line[];
	k = 0;

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != Exit && c != '\n'; ++i)
	{
		line[i] = c;
		if (line[i] == '\t') { k = k + (DETAB+1); }
	}
	
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i+k;
}

void tabula(int lim)
{
	int i, k, l;
	extern char line[];
	i = 0;
	k = 0;	
	
	for (i = 0; i < lim; ++i)
	{
		longest[k] = line[i];
		++k;
		if (line[i] == '\t') 
		{ 			
			for (l = -1; l < DETAB; ++l) { longest[k+l] = '*'; }
			longest[k+DETAB] = line[i+1];
			k=k+ DETAB;
		}		
	}
}
