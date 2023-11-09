#include <stdio.h>

int main(){
    int a[3];

    printf("Input three number: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int max = a[0];
    for (int i = 0; i < 4; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        
    }
    printf("Max number is = %d",max);
    return 0;
}


