#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 1000

int LinearSearch(int* a,int val);
int SentinalSearch(int* a);
int BinarySearch(int* a);
int TheUbiquitousBinarySearch(int* a);
int MetaBinarySearchOROneSidedBinarySearch(int* a);
int TernarySearch(int* a);
int JumpSearch(int* a);
int InterpolationSearch(int* a);
int ExponentialSearch(int* a);
int FibonacciSearch(int* a);





int main(){
    char fileName[SIZE];
    printf("Enter File Name: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    FILE *fileInput = fopen(fileName, "r");
    
    int a[10];
    for (size_t i = 0; i < 10; i++)
    {   
        fscanf(fileInput, "%d", &a[i]);
    }
    
    int val = 0;
    printf("Enter Number you want to find: ");
    scanf("%d", &val);

   
    printf("1.Linear Search\n");
    printf("2.Sentinel Linear Search\n");
    printf("3.Binary Search\n");
    printf("4.Meta Binary Search | One-Sided Binary Search\n");
    printf("5.Ternary Search\n");
    printf("6.Jump Search\n");
    printf("7.Interpolation Search\n");
    printf("8.Exponential Search\n");
    printf("9.Fibonacci Search\n");
    printf("10.The Ubiquitous Binary Search\n");

    printf("Choose one these search Algorithms (example :1, 2 , 3 ...): ");
    int choose;
    scanf("%d",&choose);


    int index = -1;
    switch (choose) {
    {
    case 1:
        
        index = LinearSearch(a,val);
        printf("Possition in the file is : %d\n",index);
        break;
    // case 2:
    //     // SentinelLinearSearch(a);
    //     break;
    default:
        break;
    }

    return 0;
}



}








int LinearSearch(int a[],int val){
    int index = 0;                                      
    for (size_t i = 0; i < 10; i++)
    {
        if (a[i] == val)
        {
            index = i;
            break;
        }
    }
    return index; 
}



// int SentinelLinearSearch(int* a){
//     int index = 0;


//     return index;
// }



// int BinarySearch(int* a){
//     int index = 0;


//     return index;
// }



// int MetaBinarySearchOROneSidedBinarySearch(int* a){
//     int index = 0;


//     return index;
// }



// int TernarySearch(int* a){
//     int index = 0;


//     return index;
// }



// int JumpSearch(int* a){
//     int index = 0;


//     return index;
// }



// int InterpolationSearch(int* a){
//     int index = 0;


//     return index;
// }



// int ExponentialSearch(int* a){
//     int index = 0;


//     return index;
// }



// int FibonacciSearch(int* a){
//     int index = 0;


//     return index;
// }



// int TheUbiquitousBinarySearch(int* a){
//     int index = 0;


//     return index;
// }




