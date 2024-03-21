#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


// exer 1a
void _1a_(int n){
	double sum = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		sum += i/2;
	}
	printf("Sum = %lf",sum);
}

// factorial number
unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}
// exer 1b
void _1b_ (int n){
	unsigned long long sum = 0;
	for (int i = 1; i < n+1; ++i)
	{
		sum += 2*i + 1;
	}
	printf("Sum = %llu",sum);
}
// exer 1c
void  _1c_ (int n ){
	unsigned long long sum = 0;
	for (int i = 0; i < n +1; ++i)
	{
		sum += factorial(i) + 1;
	}
	printf ("Sum = %llu",sum);
}

// exer 1d
unsigned long long _1d_ (int n){
	unsigned long long sum = 0;
	for (int i = 1; i < n+1; ++i)
	{
		sum += factorial(i);
	}
	printf("Sum = %llu",sum);
}

// exer 1e
void _1e_ (int n){
	double sum = 0;
	for (int i = 1; i < n+1; ++i){
		sum += 2*i/3;
	}
	printf("Sum = %lf",sum);
}


// main 
int main (){
	// check if n < 1
	int n = 0;
	bool check = 0;
	do {
		if(check)
			printf("Invalid number please type again\n");
		printf("Input the Natural Number: ");
		scanf("%d",&n);
		check++;
	}while(n < 1);

	// choose what function you want to execute
	int choose = 0 ;
	do
	{
		printf("\nType what exercise you want to execute:\n");
		for (int i = 1; i < 6; ++i)
		{
			printf("exercise %d = %d\n",i,i);
		}
		printf("\nType 0 to exit\n");
		printf("TYPE HERE : ");
		scanf("%d",&choose);
		switch(choose){
			case 1: 
				_1a_(n);
				printf("\n\n");
				break;
			case 2 : 
				_1b_(n);
				printf("\n\n");
				break;
			case 3 :
				_1c_(n);
				printf("\n\n");
				break;
			case 4 : 
				_1d_(n);
				printf("\n\n");
				break;
			case 5 : 
				_1e_(n);
				printf("\n\n");
				break;
			default:
				printf("...Exit...");
				printf("\n\n");
		}
	} while (choose != 0);


	return 0;
}
