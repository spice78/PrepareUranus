#include "stdio.h"

int main()
{
    int c = 0;
    int word = 0;
    int letter = 0;
    int acc[10] = {0};
    int y = 0;
    
    while ((c = getchar()) != '\n')
    {     
      letter++; 
      if(c == ' ')
      {
        letter -= 1;
        acc[word] = letter;        
        word++;
        letter = 0;
      }
    }
    
    //printf("word %d;\n", word);
    for(int i = 0; i<acc[i]; i++)
    {
      for(int x=0; x<word; x++)
      {
        printf("\n");
      }
      printf("*");
    }
    return 0;
}
