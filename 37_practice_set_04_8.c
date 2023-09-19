#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    int factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i <= num){
        factorial *= i;
        i++;
    }
    printf("The factorial of given number %d is %d\n",num,factorial);
    return 0;
}