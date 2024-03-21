#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getLength(char* str);
void concat(char str1[],char str2[]);

int main(){
	char str1[2000];
	char str2[1000];
	printf("Input string 1: ");
	fgets(str1,1000,stdin);
	printf("Input string 2: ");
	fgets(str2,1000,stdin);

	concat(str1,str2);
	printf("After concat => strint 1 : ");
	printf("%s",str1);
	return 0;	
}

int getLength(char* str){
	int length = 0;
	while(str[length] != '\0'){
		length++;
	}
	return length - 1;
}

void concat(char str1[],char str2[]){
	for (int i = getLength(str1),j = 0; i < getLength(str1)+getLength(str2); ++i,++j)
	{
		str1[i] = str2[j];
	}
}