#include <stdio.h>

int main()
{
    int num;
    int i;
    int prime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i=2; i < num; i++){
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 0) {
        printf("The entered number %d is not a prime number\n", num);
    }
    else{
        printf("The entered number %d is a prime number\n", num);
    }
    return 0;
}