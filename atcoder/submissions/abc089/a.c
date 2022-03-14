#include<stdio.h>

int main(void){
  int N;
  scanf("%d", &N);

  if(N <= 2)
    printf("0");
  else
    printf("%d", (N /3));
  return 0;
}
