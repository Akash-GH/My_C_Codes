/* Program to print the following pattern :

*
***
*****
*******
*/
#include <stdio.h>
void PrintPattern(int n);
int main()
{
    int n;
    printf("Number of lines: ");
    scanf("%d",&n);
    PrintPattern(n);
    return 0;
}
void PrintPattern(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=(2*i - 1);j++){
            printf("*");
        }
        printf("\n");
    }
}