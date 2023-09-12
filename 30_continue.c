#include <stdio.h>

int main()
{
    int num;
    int c = 0; 
    printf("Enter the value of number: ");
    scanf("%d", &num);
    while(num > 0){
        c++;
        if (c!=num){
            continue;
        }
        else{
            printf("%d\n",c);
        }
    }
    return 0;
}