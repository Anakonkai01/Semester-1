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

void mergeArray(int* dynamicArray1,int* dynamicArray2,int* dynamicArray3 ,int size1, int size2,int size3){
	for (int i = 0; i < size1; ++i)
	{
		dynamicArray3[i] = dynamicArray1[i];
	}
	for (int i = size1,j=0; i < size3; ++i,j++)
	{
		dynamicArray3[i] = dynamicArray2[j]; 
	}
}

int main(){


	int size1,size2;
	printf("Input for the size for dynamicArray1: ");
	scanf("%d",&size1);
	printf("\nInput for the size for dynamicArray2: ");
	scanf("%d",&size2);

	int* dynamicArray1 = (int*)malloc(size1*sizeof(int));
	int* dynamicArray2 = (int*)malloc(size2*sizeof(int));
	int size3 = size2 + size1;
	int* dynamicArray3 = (int*)malloc((size3)*sizeof(int));
    if (dynamicArray1 == NULL || dynamicArray2 == NULL||dynamicArray3 == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }
	printf("\nInput the dynamicArray1: \n");
	inputArray(dynamicArray1,size1);
	printf("\nInput the dynamicArray2: \n");
	inputArray(dynamicArray2,size2);



	mergeArray(dynamicArray1,dynamicArray2,dynamicArray3,size1,size2,size3);

	printf("After merge to dynamicArray3: \n");
	outputArray(dynamicArray3,size3);
	free(dynamicArray1);
	free(dynamicArray2);
	free(dynamicArray3);
	return 0;
}



