// Print natural numbers from 10 to 20 while initial counter  is 0.
#include <stdio.h>

int main()
{
    int num = 0;
    printf("The natural numbers from 10 to 20 are: \n");
    while(num <= 20){
        if ( num >= 10){
            printf("%d \n",num);
        }
        num++; 
    }
    return 0;
}