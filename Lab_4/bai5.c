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

bool checkNon(int i){
	return (i < 0)? true : false ;
}

int sumNon_Negegative(int* array,int n){
	int sumNonPositive = 0;
	for (int i = 0; i < n; ++i)
	{
		if (checkNon(array[i]))
			sumNonPositive += array[i];
	}
	return sumNonPositive;
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
	int sumNonPositive = sumNon_Negegative(array,n);
	printf("\nSum of all Non-Positive Number in array = %d\n",sumNonPositive);

	free(array);
	return 0;
}



