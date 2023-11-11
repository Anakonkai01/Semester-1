#include <stdio.h>
#include <ctype.h>
#include <string.h>
// void Output(int n);

// int test(int n);

int main(){
	char str1[100];
	fgets(str1,100,stdin);
	char str2[100];
	fgets(str2,100,stdin);
	printf("%ld",strlen(str1)+strlen(str2));
}


// void Output(int* num){ // 
// 	num = num*10
// 	printf("%d",n);
// }


// int test(int n){
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		printf("hello boy\n");
// 	}
// 	printf("\n\n\n");
// 	// printf("%d + %d",10,13);
// 	return n*10;
// }