#include <stdio.h>
#include <math.h>



int main (){
  int n;

  printf("Input the number :\n");
  scanf("%d",&n);
  // check n negative 
  if(n < 0){
    n = -n;
  }


  // reverse number
  int newNumber = 0;
  int copyNumber = n;
  while	(copyNumber > 0){
  	int remain = copyNumber%10;
  	newNumber = newNumber*10 + remain;
  	copyNumber /= 10 ;
  }

  if(n == newNumber){
  	printf("%d is Palindrome number",n);
  }
  else {
  	printf("%d is NOT Palindrome number",n);
  }
  return 0;
}