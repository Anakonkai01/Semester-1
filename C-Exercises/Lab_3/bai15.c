#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// in ra list so nguyen to tu 2 den n

bool checkPrime(int n);

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
    printf("the list of prime number less than n = ");
    for(int i = 2; i <= n; i++){
    	if(checkPrime(i)){
    		printf("%d , ",i);
    	}
    }
    return 0;
}



bool checkPrime(int n){
	bool check = true;
    if (n == 0 || n == 1) {
        check = false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            check = false;
            break;
        }
    }
    return check;
}