// A program to get average of three numbers by making average function.
#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int num1, num2, num3;
    printf("Enter the value of first number: ");
    scanf("%d",&num1);
    printf("Enter the value of second number: ");
    scanf("%d",&num2);
    printf("Enter the value of third number: ");
    scanf("%d",&num3);
    printf("The average value of given three numbers is %f\n",average(num1,num2,num3));
    return 0;
}
float average(int a, int b, int c){
    float result = (float) (a+b+c)/3;
    return result;
}