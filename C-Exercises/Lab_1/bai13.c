#include <stdio.h>

int main(){
    float m1,m2,m3,m4,m5;
    printf("Enter the grades of 5 subjects :\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    float averageMark = (m1+m2+m3+m4+m5)/5;
    if (averageMark > 9)
    {
        printf("Grade A");
    }
    else if ( averageMark > 8){
        printf("Grade B");
    }
    else if ( averageMark > 7){
        printf("Grade C");
    }
    else if ( averageMark > 6){
        printf("Grade D");
    }
    else if ( averageMark > 4){
        printf("Grade E");
    }
    else {
        printf("Grade F");
    }
    
    return 0;   
}
