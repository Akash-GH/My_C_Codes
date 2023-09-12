#include <stdio.h>

int main()
{
    int c = 0;
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    do {
        printf("%d\n", c);
        c++;
    }while(c <= num);
    return 0;
}