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

long double findMax(long double* array,int n){
	long double max = array[0];
	for (int i = 0; i < n; ++i)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
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
	long double max = findMax(array,n);
	printf("\nMax Number in array = %Lf\n",max);

	free(array);
	return 0;
}



