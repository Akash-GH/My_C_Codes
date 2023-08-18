#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: \n");
    scanf("%d",&year);
    // Evenly divisible by 400 means it is a leap year
    if (year % 400 == 0) {

        printf("The year %d is a leap year.\n",year);
    }
    // Evenly divisible by 100 means it is not a leap year
    else if (year % 100 == 0) {

        printf("The year %d is not a leap year.\n",year);
    }
    // Evenly divisible by 4 means it is a leap year
    else if (year % 4 == 0) {

        printf("The year %d is a leap year.\n",year);
    }
    else{

        printf("The year %d is not a leap year.\n",year);
    }

    return 0;
}