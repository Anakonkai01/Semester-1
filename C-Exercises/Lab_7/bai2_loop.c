#include <stdio.h>
#include <stdlib.h>


const int SIZE = 5;
int binary_search(int a[],int n);
void inputArray(int a[]);
void outputArray(int a[]);
void bubble_sort(int a[]);


int main(){
    int a[SIZE];
    int n;
    
    inputArray(a);
    bubble_sort(a);
    outputArray(a);
    printf("Enter a number you want to find: ");
    scanf("%d",&n);
    
    
    // while loop
    if (binary_search(a,n) == -1)
    {
        printf("The number was not found in the array using loop");
    }
    else
    {
        printf("The number was found at index using loop= %d",binary_search(a,n));
    }

    printf("\n");

    return 0;
}



void inputArray(int a[]){
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Enter for a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}


void outputArray(int a[]){
    printf("\nAfter process: \n");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}


int binary_search(int a[],int n){
    int l = 0, r = SIZE, m =  l + (r-l)/2;
    while(l <= r){
        m = l + (r-l)/2;
        if (a[m] == n)
        {
            return m;
        }
        else if(a[m] < n){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return -1;
}



void bubble_sort(int a[]){
    int swap = 1;
    for (size_t i = 0; i < SIZE-1; i++)
    {
        swap = 0;
        for (size_t j = 0 ; j < SIZE - i - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = 1;
            }
        }
        
        if (!swap)
        {
            break;
        }
        
    }
}