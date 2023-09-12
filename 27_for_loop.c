#include <stdio.h>

int main()
{
    int c, num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    for(c=0; c<=num; c++){
        printf("%d\n", c);
    }
    return 0;
}