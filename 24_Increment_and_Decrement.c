#include <stdio.h>

int main()
{
    int a = 5;
    int b = 9;
    printf("The value after a++ is %d \n", a++); // First printed then incremented
    printf("The value of a now is %d \n",a);// incremented value
    printf("The value after ++a is %d \n", ++a);// First incremented then printed
    printf("The value of a now is %d \n", a);
    printf("The value after b-- is %d \n", b--);// First printed then decremented
    printf("The value of b now is %d \n", b);// decremented value
    printf("The value after --b is %d \n", --b);//First decremented then printed
    printf("The value of b now is %d \n", b);
    return 0;
}