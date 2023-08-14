#include <stdio.h>

int main()
{
    int a,b,c,d; // This are type declaration instructions
    a=b=c=d=30;
    int i = 10,j;
    j=i;
    int k=2;
    int j1 = k + i - j;
    float l = 1.1;
    float m = 8.9 + l;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    printf("The value of c is %d\n",c);
    printf("The value of d is %d\n",d);
    printf("The value of j1 is %d\n",j1);
    printf("The value of m is %f\n",m);
    return 0;
}