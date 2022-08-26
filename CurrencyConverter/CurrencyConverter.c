#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Input :          How much amount you want to convert 
// Output :         Converted amount in other Currencies
// Description :    It is used to convert one currency to another currency
// Author :         Vaibhav Tukaram Gaikwad
// Date :           11/04/2022
//
////////////////////////////////////////////////////////



void IndianRupeeX(float iAns)
{
    float iA = 0.0;
    float RupeeX = 1.00;
    iA = iAns/RupeeX;

    printf("Your converted Amount in Rupees is : %f \n",iA);

}

void UsDollarX(float iAns)
{
    float iA = 0.0;
    float USDX = 75.94;
    iA = iAns/USDX;

    printf("Your converted Amount in USD is : %f \n",iA);

}

void EuroX(float iAns)
{
    float iA = 0.0;
    float EuroX = 82.64;
    iA = iAns/EuroX;

    printf("Your converted Amount in Euro is : %f \n",iA);

}

void BritishPoundX(float iAns)
{
    float iA = 0.0;
    float PoundX = 98.75;
    iA = iAns/PoundX;

    printf("Your converted Amount in British Pound is : %f \n",iA);

}

void AusDollarX(float iAns)
{
    float iA = 0.0;
    float AusX = 56.39;
    iA = iAns/AusX;

    printf("Your converted Amount in Australian Dollar is : %f \n",iA);

}

void CanDollarX(float iAns)
{
    float iA = 0.0;
    float CanX = 60.21;
    iA = iAns/CanX;

    printf("Your converted Amount in Canadian Dollar is : %f \n",iA);

}

void SingaDollarX(float iAns)
{
    float iA = 0.0;
    float SingX = 55.55;
    iA = iAns/SingX;

    printf("Your converted Amount in Sinapore Dollar is : %f \n",iA);

}

void SwissFranceX(float iAns)
{
    float iA = 0.0;
    float SwissX = 81.09;
    iA = iAns/SwissX;

    printf("Your converted Amount in Swiss Franc is : %f \n",iA);

}

void MalasiaRinggitX(float iAns)
{
    float iA = 0.0;
    float RingX = 17.95;
    iA = iAns/RingX;

    printf("Your converted Amount in Malasian Ringgit is : %f \n",iA);

}

void JapneseYenX(float iAns)
{
    float iA = 0.0;
    float YenX = 0.605;
    iA = iAns/YenX;

    printf("Your converted Amount in Japnese Yen is : %f \n",iA);

}

void ChineseYuanX(float iAns)
{
    float iA = 0.0;
    float YuanX = 11.91;
    iA = iAns/YuanX;

    printf("Your converted Amount in Chinese Yuan is : %f \n",iA);

}


void IndianRupee()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Rupee = 11.91;

    printf("You selected Indian Rupee...\n \n");

    printf("How much Indian Rupees you want to convert :\n");
    scanf("%d",&iA);

    iAns = Rupee*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Indian Rupee  \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}


void UsDollar()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float USD = 75.94;

    printf("You selected USD... \n \n");

    printf("How much USD you want to convert :\n");
    scanf("%d",&iA);

    iAns = USD*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the USD \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}

void Euro()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Euro = 82.64;

    printf("You selected Euro... \n \n");

    printf("How much Euro you want to convert :\n");
    scanf("%d",&iA);

    iAns = Euro*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Euro \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}

void BritishPound()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Pound = 98.75;

    printf("You selected British Pound... \n \n");

    printf("How much British Pound you want to convert :\n");
    scanf("%d",&iA);

    iAns = Pound*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the British Pound \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}

void AusDollar()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Aus = 56.39;

    printf("You selected Australian Dollar... \n \n");

    printf("How much Australian Dollar you want to convert :\n");
    scanf("%d",&iA);

    iAns = Aus*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Australian Dollar \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}

