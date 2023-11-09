#include <stdio.h>
#include <stdlib.h>

void inputArray(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = %d\n", i, array[i]);
    }
}
void swap(int* a,int* b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}
void Sort(int* arr, int size){
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; 
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}


int main(){
    int a[5];
    inputArray(a,5);

    Sort(a,5);

    outputArray(a,5);

}