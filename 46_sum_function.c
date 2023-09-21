#include <stdio.h>
// sum is a function whic takes a and b as inputs and return an integer as an output
int sum(int a, int b);// function prototype declaration
int main()
{
    int c;
    c = sum(2,5); //Function Call
    printf("The value of c is %d\n",c);
    return 0;
}
//Function definition
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}