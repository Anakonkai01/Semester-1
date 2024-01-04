#include <stdio.h>


int countDuplicates(int a[],int n,int k){
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            count++;
        }
        
    }
    return count;
}

// int main(){
//     int a[] = {5,2,2,3,5,1,2,3};
//     int k = 2;
//     int n = sizeof(a) / sizeof(a[0]);

//     printf("so lan k xuat hien trong mang = %d ",k,countDuplicates(a,n,k));


//     return 0;
// }