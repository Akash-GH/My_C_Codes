#include <stdio.h>

int main()
{
    int num;
    int m;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The multiplication table of entered number %d in reverse order is given below: \n",num);
    for (m = 10;m;m--) {
        printf("%d X %d = %d\n",num,m,num * m);
    }
    return 0;
}