#include <stdio.h>
#include <ctype.h>


int main(){
    char x;
    printf("Input: ");
    scanf("%c",&x);
    if (isalnum(x))
    {
        printf("day la so alphanumeric");
    }else {
        printf("day ko phai la alphanumeric");
    }
    
}
