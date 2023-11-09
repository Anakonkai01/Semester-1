#include <math.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// in so armstrong tu 1 den n

int countDigit(int n);
bool checkArmStrong(int num, int countDigit);

int main() {
    int num, count= 0;
    int newNumber = 0;

    int check = 0;
    // check the if natural number
    do
    {
        if (check >= 1 ){
            printf("Your input is not natural number please try again\n");
        }  
        printf("Input the natural number : ");
        scanf("%d",&num);
        check+=1;
    } while (num<1);


    printf("the ARMSTRONG number less than or equal with %d = ",num);
    for (int i = 1; i <= num; ++i)
    {
        count = countDigit(i);
       if (checkArmStrong(i,count))
       {
           printf("%d, ",i);
       }
    }
   return 0;
}

int countDigit(int n){
    int count = 0;
    for (; n != 0; ++count) {
       n /= 10;
   }
   return count;
}

bool checkArmStrong(int num, int count){
    int remain = 0;
    int newNumber = 0;
    int n = num;
    for (; n != 0; n /= 10) {
       remain = n % 10;
       newNumber += (int)pow(remain, count);
   }
   if (newNumber != num)
   {
        return false;
   }
   else{
        return true;
   }
}


