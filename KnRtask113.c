#include "stdio.h"

//The program draws a histogram based on the number of words and their length. In the vertical position.
int main()
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