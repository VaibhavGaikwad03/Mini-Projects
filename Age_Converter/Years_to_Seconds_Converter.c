#include<stdio.h>

float ageConverter(int iAge)
{
    return 3.156E7 * iAge;
}

int main()
{
    int iAge = 0;
    float fRet = 0.0f;

    printf("Enter your age : \n");
    scanf("%d", &iAge);

    fRet = ageConverter(iAge);

    printf("Your age in seconds is : %5.2f\n", fRet);   

    return 0;
}