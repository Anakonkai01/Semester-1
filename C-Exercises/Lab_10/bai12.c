#include <stdio.h>


void bubbleSort(int a[],int SIZE){
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE-i-1; j++)
        {
            if (a[j]> a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }   
        }
    }   
}

void selectionSort(int a[],int SIZE){  
    for (size_t i = 0; i < SIZE-1; i++)
    {
        int min_index = i;
        for (size_t j = i + 1 ; j < SIZE; j++)
        {
            if (a[min_index]>a[j])
            {
                min_index = j;
            }
        }
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
    
}
// int main(){
//     int a[] = {5,4,2,3,1,10,9,5,4,3,2,5,11,12};
//     int b[] = {5,4,2,3,1,10,9,5,4,3,2,5,11,12};
//     int SIZE = sizeof(a)/sizeof(a[0]);

//     printf("mang a duoc sap xep theo bubble sort: ");
//     bubbleSort(a, SIZE);
//     for (size_t i = 0; i < SIZE; i++)
//     {
//         printf("%d,", a[i]);
//     }

//     selectionSort(b, SIZE);
//     printf("\nmang b duoc sap xep theo selection sort: ");
//     for (size_t i = 0; i < SIZE; i++)
//     {
//         printf("%d,", b[i]);
//     }
//     return 0;
// }