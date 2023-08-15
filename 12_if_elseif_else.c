#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("The number is completely divisible by 2\n");
    }
    else if (num%5 == 0){
        printf("The number is completely divisible by 5\n");
    }
    else if (num%7 == 0){
        printf("The number is completely divisible by 7\n");
    }
    else{
        printf("The number is not completely divisible by 2,5 and 7\n");
    }
    return 0;
}