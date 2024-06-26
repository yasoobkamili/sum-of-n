#include <stdio.h>

int main(void) {
  /*
  int sum,n;
  printf("Enter n");
  scanf("%d",&n);
  sum= (n*(n+1))/2;
  printf("sum of first %d natural no.'s is %d",n,sum);
  */


  
  // using for loop
  int i,n,sum=0;
  printf("Enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    sum= sum+i;
  printf("%d",sum);
  return 0;

}
