#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void Clock(int hrs, int min, int sec)
{
    int delay = 1000;

    if(hrs > 12 || min > 60 || sec > 60)
    {
        printf("ERROR !!!");
        exit(0);
    }

    while(1)
    {
        sec++;
        if(sec > 59)
        {
            min++;
            sec = 0;
        }
        if(min > 59)
        {
            hrs++;
            min = 0;
        }
        if(hrs > 12)
        {
            hrs = 1;
        }

        printf("\nClock : ");
        printf("%02d:%02d:%02d", hrs, min, sec);
        Sleep(delay);
        system("cls");
    }
}

int main()
{
    int hrs, min, sec;

    printf("Set Time : \n");
    scanf("%d%d%d", &hrs, &min, &sec);

    Clock(hrs, min, sec);
 
    return 0;
} 
