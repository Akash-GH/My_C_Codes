/*
Logical Operators are as follows:
&& : AND  both the condition should be true inorder to get true or output will be false
|| : OR either one of the condition should be true inorder to get true and if both the condition is false then 
outut will be false
! : NOT give false for true and true for false
*/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age <= 70 && age >= 17){
        printf("Your age is between 18 to 70. So you can drive\n");
    }
    else{
        printf("You cannot drive!\n");
    }
    return 0;
}