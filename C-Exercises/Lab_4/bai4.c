#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>



void inputArray(long double* array,int n){
	for (int i = 0; i < n; ++i)
	{
		printf("array[%d] = ",i);
		scanf("%Lf",&array[i]);
	}
}

long double findSum(long double* array,int n){
	long double sum = 0;
	for (int i = 0; i < n; ++i)
	{
			sum += array[i];
	}
	return sum;
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
	long double*array = (long double*)calloc(n-1,sizeof(long double));
	if(array == NULL){
		printf("Memory allocation failed\n");
		return 1;
	}


	inputArray(array,n);
	long double sum = findSum(array,n);
	printf("\nSum all Number in array = %Lf\n",sum);

	free(array);
	return 0;
}



