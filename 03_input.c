#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a); // scanf is used to take user input and & is address of operator
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Sum of %d and %d is %d \n",a,b,a+b);
    return 0; // this is given inorder to complete program
}