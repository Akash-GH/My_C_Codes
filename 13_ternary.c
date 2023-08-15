#include <stdio.h>

int main()
{
    int a;
    printf("Enter your value of a: ");
    scanf("%d",&a);
    // ? and : are called as Ternary Operators. They are used to create short hand if else statement.
    //? for if expression and : for if expression is false
    (a < 5) ? printf("A is less than 5 \n") : printf("A is not less than 5\n");
    return 0;
}