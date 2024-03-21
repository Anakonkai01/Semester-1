
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// in so perfect tu 1 den n
bool isPerfect(int n);

int main()
{
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
	printf("PERFECT NUMBER less than or equal with %d = ", n);
	for (int i=2; i<n; i++)
		if (isPerfect(i))
			printf("%d, ",i);

	return 0;
}


bool isPerfect(int n)
{
	int sum = 1;

	for (int i=2; i*i<=n; i++)
	{
		if (n%i==0)
		{
			if(i*i!=n)
				sum = sum + i + n/i;
			else
				sum=sum+i;
		}
	} 

	if (sum == n && n != 1)
		return true;

	return false;
}