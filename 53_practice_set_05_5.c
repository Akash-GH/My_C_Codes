// Creating function using recursion to calculate sum of first n natural numbers
#include <stdio.h>
int SumofNaturalNumbers(int num);
int main()
{
    int num;
    printf("Enter the value: ");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers is %d \n",num,SumofNaturalNumbers(num));
    return 0;
}
int SumofNaturalNumbers(int num){
    if (num == 0){
        return num;
    }
    else{
        return num + SumofNaturalNumbers(num - 1);
    }
}