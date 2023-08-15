/*
Relational Operators are as follows:
== : Equal to. Note: '=' is used to assigned value to variable and any non-zero value will return True whereas '==' is 
used for equality check.
> : greater than
< : lesser than
>= : greater than or equal to
<= : lesser than or equal to
!= : Not Equal to
*/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age < 18){
        printf("You are underage so you cannot drive\n");
    }
    else if (age >= 90){
        printf("You are too old to drive.\n");
    }
    else{
        printf("You can drive!\n");
    }
    return 0;
}