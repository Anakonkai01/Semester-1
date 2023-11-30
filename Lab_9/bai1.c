#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


FILE *fileInput,*fileOutput;

int main(){
    int numbers[20];
    fileInput = fopen("input01.txt", "r");
    fileOutput = fopen("output01.txt", "w");
    for (size_t i = 0; i < 20; i++)
    {
        fscanf(fileInput, "%d", &numbers[i]);
    }
    

    int sum = 0;
    for (size_t i = 0; i < 20; i++)
    {
        sum += numbers[i];
    }
    printf("%d\n",sum);
    fprintf(fileOutput, "sum = %d\n",sum);
    fclose(fileInput);
    fclose(fileOutput);
    return 0;
}


