#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("Input string 1: ");
    char str1[100];
    char str2[100];
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    printf("Input string 2: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    char* sub = strstr(str1, str2);

    if (sub != NULL) {
    	int index = 0;
    	while(sub[0] != str1[index]){
    		index++;
    	}
    	printf("%d",index);	
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
