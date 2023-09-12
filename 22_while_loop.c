#include <stdio.h>

int main()
{
    int a;
    printf("Value of a: ");
    scanf("%d",&a);
    while(a < 10){
        printf("%d\n",a);
        a++;
    }
    printf("The value of a i.e. %d is not lesser than 10 so while loop will not be executed.\n",a);
    return 0;
}