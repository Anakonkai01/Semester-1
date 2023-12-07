#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 1000
struct String
{
    char str[SIZE];
};

FILE *fileInput, *fileOutput;

int main()
{
    fileInput = fopen("input02.txt", "r");
    fileOutput = fopen("output02.txt", "w");

    if (fileInput == NULL || fileOutput == NULL)
    {
        perror("Error opening files");
        return 1;
    }

    struct String line[5];

    for (size_t i = 0; i < 5; i++)
    {
        if (fgets(line[i].str, SIZE, fileInput) == NULL)
        {
            perror("Error reading from file");
            fclose(fileInput);
            fclose(fileOutput);
            return 1;
        }

        line[i].str[strcspn(line[i].str, "\n")] = '\0';
    }

    for (size_t i = 0; i < 5; i++)
    {
        int length = strlen(line[i].str);
        fprintf(fileOutput, "%d\n", length);
    }

    fclose(fileInput);
    fclose(fileOutput);

    return 0;
}
