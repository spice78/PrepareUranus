#include "stdio.h"
#include "stdlib.h"

#define IN 1
#define OUT 0
#define Exit 96 // `

int main()
{
    int c, state;
    state = OUT;
    
    while ((c = getchar()) != Exit)
    {  
        if (c == ' ' || c == '\t'){state = 1;putchar('\n');}
        else {state = 0;}
        if(!state){putchar(c);}
    }    
return EXIT_SUCCESS;
}