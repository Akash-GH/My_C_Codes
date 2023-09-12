#include <stdio.h>

int main()
{
    int num;
    int c = 0; 
    printf("Enter the value of number: ");
    scanf("%d", &num);
    while(num > 0){
        printf("%d\n",c);
        if (c==5){
            break;
        }
        c++;
    }
    return 0;
}