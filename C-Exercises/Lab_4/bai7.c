#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>



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

void convertEvenArray(int* array, int n){
	for (int i = 0; i <=(int)n/2 - 1; ++i)
	{
		int temp  = array[i];
		array[i] = array[n-i-1];
		array[n-i-1] = temp;
	}
}

void convertOddArray(int* array, int n){
	for (int i = 0; i <= (int)n/2; ++i)
	{
		int temp  = array[i];
		array[i] = array[n-i-1];
		array[n-i-1] = temp;
	}
}

// MAIN FUNCTION
int main (){
	// check if n < 1
	int n = 0;
	bool check = 0;
	do {
		if(check)
			printf("Invalid number please type again\n");
		printf("Input the size of array: ");
		scanf("%d",&n);
		check++;
	}while(n < 0);

	// declare the function 
	int*array = (int*)calloc(n-1,sizeof(int));
	if(array == NULL){
		printf("Memory allocation failed\n");
		return 1;
	}


	inputArray(array,n);
	(n%2 == 0)? convertEvenArray(array,n):convertOddArray(array,n);
	outputArray(array,n);
	free(array);
	return 0;
}



