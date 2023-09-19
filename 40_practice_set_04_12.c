#include <stdio.h>

int main()
{
    int num;
    int i = 2;
    int prime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    do{
       if(num % i == 0){
            prime = 0;
            break;
    }
    i++;
    }while(i < num);
    if(prime == 0){
        printf("The entered number %d is not a prime number\n", num);
    }
    else{
        printf("The entered number %d is a prime number\n", num);
    }
    return 0;
}