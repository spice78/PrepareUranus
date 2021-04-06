#include "stdio.h"

#define Exit 96 //it is '`'

int main()
{
    int c, np, nt, nl;    
    np = nt = nl = 0;    

    while((c = getchar()) != Exit)
    {if (c == '\n')
        ++nl;
    if (c == '\t')
        ++nt;
    if (c == ' ')
        ++np;    
    }    
    printf("blank = %d, tab = %d, new line = %d\n", np, nt, nl);
    
return 0;
}