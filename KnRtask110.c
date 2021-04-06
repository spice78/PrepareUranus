#include "stdio.h"

#define Exit 96 //it is '`'

int main()
{
    int c, i;    
    i = 0;    

    while((c = getchar()) != Exit)
    {
        if (c == '\t' || c == ' ' || c == '\\')
        {
            i=1;
            if(c == '\t'){putchar('\\');putchar('t');putchar('\\');}
            if(c == ' '){putchar('\\');putchar('b');putchar('\\');}
            if(c == '\\'){putchar('\\');putchar('s');putchar('\\');}       
        }
        else{i=0;}

        if(!i){putchar(c);}
    }    
    
    
return 0;
}