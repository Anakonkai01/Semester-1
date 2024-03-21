#include <stdio.h>
#include <stdlib.h>


const int SIZE = 10;
int sequential_search(int a[],int n);
void inputArray(int a[]);


int main(){
    int a[SIZE];
    int n;
    
    inputArray(a);
    printf("Enter a number you want to find: ");
    scanf("%d",&n);
    if (sequential_search(a,n) == -1)
    {
        printf("The number was not found in the array");
    }
    else
    {
        printf("The number was found at index = %d",sequential_search(a,n));
    }
        
    // outputArray(a);
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
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d",i,a[i]);
    }
}

int sequential_search(int a[],int n){
    for (size_t i = 0; i < SIZE; i++)
    {
        if (n == a[i])
        {
            return i;
        }
    }
    return -1;
}