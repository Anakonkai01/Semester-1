#include <stdio.h>
#include <math.h>

// dao nguoc toan bo chu so

// decla the funcs 
int countDigit(int numberInput);
int reverseNumber(int numberInput,int count);

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
  int revNumber = reverseNumber(n,count);
  printf("new number is : %d",revNumber);
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


// change the position of two digit
int reverseNumber(int numberInput,int count){
	int revN = 0;
	int remain = numberInput%10;
	while(count > 0){
		revN += remain*pow(10,count-1);
		numberInput /= 10;
		remain = numberInput%10;
		count--;
	}
	return revN;
}