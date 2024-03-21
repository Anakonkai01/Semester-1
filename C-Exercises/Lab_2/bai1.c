#include <stdio.h>


int main (){
    int sum = 0;
    int n;
    printf("Input the value for n = \n");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
   {
        if (i%2 == 0)
            sum += i;
   } 
    printf("Sum = %d",sum);
    return 0;
}