#include <stdio.h>

int main()
{
    int m=1,t;
    int sum = 0;
    do{
        t = 8 * m;
        sum += t;
        m++;
    }while(m <= 10);
    printf("The sum of 8 X 1 to 8 X 10 is %d \n",sum);
    return 0;
}