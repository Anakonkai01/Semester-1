#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkPrime(int n);

int main()
{
    int n;
    printf("Input the number: ");
    scanf("%d",&n);
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