void CanDollar()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Can = 60.21;

    printf("You selected Canadian Dollar... \n \n");

    printf("How much Canadian Dollar you want to convert :\n");
    scanf("%d",&iA);

    iAns = Can*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Canadian Dollar \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}


void SingaDollar()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Sing = 55.55;

    printf("You selected Singapore Dollar... \n \n");

    printf("How much Singapore Dollar  you want to convert :\n");
    scanf("%d",&iA);

    iAns = Sing*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Singapore Dollar \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}


void SwissFrance()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Swiss = 81.09;

    printf("You selected Swiss Franc... \n \n");

    printf("How much Swiss Franc  you want to convert :\n");
    scanf("%d",&iA);

    iAns = Swiss*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the  Swiss Franc \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}


void MalasiaRinggit()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Ring = 17.95;

    printf("You selected Malasian Ringgit... \n \n");

    printf("How much Malasian Ringgit you want to convert :\n");
    scanf("%d",&iA);

    iAns = Ring*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Malasian Ringgit \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}


void JapneseYen()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Yen = 0.605;

    printf("You selected Japnese Yen... \n \n");

    printf("How much Japnese Yen you want to convert :\n");
    scanf("%d",&iA);

    iAns = Yen*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Japnese Yen \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;
        
        default :
        printf("Invalid option selected \n");
        break;
    }


}


void ChineseYuan()
{
    int iA = 0;
    int iB = 0;
    float iAns = 0.0;
    float Yuan = 11.91;

    printf("You selected Chinese Yuan... \n \n");

    printf("How much Chinese Yuan you want to convert :\n");
    scanf("%d",&iA);

    iAns = Yuan*iA;


    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n");

    printf("In which Currency you want to convert the Chinese Yuan \n");
    scanf("%d",&iB);

    switch(iB)
    {
        case 1 :
        IndianRupeeX(iAns);
        break;
        case 2 :
        UsDollarX(iAns);
        break;

        case 3 :
        EuroX(iAns);
        break;

        case 4 :
        BritishPoundX(iAns);
        break;

        case 5:
        AusDollarX(iAns);
        break;

        case 6 :
        CanDollarX(iAns);
        break;

        case 7 :
        SingaDollarX(iAns);
        break;

        case 8 :
        SwissFranceX(iAns);
        break;

        case 9 :
        MalasiaRinggitX(iAns);
        break;

        case 10 :
        JapneseYenX(iAns);
        break;

        case 11 :
        ChineseYuanX(iAns);
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }


}






void EnterCurrencies(int iA)
{
    printf("Please enter the number next to the Currency that you want to convert : \n");
    scanf("%d",&iA);

    switch(iA)
    {
        case 1 :
        IndianRupee();
        break;
        case 2 :
        UsDollar();
        break;

        case 3 :
        Euro();
        break;

        case 4 :
        BritishPound();
        break;

        case 5:
        AusDollar();
        break;

        case 6 :
        CanDollar();
        break;

        case 7 :
        SingaDollar();
        break;

        case 8 :
        SwissFrance();
        break;

        case 9 :
        MalasiaRinggit();
        break;

        case 10 :
        JapneseYen();
        break;

        case 11 :
        ChineseYuan();
        break;

        default :
        printf("Invalid option selected \n");
        break;
    }

}

int main()
{
    int iA = 0;

    printf("Hello, Welcome... \n \n");

    printf("1) Indian Rupee \n");
    printf("2) US Dollar(USD) \n");
    printf("3) Euro \n");
    printf("4) British Pound \n");
    printf("5) Australian Dollar \n");
    printf("6) Canadian Dollar \n");
    printf("7) Singapore Dollar \n");
    printf("8) Swiss France \n");
    printf("9) Malasian Ringgit \n");
    printf("10) Japnese Yen \n");
    printf("11) Chinese Yuan Renminbi \n \n ");

    EnterCurrencies(iA);

    return 0;
}