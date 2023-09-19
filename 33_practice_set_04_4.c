#include <stdio.h>

int main()
{
    int num=10;
    int i = 1;
    int sum=0;
    while(i<=num){
        sum += i;
        i++;
    }
    printf("The sum of first ten natural numbers is %d\n",sum);
    return 0;
}