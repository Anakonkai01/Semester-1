#include <stdio.h>


int main (){
    int n ;
    int check = 0;
    // check the if natural number
    do
    {
        if (check >= 1 ){
            printf("Your input is not natural number please try again\n");
        }  
        printf("Input the natural number : ");
        scanf("%d",&n);
        check+=1;
    } while (n<1);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;   
    }
    
    printf("Sum = %d",sum);
    return 0;
}