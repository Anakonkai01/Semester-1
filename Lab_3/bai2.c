#include <stdio.h>

void printValue(int n);
// tong cac so le tu 1 den n
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
    
    printValue(n);
    return 0;
}


void printValue(int n){
        int sum = 0;

    for (int i = 0; i <= n; i++)
   {
        if (i%2 != 0)
            sum += i;
   } 
    printf("Sum odd number = %d",sum);
}
