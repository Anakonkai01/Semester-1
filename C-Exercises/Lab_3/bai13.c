#include <stdio.h>
#include <math.h>

// kiem tra so armstrong

int countDigit(int numberInput);
int calculate(int numberInput,int count);
int main (){
  int n;

  printf("Input the number :\n");
  scanf("%d",&n);
  // check n negative 
  if(n < 0){
    n = -n;
  }


  int count = countDigit(n);
  int armStrongNumber = calculate(n,count);

  if (n == armStrongNumber)
   {
     printf("%d is an ARMSTRONG NUMBER",n);
   } 
   else {
      printf("%d is not an ARMSTRONG NUMBER",n);
   }
  return 0;
}





// count the digit in the number
int countDigit(int numberInput){
  int count = 0;
  while(numberInput > 0){
    numberInput/= 10;
    count++;
  }
  return count;
}


int calculate(int numberInput,int count){
  int sum = 0;
  int remain ;
  for (int i = 0; i < count; ++i)
  {
    remain = numberInput%10;
    sum += pow(remain, count);
    numberInput /= 10;
  }

  return sum;
}