#include <stdio.h>
#include <math.h>


int addValueToArray(int numberInput);
int calculate(int numberInput,int count);
int main (){
  int n;

  printf("Input the number : ");
  scanf("%d",&n);
  // check n negative 
  if(n < 0){
    n = -n;
  }

  int a[100];
  int count = 0;
  for (int i = 1; i < n; ++i)
  {
    if (n%i == 0)
    {
      a[count] = i;
      count++;
    }
  }
  int sum = 0;
  for (int i = 0; i < count  ; ++i)
  {
    sum += a[i];
  }
  if (sum == n)
  {
    printf("This is PERFECT NUMBER");
  }
  else {
    printf("NOT PERFECT NUMBER");
  }


  return 0;
}

