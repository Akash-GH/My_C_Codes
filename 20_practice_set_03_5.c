// Program to check whether the entered character is in lowercase format or not.
#include <stdio.h>

int main()
{
    // ascii values 97 to 122 for a to z.
    char ch;
    printf("Enter the character: \n");
    scanf("%c",&ch);
    if ((ch <= 122) && (ch >= 97)){
        printf("The entered character is in lowercase format.\n");
    }
    else{
        printf("The entered character is not in lowercase format.\n");
    }

    return 0;
}