#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkWords(char str[]);


int main(){	
	char str[1000];
	printf("Input the string: ");
	memset(str,'\0',1000);
	fgets(str,1000,stdin);
	int index = checkWords(str);

	if (index == strlen(str))
	{
		printf("There is no Words");
	}
	else{
		printf("\n%d\n",index);
	}

	return 0;
}


int checkWords(char str[]){
	int i = 0;
	for (; i < strlen(str); ++i)
	{
		if (isalpha(str[i])&&isalpha(str[i+1]))
		{
			break;
		}
	}
	
	return i;

}