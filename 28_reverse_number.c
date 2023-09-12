#include <stdio.h>

int main()
{
    int c, num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    for(c=num; c; c--){
        printf("%d\n", c);
    }
    return 0;
}