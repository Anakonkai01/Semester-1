#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5

int LinearSearch(int a[], int val);
int SentinalSearch(int a[], int val);
int BinarySearch(int a[], int val);
void bubble_sort(int a[]);

int main() {
    char fileName[10];
    printf("Enter File Name: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    FILE *fileInput = fopen(fileName, "r");
    printf("File Name: %s\n", fileName);
    printf("%d",strlen(fileName));
    if (fileInput == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int a[SIZE];
    for (size_t i = 0; i < SIZE; i++) {
        fscanf(fileInput, "%d", &a[i]);
    }

    fclose(fileInput);

    // Sort the array using bubble sort
    bubble_sort(a);

    int val = 0;
    printf("Enter the number you want to find: ");
    scanf("%d", &val);

    printf("1. Linear Search\n");
    printf("2. Sentinel Linear Search\n");
    printf("3. Binary Search\n");
    printf("Choose one of these search algorithms (example: 1, 2, 3): ");
    int choose;
    scanf("%d", &choose);

    int index = -1;
    switch (choose) {
    case 1:
        index = LinearSearch(a, val);
        break;
    case 2:
        index = SentinalSearch(a, val);
        break;
    case 3:
        index = BinarySearch(a, val);
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }

    if (index == -1)
        printf("Element was not found in the array\n");
    else
        printf("Position in the array is: %d\n", index);

    return 0;
}

int LinearSearch(int a[], int val) {
    for (size_t i = 0; i < SIZE; i++) {
        if (a[i] == val) {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int a[], int val) {
    int l = 0, r = SIZE - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == val)
            return m;
        else if (a[m] < val)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int SentinalSearch(int a[], int val) {
    int last = a[SIZE - 1];
    a[SIZE - 1] = val;
    int i = 0;
    while (a[i] != val) {
        i++;
    }
    a[SIZE - 1] = last;
    if (i < SIZE - 1 || last == val) {
        return i;
    } else {
        return -1;
    }
}

void bubble_sort(int a[]) {
    int swap = 1;
    for (size_t i = 0; i < SIZE - 1; i++) {
        swap = 0;
        for (size_t j = 0; j < SIZE - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = 1;
            }
        }

        if (!swap) {
            break;
        }
    }
}
