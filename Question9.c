#include<stdio.h>
int main(){
    int days,year,month,week,rem_days;
    printf("Enter no of days: ");
    scanf("%d",&days);
    year=days/365;
    rem_days=days % 365;

    month=days/30;
    rem_days=days/30;

    week=days/7;
    rem_days= days % 7;
    
    printf("Year= %d ",year);
    printf("Month= %d ",month);
    printf("Week= %d ",week);

    return 0;
}