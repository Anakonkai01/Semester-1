#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void insert(char* str1, char* str2, int index);

int main() {
    printf("Input string 1: ");
    char str1[10000];
    char str2[10000];
    fgets(str1, sizeof(str1), stdin);

    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    printf("Input string 2: ");
    fgets(str2, sizeof(str2), stdin);

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    int index;
    printf("Input the position: ");
    scanf("%d", &index);

    insert(str1, str2, index);
    printf("Result: %s", str1);

    return 0;
}

void insert(char* str1, char* str2, int index) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = len1; i >= index; --i) {
        str1[i + len2] = str1[i];
    }

    for (int i = 0; i < len2; ++i) {
        str1[index + i] = str2[i];
    }
}
