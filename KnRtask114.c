#include "stdio.h"
#include "stdlib.h"

#define Exit 96 // `
#define WATUNED 10

int main()
{
    int c, i, g;
    g = 0;
    int ndigit[WATUNED];    
    for( i=0; i<WATUNED; ++i){ndigit[i]=0;}
    while(( c=getchar()) != Exit)
    {
        if( c>='0' && c<='9'){++ndigit[c-'0'];
        }             
    }
    for(i=0; i<WATUNED; i++){
        if(!ndigit[i]){printf("0");}
        if(ndigit[i]){
            for(g=0; g<ndigit[i]; g++){
                printf("*");                   
            }
        }
        printf("\n");
    }
    
return EXIT_SUCCESS;
}