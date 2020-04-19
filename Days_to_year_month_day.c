/* Problem: Given number of days D, convert it into years, months and days.*/
#include <stdio.h>

int main(){
    int days, weeks, years;
    printf("Number of days: ");
    scanf("%d", &days);

    years = days/365;
    weeks = (days%365)/7;
    days = (days%365)%7;

    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

    return 0;
}
