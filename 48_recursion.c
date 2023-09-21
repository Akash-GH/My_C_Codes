#include <stdio.h>
int factorial(int x);

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int f = factorial(number);
    printf("The factorial of entered number %d is %d\n",number,f);
    return 0;
}
int factorial(int x){
    if (x==1 || x== 1){
        return 1;
    }
    else{
        int f = factorial(x-1) * x;
        return f; 
    }
}