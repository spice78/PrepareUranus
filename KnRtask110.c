#include "stdio.h"

#define Exit 96

int main()
{
    int c, nb;    
    nb = 0;    

    while((c = getchar()) != Exit)
    {
        if (c == ' '){nb++;}
        else{nb = 0;}
        
        if (nb == 2){--nb;putchar('\b');}
        putchar(c);     
    }    
       
return 0;
}