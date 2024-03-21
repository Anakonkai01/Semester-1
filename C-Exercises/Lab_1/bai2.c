#include <stdio.h>

int main(){
    int n1,n2;
    printf("Input 2 numbers : \n");
    scanf("%d%d",&n1,&n2);

    printf("n1 + n2 = %d\n",n1+n2);
    printf("n1 - n2 = %d\n",n1-n2);
    printf("n1 * n2 = %d\n",n1*n2);
    printf("n1 / n2 = %.2f\n",(float)n1/n2);
    printf("n1 / n2 = %d\n",n1%n2);
    return 0;
}
