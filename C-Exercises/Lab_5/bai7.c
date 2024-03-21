#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int checkChar(char str[],int* listIndex);

int main(){	
	char str[1000];
	printf("Input the string: ");
	
	int* listIndex = (int*)malloc(100*sizeof(int));
	fgets(str,1000,stdin);
	int index = checkChar(str,listIndex);
	printf("\nList of Position/Index have char: \n");

	for (int i = 0; i <= index; ++i)
	{
		printf("%d,",listIndex[i]);
	}
	return 0;
}


int checkChar(char str[],int* listIndex){
	
	int  j = 0;

	for (int i = 0; i < strlen(str); ++i)
	{
		if (isalpha(str[i]))
		{
			listIndex[j] = i;
			j++;
		}
	}
	
	return j-1;

}