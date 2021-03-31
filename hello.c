#include "stdio.h"

#define MAXLINE 100

int getlin(char line[], int MAX); 
void copy(char to[], char from[]); 
void prnt(int, char*);

//The program draws a histogram based on the number of words and their length. In the vertical position.
/*int main()
{
    int c = 0;
    int y = 0;
    int word = 0;
    int letter = 0;
    int acc[100] = {0};
    int acclet[200] = {0};
    int longlet = 0;
    
    while ((c = getchar()) != '\n')
    {     
      letter++; 
      if(c == ' ')
      {
        letter -= 1;
        acc[word] = letter;        
          if(longlet < letter){longlet = letter;}
        word++;
        letter = 0;
      }
    }
    y = longlet;
    for(int i=0; i<longlet; i++)
    {      
      for(int j=0; j<word; j++)
      {        
        if ((y-acc[j]) <= 0)
        {          
          printf("*");                   
        }else{
          printf(" ");
        }        
      }
      y--;  
      printf("\n");
    }
    //printf("word %d; longlet %d;\n", word, longlet);
    return 0;
}
*/
 
/*печать самой длинной строки*/

/* печать самой длинной строки */
int main()
{
	int len; /* длина текущей строки */
	int max; /* длина максимальной из просмотренных строк */
	char line[MAXLINE]; /* текущая строка */
	char longest[MAXLINE]; /* самая длинная строка */
	max = 0;	

	//prnt();

	while ((len = getlin(line, MAXLINE)) > 1)
	{
//		printf("%d", len);
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}	

	//if (max > 0)
	//	printf("%s", longest);
	prnt(max, longest);
	
	return 0;
}

/* getline: читает строку в s, возвращает длину */
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

/* copy: копирует из 'from' в 'to'; to достаточно большой */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

void prnt(int max, char *longest)
{
	if (max > 10)
	printf("%s", longest);
}

