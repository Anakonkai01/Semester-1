#include <stdio.h>
// tinh giai thua cua n
int factorialNum(int n);
int main(){
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

    
    
    printf("Factorial of %d = %d",n,factorialNum(n));
    return 0;
}

int factorialNum(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;   
    }
    return factorial;
}