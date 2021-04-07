#include "stdio.h"
#include "stdlib.h"

void temper();

#define Exit 96 // `
#define WATUNED 10
#define DIGIT c>='0' && c<='9'

int main()
{
    temper();
    
return EXIT_SUCCESS;
}

void temper()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("|*****|*******|\n|celc | fahr  |\n|-----|-------|\n");
    while (fahr <= upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf ("| %3.0f | %6.1f|\n", fahr, celsius);
        fahr = fahr + step;
    }
}