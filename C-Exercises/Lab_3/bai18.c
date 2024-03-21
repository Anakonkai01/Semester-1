
#include <stdio.h> 
// chuyen doi tu he so dec qua binary
void decToBi(int n);

int main() 
{ 
	int n;
	printf("Input the Decimal Number = ");
	scanf("%d",&n); 
	decToBi(n); 
	return 0; 
}

void decToBi(int n) 
{ 
	int bNumber[10000]; 
	int i = 0; 
	while (n > 0) { 
		bNumber[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	
	for (int j = i - 1; j >= 0; j--) 
		printf("%d", bNumber[j]); 
} 