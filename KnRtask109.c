#include "stdio.h"

#define Exit 96//it is '`'

int main()
{
    int c, nb;    
    nb = 0;    

    while((c = getchar()) != Exit)
    {
        /*if (c == ' '){nb++;}//from internets
        else{nb = 0;}
        
        if (nb == 2){--nb;putchar('\b');}
        putchar(c);*/

        if(c == ' '){nb = 1;}//from my mind
        else {nb=0;}
        if(!nb){putchar(c);printf(" ");}                     
    }    
       
return 0;
}