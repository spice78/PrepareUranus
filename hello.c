#include "stdio.h"
#include "stdlib.h"

#define Exit 96 // `
#define DIGIT c>='0' && c<='9'

int main()
{
    int c;
	while((c=getchar())!=Exit){		
		if(DIGIT){return printf("Digit");}
		return printf("No digit");		
	}
    
return EXIT_SUCCESS;
}
