#include <stdio.h>

int main()
{
    int principal=100,rate=7,years=2;
    int simple_interest = (principal*rate*years)/100;
    printf("Simple Interest is %d \n",simple_interest);
    return 0;
}