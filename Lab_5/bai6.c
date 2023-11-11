#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkChar(char str[]);


int main(){	
	char str[1000];
	printf("Input the string: ");
	memset(str,'\0',1000);
	fgets(str,1000,stdin);
	int index = checkChar(str);

	if (index == strlen(str))
	{
		printf("There is no char");
	}
	else{
		printf("\n%d\n",index);
	}

	return 0;
}


int checkChar(char str[]){
	int i = 0;
	for (; i < strlen(str); ++i)
	{
		if (isalpha(str[i]))
		{
			break;
		}
	}
	
	return i;

}