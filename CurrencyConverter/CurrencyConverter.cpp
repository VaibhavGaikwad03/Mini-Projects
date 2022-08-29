#include<iostream>
using namespace std;

#define RUPEES 1
#define USD 79.97
#define EURO 1.98
#define BRITISHPOUND 93.96
#define AUSDOLLAR 55.09
#define CANADIANDOLLAR 61.35
#define SINGAPOREDOLLAR 57.41
#define SWISSFRANC 78.60
#define MALASIANRINGGIT 17.79
#define JAPNESEYEN 0.58
#define CHINESEYUAN 11.63

class CurrencyConverter
{
    private:
        float iValue;
    public:
        CurrencyConverter();
        void IndianRupee();
        void IndianRupeeX();
        void USDollar();
        void USDollarX();
        void Euro();
        void EuroX();
        void BritishPound();
        void BritishPoundX();
        void AusDollar();
        void AusDollarX();
        void CanadianDollar();
        void CanadianDollarX();
        void SingaporeDollar();
        void SingaporeDollarX();
        void SwissFranc();
        void SwissFrancX();
        void MalasianRinggit();
        void MalasianRinggitX();
        void JapneseYen();
        void JapneseYenX();
        void ChineseYuan();
        void ChineseYuanX();
};

CurrencyConverter::CurrencyConverter()
{
    iValue = 0;
}

void CurrencyConverter::IndianRupee()
{
    float fRupees = 0.0;

    cout<<"Enter the amount in Rupees : "<<endl;
    cin>>fRupees;

    iValue = RUPEES * fRupees;
    
}

void CurrencyConverter::IndianRupeeX()
{
    float fRupees = 0.0;

    fRupees = iValue/RUPEES;

    cout<<"Converted amount in Rupees is : "<<fRupees;
    
}

void CurrencyConverter::USDollar()
{
    float fUSD = 0.0;

    cout<<"Enter the amount in US Dollar : "<<endl;
    cin>>fUSD;

    iValue = USD * fUSD;
}

void CurrencyConverter::USDollarX()
{
    float fUSD = 0.0;

    fUSD = iValue / USD;

    cout<<"Converted amount in US Dollar is : "<<fUSD;
}

void CurrencyConverter::Euro()
{
    float fEuro = 0.0;

    cout<<"Enter the amount in Euro : "<<endl;
    cin>>fEuro;

    iValue = EURO * fEuro;
}

void CurrencyConverter::EuroX()
{
    float fEuro = 0.0;

    fEuro = iValue / EURO;

    cout<<"Converted amount in Euro is : "<<fEuro;
}

void CurrencyConverter::BritishPound()
{
    float fBritishPound = 0.0;

    cout<<"Enter the amount in British Pound : "<<endl;
    cin>>fBritishPound;

    iValue = BRITISHPOUND * fBritishPound;
}

void CurrencyConverter::BritishPoundX()
{
    float fBritishPound = 0.0;

    fBritishPound = iValue / BRITISHPOUND;

    cout<<"Converted amount in British Pound is : "<<fBritishPound;
}

void CurrencyConverter::AusDollar()
{
    float fAusDollar = 0.0;

    cout<<"Enter the amount in Austrailian Dollar : "<<endl;
    cin>>fAusDollar;

    iValue = AUSDOLLAR * fAusDollar;
}

void CurrencyConverter::AusDollarX()
{
    float fAusDollar = 0.0;

    fAusDollar = iValue / AUSDOLLAR;

    cout<<"Converted amount in Austrailian Dollar is : "<<fAusDollar;
}

void CurrencyConverter::CanadianDollar()
{
    float fCanadianDollar = 0.0;

    cout<<"Enter the amount in Canadian Dollar : "<<endl;
    cin>>fCanadianDollar;

    iValue = CANADIANDOLLAR * fCanadianDollar;
}

void CurrencyConverter::CanadianDollarX()
{
    float fCanadianDollar = 0.0;

    fCanadianDollar = iValue / CANADIANDOLLAR;

    cout<<"Converted amount in Canadian Dollar is : "<<fCanadianDollar;
}

void CurrencyConverter::SingaporeDollar()
{
    float fSingaporeDollar = 0.0;

    cout<<"Enter the amount in Singapore Dollar : "<<endl;
    cin>>fSingaporeDollar;

    iValue = SINGAPOREDOLLAR * fSingaporeDollar;
}

void CurrencyConverter::SingaporeDollarX()
{
    float fSingaporeDollar = 0.0;

    fSingaporeDollar = iValue / SINGAPOREDOLLAR;

    cout<<"Converted amount in Singapore Dollar is : "<<fSingaporeDollar;
}

void CurrencyConverter::SwissFranc()
{
    float fSwissFranc = 0.0;

    cout<<"Enter the amount in Swiss Franc : "<<endl;
    cin>>fSwissFranc;

    iValue = SWISSFRANC * fSwissFranc;
}

