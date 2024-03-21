#include <stdio.h>
#include <math.h>

// doi cho so dau tien va so cuoi cung

// decla the funcs 
int countDigit(int numberInput);
int findFirstNum(int numberInput,int count);
int findLastNum(int numberInput);
int changePos(int numberInput,int fDigit,int lDigit,int count);
// main
int main (){
  
  int n;

  printf("Input the number :\n");
  scanf("%d",&n);
  // check n negative 
  if(n < 0){
    n = -n;
  }

  int count = countDigit(n);
  int fDigit = findFirstNum(n,count);
  int lDigit = findLastNum(n);
  int newNumber = changePos(n,fDigit,lDigit,count);
  printf("new number is : %d",newNumber);
  return 0;
}



// find te first and last digit
int findFirstNum(int numberInput,int count){
  return numberInput/pow(10,count-1);
}

int findLastNum(int numberInput){
  return numberInput%10;
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


// swap 
void swap(int*lDigit,int*fDigit){
  int temp = *lDigit;
  *lDigit = *fDigit;
  *fDigit = temp;
}


// change the position of two digit
int changePos(int numberInput,int fDigit,int lDigit,int count){
  int newNumber = numberInput;
  swap(&lDigit,&fDigit);
  numberInput = newNumber/10;
  numberInput = numberInput*10 + lDigit;

  int remain = numberInput%(int)pow(10,count-1);
  newNumber = fDigit*pow(10,count-1) + remain;

  return newNumber;
}