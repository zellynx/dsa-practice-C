#include <stdio.h>

int main(void){
  int num;
  printf("\nEnter an integer: ");
  scanf("%d", &num);
  
  if(num%2 == 0) printf("\nEven number.");
  else printf("\nOdd number.");
  
  return 0;
}
