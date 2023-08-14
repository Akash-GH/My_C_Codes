#include <stdio.h>

int main()
{
    int a = 10;
    int b = 2;
    int z = a * b; // legal
    //b * a = z; // illegal
    printf("The value of a + b is %d \n",a+b); // here +,-,*,/ are arithemetic operators. They cannot be assumed by user.
    printf("The value of a - b is %d \n",a-b);
    printf("The value of a * b is %d \n",a*b);
    printf("The value of a / b is %d \n",a/b);
    printf("The value of z is %d \n",z);
    printf("The value of remainder when 20 is divided by 3 is  %d \n",20%3); /*% is Modular division operator. 
    It gives value of remainder. It is not applied on float. It sign depends upon numerator */  
    printf("The value of 6 + 5 is %d \n",6+5); // int and int gives int
    printf("The value of 6 + 5.6 is %f \n",6+5.6);/* int and float gives float.
     Basically anyone of the operand is a real nmber then it will give real.*/
    return 0;
}