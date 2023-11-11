#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int getLength(const char* str);
void reverseString(const char* str);
void inputString(char* str);

int main(){


	char* str = (char*)malloc(10000*sizeof(char));
	if (str == NULL)
	{
		printf("Fail to allocate memory");
		return 1;
	}
	printf("Input string: ");
	inputString(str);
	// printf("\nString's lenght = %d\n",reverseString(str));
	reverseString(str);
	return 0;
}


int getLength(const char* str){
	int length = 0;
	while(str[length] != '\0'){
		length++;
	}
	return length-1; // because fgets it has \n at the end 
}


void reverseString(const char* str){
	int length = getLength(str);
	for (int i = length - 1; i >= 0; --i)
	{
		printf("%c",str[i]);
	}
}

void inputString(char* str){
	printf("Input your String: ");
	fgets(str,10000,stdin);
}
