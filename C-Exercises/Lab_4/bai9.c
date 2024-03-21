#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

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



void sortList(int* list, int count){
	for(int i = 0; i < count -1; i++){
		for (int j = 0; j < count-1; ++j)
		{
			if (list[j]>list[j+1])
			{
				int temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
}



void deleteIndex(int* dynamicArray, int* currentSize,int* list,int count){
	int countShift = 0;
	for(int i = 0; i < count;i++ ,countShift++){
		
		for(int j = list[i] - countShift; j <= *currentSize; j++){
			dynamicArray[j] = dynamicArray[j+1];
		}
		(*currentSize)--;
	}
}




void listOfIndex(int indexFound,int count,int* list){
	list = (int*)realloc(list,(count+1)*sizeof(int));
	list[count] = indexFound;
}



// find
int findDupEle(int* dynamicArray, int currentSize,int* list){
	int count = 0;
	for (int i = 0; i < currentSize-1; ++i)
	{
		for (int j = i + 1; j < currentSize; ++j)
		{
			if (dynamicArray[i] == dynamicArray[j])
			{
				listOfIndex(j,count,list);
				count++;
				break;
			}
		}
	}
	return count;
}





int main (){
	int currentSize; // input the size of array
	printf("Input the size of array: ");
	scanf("%d",&currentSize);

	int* dynamicArray = (int*)malloc(currentSize*sizeof(int)); // Create an array 
	int* list = (int*)malloc(0*sizeof(int));

	if (dynamicArray == NULL || list == NULL)	
	{
		printf("Fail to memory allocation\n");
		printf("Run the program again");
		return 1;
	}

	inputArray(dynamicArray,currentSize); // input values for array

	int count = findDupEle(dynamicArray,currentSize,list);
	printf("\n\nNumber of duplicate elements = %d\n", count);
	printf("\n");

	// sortList
	sortList(list,count);
	printf("Index being duplicate elements :");
	for (int i = 0; i < count; ++i)
	{
		printf("\narray[%d]",list[i]);
	}




	// deleteIndex(dynamicArray,&currentSize,list,count);
	// printf("\n\n");
	// printf("After Delete duplicate elements :\n");
	// outputArray(dynamicArray,currentSize);


	free(dynamicArray);
	// free(list);
	return 0;
}