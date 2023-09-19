#include <stdio.h>

int main()
{
    int num =10;
    int i;
    int sum=0;
    for(i = 0; i <=10; i++){
        sum = sum + i;
    }
    printf("The sum of first ten natural numbers is %d\n",sum);
    return 0;
}