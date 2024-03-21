#include <stdio.h>
#include <stdlib.h>

void inputArray(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int* array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = %d\n", i, array[i]);
    }
}

int removeDuplicates(int* dynamicArray, int* currentSize) {
    int count = 0;

    for (int i = 0; i < *currentSize; ++i) {
        if (dynamicArray[i] != -1) {
            for (int j = i + 1; j < *currentSize; ++j) {
                if (dynamicArray[j] == dynamicArray[i]) {
                    dynamicArray[j] = -1; // Mark as a duplicate
                    count++;
                }
            }
        }
    }

    int newSize = *currentSize - count;

    // Shift the non-duplicate elements to the beginning of the array
    int newIndex = 0;
    for (int i = 0; i < *currentSize; ++i) {
        if (dynamicArray[i] != -1) {
            dynamicArray[newIndex] = dynamicArray[i];
            newIndex++;
        }
    }

    *currentSize = newSize;
    return count;
}

int main() {
    int currentSize;
    printf("Input the size of the array: ");
    scanf("%d", &currentSize);

    int* dynamicArray = (int*)malloc(currentSize * sizeof(int));

    if (dynamicArray == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    inputArray(dynamicArray, currentSize);

    int count = removeDuplicates(dynamicArray, &currentSize);

    printf("\nNumber of duplicate elements = %d\n", count);
    printf("After removing duplicate elements:\n");
    outputArray(dynamicArray, currentSize);

    free(dynamicArray);
    return 0;
}
