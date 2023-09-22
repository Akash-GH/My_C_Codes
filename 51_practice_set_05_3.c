// function to  calculate force of attraction on a body of mass m exerted by earth.(g = 9.8 m/s)
#include <stdio.h>
float force(float mass);

int main()
{
    float mass;
    printf("The value of mass: ");
    scanf("%f",&mass);
    printf("The force of attraction on a body is %.2f Newton\n",force(mass));
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}