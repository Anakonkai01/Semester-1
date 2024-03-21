#include <stdio.h>

int main(){
    int days;
    printf("Input days :");
    scanf("%d",&days);

    int years = days/365;
    int weeks = days/7;

    int daysRemain = days%365;

    printf("Years: %d, Weeks: %d, days remain: %d",years,weeks,daysRemain);

    return 0;
}
