#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


//  vong lap xoa va co chuc nang dung chuong trinh
void inputArray(int* array,int n){
	for (int i = 0; i < n; ++i)
	{
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
}

void outputArray(int* array, int n){
	for (int i = 0; i < n; ++i)
	{
		printf("a[%d] = %d\n",i,array[i]);
	}
}


void deleteIndex(int* dynamicArray, int currentSize,int chooseIndex){
	currentSize--;
	for(int i = chooseIndex; i < currentSize; i++){
		dynamicArray[i] = dynamicArray[i+1];
	}	
	dynamicArray = (int*)realloc(dynamicArray,(currentSize-1)*sizeof(int));
	memset(dynamicArray+currentSize,0,sizeof(1));
	printf("New Array :\n");
	outputArray(dynamicArray,currentSize);
}

int main (){
	int currentSize; // input the size of array
	printf("Input the size of array: ");
	scanf("%d",&currentSize);

	int* dynamicArray = (int*)malloc(currentSize*sizeof(int)); // Create an array 
	if (dynamicArray == NULL)	
	{
		printf("Fail to memory allocation\n");
		printf("Run the program again");
		// return main();
	}

	inputArray(dynamicArray,currentSize); // input values for array


	printf("what index you want to delete : ");
	int chooseIndex;
	scanf("%d",&chooseIndex);
	deleteIndex(dynamicArray,currentSize,chooseIndex);
	printf("\n\n");

	return 0;
}