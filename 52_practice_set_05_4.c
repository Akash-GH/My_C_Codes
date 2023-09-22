// creating fibonacci series function using recursion
#include <stdio.h>
int Fibonacci(int n);
int main()
{
    int n;
    printf("Enter the value of nth element: ");
    scanf("%d",&n);
    printf("The Fibonacci series of %d elements is %d \n",n,Fibonacci(n));
    return 0;
}
int Fibonacci(int n){
    if (n == 1){
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
    
}