#include <stdio.h>

int main(void){
  int a[6] = {4, 7, 2, 9, 1, 8};
  
  //traverse
  for(int i=0; i<=5; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  
  //reverse-traversal
  for(int i=5; i>=0; i--){
    printf("%d ", a[i]);
  }
  printf("\n");
  
  //maximum
  int max = a[0];
  for(int i=1; i<=5; i++){
    if(a[i] > max) max = a[i];
  }
  printf("Max: %d\n", max);
  
  //minimum
  int min = a[0];
  for(int i=1; i<=5; i++){
    if(a[i] < min) min = a[i];
  }
  printf("Min: %d\n", min);
  
  //sum
  int sum = 0;
  for(int i=0; i<=5; i++){
    sum += a[i];
  }
  printf("Sum: %d\n", sum);
  
  //count-even
  int count = 0;
  for(int i=0; i<=5; i++){
    if(a[i]%2 == 0) count+=1;
  }
  printf("Even count: %d\n", count);
  
  //count->5
  int greater_count = 0;
  for(int i=0; i<=5; i++){
    if(a[i] > 5) greater_count+=1;
  }
  printf("Numbers greater than 5: %d\n", greater_count);
  
  return 0;
}
