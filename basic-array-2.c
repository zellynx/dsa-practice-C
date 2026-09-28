#include <stdio.h>

int main(void){
  int a[] = {3, 8, 2, 8, 5, 1};
  
  //maximum
  int max = a[0];
  for(int i=1; i<=5; i++){
    if(a[i] > max) max = a[i];
  }
  printf("Max: %d\n", max);
  
  //second-largest
  int secondLargest;
  int isAssigned = 0;
  for(int i=0; i<=5; i++){
    if(isAssigned){
        if(secondLargest>a[i] && a[i] < max){
        secondLargest = max;
        max = a[i];
      }
    }
    else{
      if(a[i] < max){
        secondLargest = a[i];
      }
    }
  }
  if(!isAssigned) secondLargest = max;
  printf("Second Largest: %d", secondLargest);
  
  //search 8
  int found = 0;
  for(int i=0; i<=5; i++){
    if(a[i]==8){
      found = 1;
      printf("Found\n");
      break;
    }
  }
  if(found == 0) printf("Not Found\n");
  
  //search any
  found = 0;
  int num;
  printf("\nEnter number to search: ");
  scanf("%d", &num);
  for(int i=0; i<=5; i++){
    if(a[i]==num){
      found = 1;
      printf("Found\n");
      break;
    }
  }
  if(found == 0) printf("Not Found\n");
  
  //count 8
  int count = 0;
  for(int i=0; i<=5; i++){
    if(a[i] == 8) count+=1;
  }
  printf("Occurences of 8: %d\n", count);
  
  //array-reverse
  int b[] = {1, 2, 3, 4, 5};
  for(int left=0, right=4; left<right; left++, right--){
    int temp = b[left];
    b[left] = b[right];
    b[right] =temp;
  }
  for(int i=0; i<=4; i++){
    printf("%d", b[i]);
  }
  
  return 0;
}