void CurrencyConverter::SwissFrancX()
{
    float fSwissFranc = 0.0;

    fSwissFranc = iValue / SWISSFRANC;

    cout<<"Converted amount in Swiss Franc is : "<<fSwissFranc;
}

void CurrencyConverter::MalasianRinggit()
{
    float fMalasianRinggit = 0.0;

    cout<<"Enter the amount in Malasian Ringgit : "<<endl;
    cin>>fMalasianRinggit;

    iValue = MALASIANRINGGIT * fMalasianRinggit;
}

void CurrencyConverter::MalasianRinggitX()
{
    float fMalasianRinggit = 0.0;

    fMalasianRinggit = iValue / MALASIANRINGGIT;

    cout<<"Converted amount in Malasian Ringgit is : "<<fMalasianRinggit;
}

void CurrencyConverter::JapneseYen()
{
    float fJapneseYen = 0.0;

    cout<<"Enter the amount in Japnese Yen : "<<endl;
    cin>>fJapneseYen;

    iValue = JAPNESEYEN * fJapneseYen;
}

void CurrencyConverter::JapneseYenX()
{
    float fJapneseYen = 0.0;

    fJapneseYen = iValue / JAPNESEYEN;

    cout<<"Converted amount in Japnese Yen is : "<<fJapneseYen;
}

void CurrencyConverter::ChineseYuan()
{
    float fChineseYuan = 0.0;

    cout<<"Enter the amount in Chinese Yuan : "<<endl;
    cin>>fChineseYuan;

    iValue = CHINESEYUAN * fChineseYuan;
}

void CurrencyConverter::ChineseYuanX()
{
    float fChineseYuan = 0.0;

    fChineseYuan = iValue / CHINESEYUAN;

    cout<<"Converted amount in Chinese Yuan is : "<<fChineseYuan;
}

void StartConverter()
{
    int iSwitch = 0;

    CurrencyConverter cobj;

    cout<<endl<<"Hello,"<<endl<<"Welcome to Currency Converter..."<<endl<<endl;

    cout<<"1) Indian Rupees"<<endl<<"2) US Dollar"<<endl<<"3) Euro"<<endl<<"4) British Pound"<<endl<<"5) AusDollar"<<endl<<"6) Canadian Dollar"<<endl<<"7) Singapore Dollar"<<endl<<"8) Swiss France"<<endl<<"9) Malasian Ringgit"<<endl<<"10) Japnese Yen"<<endl<<"11) Chinese Yuan"<<endl;

    cout<<endl<<"Enter the number next to the currency you want to convert :"<<endl;
    cin>>iSwitch;

    switch (iSwitch)
    {
        case 1:
            cobj.IndianRupee();
            break;
        case 2:
            cobj.USDollar();
            break;
        case 3:
            cobj.Euro();
            break;
        case 4:
            cobj.BritishPound();
            break;
        case 5:
            cobj.AusDollar();
            break;
        case 6: 
            cobj.CanadianDollar();
            break;
        case 7:
            cobj.SingaporeDollar();
            break;
        case 8:
            cobj.SwissFranc();
            break;
        case 9:
            cobj.MalasianRinggit();
            break;
        case 10:
            cobj.JapneseYen();
            break;
        case 11:
            cobj.ChineseYuan();
            break;
        default:
            printf("Invalid Option Selected !!!\n");
            break;
    }

    cout<<"1) Indian Rupees"<<endl<<"2) US Dollar"<<endl<<"3) Euro"<<endl<<"4) British Pound"<<endl<<"5) AusDollar"<<endl<<"6) Canadian Dollar"<<endl<<"7) Singapore Dollar"<<endl<<"8) Swiss France"<<endl<<"9) Malasian Ringgit"<<endl<<"10) Japnese Yen"<<endl<<"11) Chinese Yuan"<<endl;

    cout<<endl<<"In which currency the entered amount is to be converted :"<<endl;
    cin>>iSwitch;

    switch (iSwitch)
    {
        case 1:
            cobj.IndianRupeeX();
            break;
        case 2:
            cobj.USDollarX();
            break;
        case 3:
            cobj.EuroX();
            break;
        case 4:
            cobj.BritishPoundX();
            break;
        case 5:
            cobj.AusDollarX();
            break;
        case 6: 
            cobj.CanadianDollarX();
            break;
        case 7:
            cobj.SingaporeDollarX();
            break;
        case 8:
            cobj.SwissFrancX();
            break;
        case 9:
            cobj.MalasianRinggitX();
            break;
        case 10:
            cobj.JapneseYenX();
            break;
        case 11:
            cobj.ChineseYuanX();
            break;
        default:
            printf("Invalid Option Selected !!!\n");
            break;
    }
}

int main()
{
    StartConverter();

    return 0;
}