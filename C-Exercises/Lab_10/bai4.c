#include <stdio.h>
#include <string.h>

int checkStr(char str[]){
    int len = strlen(str);
    int mid = (len%2 == 0)? len/2:len/2+1;

    for (size_t i = 0; i < mid; i++)
    {
        if (str[i] != str[len-1-i])
        {
            return 0;
        }
        
    }
    return 1;
    
    
}


// int main(){
//     char str[100] = "coc";
//     checkStr(str)?printf("Chuoi doi xung"):printf("chuoi ko doi xung");
//     return 0;
// }