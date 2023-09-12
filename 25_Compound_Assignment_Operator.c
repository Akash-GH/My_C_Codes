#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("The value of a is ");
    scanf("%d", &a);
    printf("The value of b is ");
    scanf("%d", &b);
    printf("The value of a+=b is %d\n", a+=b);// First 'a+b' then that value is stored in 'a'
    printf("The value of a-=b is %d\n", a-=b);// Now that 'a' value is subtracted with 'b' and that is stored in 'a'
    printf("The value of a*=b is %d\n", a*=b);// Now that 'a' value is multiplied by 'b' and that is stored in 'a'
    printf("The value of a/=b is %d\n", a/=b);// Now that 'a' value is divided by 'b' 
    return 0;
}