#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void* convert(const char* str);

int main(){
	char* str = (char*)malloc(1000*sizeof(char));
	printf("Input string: ");
	fgets(str,1000,stdin);
	
	convert(str);
	return 0;
}

void* convert(const char* str){
	char* newStr = (char*)malloc(100*sizeof(char));
	for (int i = 0,j = 0; i < strlen(str); ++i)
	{
		if (isalpha(str[i]) && str[i+1] == ' ')
		{
			newStr[j] = str[i];
			newStr[j+1] = ' ';
			j+=2;
			continue;
		}
		if (isalpha(str[i]))
		{
			newStr[j] = str[i];
			j++;
		}
	}

	for (int i = 1; i < strlen(newStr); ++i)
	{
		newStr[i] = tolower(newStr[i]);
	}
	// upper the first char of each 
	newStr[0] = toupper(newStr[0]);
	for (int i = 0; i < strlen(newStr); ++i)
	{
		if (isspace(newStr[i]) && isalpha(newStr[i+1]))
		{
			newStr[i+1] = toupper(newStr[i+1]);
		}
	}

	//lower all char after the first char
	
	printf("\n\n%s\n\n",newStr);
	// return newStr;
}
