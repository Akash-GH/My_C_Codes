#include <stdio.h>

int main()
{
    int English, Maths, Science;
    float Total;
    printf("Enter English Marks: \n");
    scanf("%d",&English);
    printf("Enter Maths Marks: \n");
    scanf("%d",&Maths);
    printf("Enter Science Marks: \n");
    scanf("%d",&Science);

    Total = (English + Maths + Science)/3; // ((English + Maths + Science)/300 *100) = (English + Maths + Science)/3 
    
    if((Total < 40) || English < 33 || Maths < 33 || Science < 33){
        printf("Your percentage is %f and you are failed.\n",Total);
    }
    else{
        printf("Your percentage is %f and you are passed.\n",Total);
    }

    return 0;
}