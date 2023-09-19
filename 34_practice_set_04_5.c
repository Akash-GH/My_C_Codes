#include <stdio.h>

int main()
{
    int num =10;
    int i = 1;
    int sum=0;
    do{
        sum += i;
        i++;
    }while(i <= num);
    printf("The sum of first ten natural numbers is %d\n",sum);
    return 0;
}