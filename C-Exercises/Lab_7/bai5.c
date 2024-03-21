#include <stdio.h>

#define SIZE 5
void QuickSort(int a[],int firstIndex,int lastIndex);
int dividedDomain(int a[],int firstIndex,int lastIndex);
void swap(int *x,int *y);


int main (){
    int a[SIZE];        
    // input
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Input a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    QuickSort(a,0,SIZE-1);
    //output
    printf("after sorted\n");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    
    return 0;
}



void QuickSort(int a[],int firstIndex,int lastIndex){
    if (firstIndex < lastIndex)
    {
        int choosenAxis = dividedDomain(a,firstIndex,lastIndex);
        QuickSort(a,firstIndex,choosenAxis-1);
        QuickSort(a,choosenAxis+1,lastIndex); 
    }   
}

int dividedDomain(int a[],int firstIndex,int lastIndex){
    int choosenAxis = a[lastIndex];
    int i = firstIndex -1;
    for (int j = firstIndex; j <= lastIndex; j++)
    {
        if (choosenAxis > a[j])
        {
            i++;
            swap(&a[i],&a[j]);
        }   
    }
    swap(&a[i+1],&a[lastIndex]);
    return i+1;
}

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}