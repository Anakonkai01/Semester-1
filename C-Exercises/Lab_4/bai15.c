#include <stdio.h>
#include <stdlib.h>


void inputArray(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}


void swap(int* a,int* b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}


void outputArray(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = %d\n", i, array[i]);
    }
}

void insertionSort(int* a,int currentSize){
	for (int i = 1; i < currentSize; ++i)	
    {
    	for (int j = i ; j > 0 && a[j]<a[j-1] ; --j)
    	{
			swap(&a[j],&a[j-1]);
    	}
    }
}

void selectionSort(int* a, int currentSize){
	for (int i = 0; i < currentSize; ++i)
    {
        int i_min = i,v_min = a[i];
        for (int j = i; j < currentSize; ++j)
        {
            if (a[j]<v_min)
            {
                v_min = a[j];
                i_min = j;
            }
            
        }
        swap(&a[i_min],&a[i]);
    }
}

void bubbleSort(int* dynamicArray, int currentSize){
	for (int i = 0; i < currentSize - 1; i++) {
        int swapped = 0; 
        for (int j = 0; j < currentSize - 1 - i; j++) {
            if (dynamicArray[j] > dynamicArray[j + 1]) {
                // Swap the elements
                int temp = dynamicArray[j];
                dynamicArray[j] = dynamicArray[j + 1];
                dynamicArray[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main(){
	int currentSize;
	printf("Input for size of array: ");
	scanf("%d",&currentSize);
	int* dynamicArray = (int*)malloc(currentSize*sizeof(int));
	if (dynamicArray == NULL)
	{
		printf("Failed to memory allocation");
		return 1;
	}
	inputArray(dynamicArray,currentSize);


	int x;
	printf("Input the number which:\n1:insertionSort\n2:selectionSort\n3:bubbleSort\n4:mergeSort\n5:quickSort\n\n");
	printf("Which one you will choose: ");
	scanf("%d",&x);
	switch(x){
		case 1:
			insertionSort(dynamicArray,currentSize);
			break;
		case 2: 
			selectionSort(dynamicArray,currentSize);
			break;
		case 3:
			bubbleSort(dynamicArray,currentSize);
			break;
		case 4:
			printf("In progress: !!! ");
			break;
		case 5:
			printf("In progress: !!! ");
			break;
		default:
			printf("Invalid Input");
			break;
	}	

	printf("\n\nArray after sorted: \n");
	outputArray(dynamicArray,currentSize);

	free(dynamicArray);
	return 0;
}