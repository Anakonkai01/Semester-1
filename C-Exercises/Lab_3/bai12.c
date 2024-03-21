#include <stdio.h>
#include <math.h>

// kiem tra so nguyen to

int main (){
    int n ;
    int check = 0;
    // check the if natural number
    do
    {
        if (check >= 1 ){
            printf("Your input is not natural number please try again\n");
        }  
        printf("Input the natural number : ");
        scanf("%d",&n);
        check+=1;
    } while (n<1);
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