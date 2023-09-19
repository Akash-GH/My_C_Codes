#include <stdio.h>

int main()
{
    int num;
    int i = 2;
    int prime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(i < num){
        if(num % i == 0){
            prime = 0;
            break;
        }
        i++;
    }
    if(prime == 0) {
        printf("The entered number %d is not a prime number\n", num);
    }
    else{
        printf("The entered number %d is a prime number\n", num);
    }
    return 0;
}