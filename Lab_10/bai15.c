#include <stdio.h>



int FindK(int a[],int n,int k){
    for (size_t i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            return i;
        }
        
    }
    return -1;
}

// int main(){
//     int a[]= {0,1,2,3,4,5,6,7};
//     int k = 4;
//     int n = sizeof(a) / sizeof(a[0]);

//     printf("Vi tri k trong mang la : %d\n",FindK(a,n,k));

//     return 0;
// }