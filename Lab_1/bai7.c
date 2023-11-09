#include <stdio.h>

int main(){
    int years;
    printf("input the year : ");
    scanf("%d",&years);

    if (years%4 == 0&& years %100 != 0 || years%400 == 0){
        printf("Leap year");
    }else{
        printf("Not leap year");
    }
    return 0;
}

