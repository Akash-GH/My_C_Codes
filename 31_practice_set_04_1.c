#include <stdio.h>

int main()
{
    int num;
    int m;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The multiplication table of entered number %d is given below: \n",num);
    for (m = 1;m <= 10;++m) {
        printf("%d X %d = %d\n",num,m,num * m);
    }
    return 0;
}