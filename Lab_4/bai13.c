#include <stdio.h>
#include <stdlib.h>

int countOdd(int*dynamicArray,int currentSize){
	int countOddNumber  = 0;
	for (int i = 0; i < currentSize; ++i)
	{
		if (dynamicArray[i]%2)
			countOddNumber++;
	}
	return countOddNumber;
}

int* createOddArray(int* dynamicArray,int currentSize){
	int size = countOdd(dynamicArray,currentSize);
	int* oddArray = (int*)malloc(size*sizeof(int));
	int newIndex = 0;
	for (int i = 0; i < currentSize; ++i)
	{
		if (dynamicArray[i]%2)
		{
			oddArray[newIndex] = dynamicArray[i];
			newIndex++;
		}
	}
	return oddArray;
}
int* createEvenArray(int* dynamicArray,int currentSize){
	int size  = currentSize - countOdd(dynamicArray,currentSize);
	int* evenArray = (int*)malloc(size*sizeof(int));
	int newIndex = 0;
	for (int i = 0; i < currentSize; ++i)
	{
		if (dynamicArray[i]%2==0)
		{
			evenArray[newIndex] = dynamicArray[i];
			newIndex++;
		}
	}
	return evenArray;
}

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


	int* returnOddArray = createOddArray(dynamicArray,currentSize);
	int* returnEvenArray = createEvenArray(dynamicArray,currentSize);
	int returnCountOdd = countOdd(dynamicArray,currentSize);
	int returnCountEven = currentSize- returnCountOdd ;
	printf("\n\n");
	printf("EVEN ARRAY = \n");

	outputArray(returnEvenArray,returnCountEven);
	printf("\n\n");
	printf("ODD ARRAY = \n");
	outputArray(returnOddArray,returnCountOdd);

	free(dynamicArray);
	free(returnOddArray);
	free(returnEvenArray);
	return 0;
}