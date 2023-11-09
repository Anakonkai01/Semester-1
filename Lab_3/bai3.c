#include <stdio.h>
#include <stdlib.h>


// in ra bang cuu chuong cua 1 so nhap
void printTable(int n);

int main() {
    int n;
    printf("Input the any number: ");
    scanf("%d",&n);
    printTable(n);
    return 0;
}


void printTable(int n){
    printf("Table of Number :\n");
    for (int i = 1; i < 11; ++i)
    {
        int cal = i*n;
        printf("%d ",cal);
    }
}