#include <stdio.h>
#include <windows.h>

int days, weeks, month, years, b_years, a_years, days_years, days_month, days_total, a_days;
int jan = 31, feb = 29, mar = 31, apr = 30, maj = 31, jun = 30, jul = 31, aug = 31, sep = 30, okt = 31, nov = 30, dec = 31;


int main(void){
    printf("Enter birthday:");
    scanf("%d%d%d", &days, &month, &b_years);

    SYSTEMTIME t;
    GetLocalTime(&t);
    printf("Year: %d, Month: %d, Day: %d\n", t.wYear, t.wMonth, t.wDay);

    a_years = t.wYear - b_years;
    a_days = t.wDay - days;

    switch(month){
        case 12:
            days_years = a_years * 365;
            days_month = jan + feb + mar + apr + maj + jun + jul + aug + sep + okt + nov;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 11:
            days_years = a_years * 365;
            days_month = 0;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 10:
            days_years = a_years * 365;
            days_month = nov;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 9:
            days_years = a_years * 365;
            days_month = nov + okt;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 8:
            days_years = a_years * 365;
            days_month = nov + okt + sep;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 7:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 6:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug + jul;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 5:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug + jul + jun;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 4:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug + jul + jun + maj;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 3:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug + jul + jun + maj + apr;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 2:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug + jul + jun + maj + apr + mar;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
        case 1:
            days_years = a_years * 365;
            days_month = nov + okt + sep + aug + jul + jun + maj + apr + mar + feb;
            days_total = a_days + days_month + days_years;
            printf("You are %d days old", days_total);
            break;
    }

    years = days_total/365;
    weeks = (days_total % 365)/7;
    days_total = days_total- ((years*365) + (weeks*7));

    printf("\nThere are\nYears %d\nWeeks %d\nDays %d\n", years, weeks, days_total);
    return 0;
}
