// function to convert celcius to fahrenheit
#include <stdio.h>
float CelciusToFahrenheit(float temp);
int main()
{
    float temp;
    printf("Enter the value of temperature in Celcius: ");
    scanf("%f",&temp);
    printf("The value of temperature in Fahrenheit is %.2f \n",CelciusToFahrenheit(temp));
    return 0;
}
float CelciusToFahrenheit(float temp){
    float fahrenheit = (temp * 9/5) + 32;
    return fahrenheit;
}