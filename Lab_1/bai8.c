#include <stdio.h>

int main(){
    int a,b;
    printf("Input a and b: ");
    scanf("%d%d",&a,&b);

    if ( a > b)
    {
        printf("MAX = %d",a);
    }else{
        printf("MAX = %d",b);
    }
    return 0;
}
