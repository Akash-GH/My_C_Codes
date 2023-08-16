#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>100)
   {
    /* Marks greater than 100 */
    printf("\nPlease Enter the marks between 1 to 100. Not more than.\n");
   }
   else
    {
    switch(marks/10)
    {
        case 10 :
        case 9 :
            /* Marks between 90-100 */
            printf("\n Your Grade is: A\n");
            break;
        case 8 :
                /* Marks between 80-89 */
            printf("\n Your Grade is: B\n" );
            break;
        case 7 :
            /* Marks between 70-79 */
            printf("\n Your Grade is: C\n" );
            break;
        case 6 :
            /* Marks between 60-69 */
            printf("\n Your Grade is: D\n" );
            break;
        case 5 :
                /* Marks between 50-59 */
            printf("\n Your Grade is: E\n" );
            break;
        case 4 :
                /* Marks between 40-49 */
            printf("\n Your Grade is: E--\n" );
            break;
        default :
            /* Marks less than 40 */
            printf("\n You Grade is: F or Fail\n");
            break;
        }
    
    }
    return 0;
}