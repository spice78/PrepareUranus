#include <stdio.h>

#define MAXLINE 100
#define NORM 10

int getlin(char line[], int MAX);
int copy(char to[NORM][MAXLINE], char from[]);
void prnt(char arr[NORM][MAXLINE], int);


/* печать строки от 10 символов*/
int main()
{
	int len;
	int max;
	int k = 0;
	int i = 0;
	char line[MAXLINE];
	char longest[MAXLINE];
	char Arm[NORM][MAXLINE];
	max = 0;	

	while ((len = getlin(line, MAXLINE)) > 1)
	{
		
		if ((len - 1) > 10) {
			k = copy(Arm, line);			
		}		
	}	

	prnt(Arm, k);
	
	return 0;
}

int getlin(char s[], int lim)
{
	int c = 0;
	int	i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
			++i;
	}
	s[i] = '\0';
		return i;
}

int copy(char to[NORM][MAXLINE], char from[])
{
	int i = 0;
	static int k = 0;

	while ((to[k][i] = from[i]) != '\0') {
		++i;		
	}
	k++;

return k;
}

void prnt(char arm[NORM][MAXLINE], int p)
{	
	int i = 0;
	for (int k = 0; k < p; k++) {
		while (arm[k][i] != '\n') {
			printf("%c", arm[k][i]);
			i++;
		}
		i = 0;
		printf("\n");
	}
}
