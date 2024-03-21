#include <stdio.h>
#include <stdlib.h>

int main() {
    int random_number;
    int x,y;
    printf("nhap so hang = ");
    scanf("%d",&x);
    printf("nhap so cot = ");
    scanf("%d",&y);
    // srand(time(NULL));
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = random_number = rand();
        }
        
    }


    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
