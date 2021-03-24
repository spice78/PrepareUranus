#include "stdio.h"


int main()
{
    int c = 0;
    int p = 0;
    while ((c = getchar()) != EOF)
    {
      if(c == ' ')
        {p++;}
      else
        {p=0;}

      if(p<2)
        putchar(c);
    }
    //printf("%s", c);
    return 0;
}
