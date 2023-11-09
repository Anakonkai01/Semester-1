#include <stdio.h>
#include <math.h>


int main (){
	int n;

	printf("Input the number :\n");
	scanf("%d",&n);
	int count = 0;

	for (int i = 2; i < n; ++i)
	{
		if (n%i == 0)
		{
			count++;
			break;
		}
	}

	if(count == 0){
		printf("%d is a PRIME NUMBER",n);
	}
	else {
		printf("%d is NOT a PRIME NUMBER",n);
	}



	return 0;
}