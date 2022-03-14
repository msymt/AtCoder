#include <stdio.h>
#include <math.h>

int main(void){
  int a, b, c,k;
  double C;
  scanf("%d", &a);
  scanf("%d", &b);
  c = b;
  while(c > 0){
  	c /= 10;
    k++;
  }
  a = a * pow(10,k);
  c = a + b;
  C = sqrt(c);
  if(ceil(C) == floor(C))
    printf("Yes");
  else
    printf("No");
  return 0;
}
