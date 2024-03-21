#include <stdio.h>
#include <stdlib.h>


const int SIZE = 5;
void inputArray(int a[]);
void outputArray(int a[]);
void bubble_sort(int a[]);
int binary_search_recursion(int a[],int n,int l, int r,int m);

int main(){
    int a[SIZE];
    int n;
    
    inputArray(a);
    bubble_sort(a);
    outputArray(a);
    printf("Enter a number you want to find: ");
    scanf("%d",&n);


    printf("\n");
    // recursion
    int l = 0, r = SIZE - 1,m = l + (r-l)/2;
    if (binary_search_recursion(a,n,l,r,m) == -1)
    {
        printf("The number was not found in the array using recursion");
    }
    else
    {
        printf("The number was found at index using recursion = %d",binary_search_recursion(a,n,l,r,m));
    }
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



int binary_search_recursion(int a[],int n,int l, int r,int m){
    m = l + (r-l)/2;
    if (a[m] == n)
    {
        return m;
    }
    else if (a[m] < n)
    {
        return binary_search_recursion(a,n,m+1,r,m);
    }
    else if (a[m] > n){
        return binary_search_recursion(a,n,l,m-1,m);
    }
    else
    {
        return - 1;
    }
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