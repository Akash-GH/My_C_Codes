#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 t0 100
    printf("The random number is %d\n",number);    
    return 0;
}