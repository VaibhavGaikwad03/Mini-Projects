#include<stdio.h>

/*
#################################################################
##
##  Function Name : Table_Generator
##  Input : integer
##  Output : None
##  Description : It is used to Generate the Table
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 13 May 2022
##
#################################################################
*/ 
void Table_Generator(int iValue)
{
    int iTable = 0, i = 0;

    printf("Table of %d is : \n", iValue);
    for(i = 1; i <= 10; i++)
    {
        iTable = iValue * i;
        printf("%d\n", iTable);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    Table_Generator(iNo);   

    return 0;
}
