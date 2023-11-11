#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


char* getLastName(const char* str);
void inputString(char* str);
char* getFirstName(const char* str);

int main(){


	char* str = (char*)malloc(10000*sizeof(char));
	if (str == NULL)
	{
		printf("Fail to allocate memory");
		return 1;
	}
	printf("Input your full name: ");
	inputString(str);
	

	char* fName = getFirstName(str);
	char* lName = getLastName(str);
	printf("your First Name: %s\n",fName);
	printf("your Last Name:%s\n",lName);
	free (fName);
	free(str);
	return 0;
}


int getLength(const char* str){
	int length = 0;
	while(str[length] != ' '){
		length++;
	}
	return length; // because fgets it has \n at the end 
}


char* getFirstName(const char* str){

	int length = getLength(str);
	char* fName=(char*)malloc(100*sizeof(char));
	int i = 0;
	while(i<= length){
		fName[i] = str[i];
		i++;
	}

	return fName;
}

char* getLastName(const char* str){
	const char ch = ' ';
	char* lastName = strrchr(str,ch);
	return lastName;
}


void inputString(char* str){
	printf("Input your String: ");
	fgets(str,10000,stdin);
}