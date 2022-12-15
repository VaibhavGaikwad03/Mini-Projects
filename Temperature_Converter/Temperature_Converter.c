#include<stdio.h>

float tempConverter(float fFahrenheit)
{
    return (fFahrenheit - 32) * 5/9;
}   

int main()
{
    float fFahrenheit = 0.0f, fCelsius = 0.0f;

    printf("Enter the temperature in fahrenheit : \n");
    scanf("%f", &fFahrenheit);

    fCelsius = tempConverter(fFahrenheit);

    printf("Temperature in celsius is : %f\n", fCelsius);

    return 0;
}