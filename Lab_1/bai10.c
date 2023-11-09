#include <stdio.h>

int main(){
    int n; 
    printf("Nhap so n: ");
    scanf("%d",&n);

    if (n%2 == 0)
    {
        printf("So %d la so CHAN",n);
    }
    else{
        printf("So %d la so LE",n);
    }
    
    return 0;
}