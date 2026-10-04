#include <stdio.h>

void bubbleSort(int *nums, int numsSize){
  int noSwapFlg;
  for(int sorted=0; sorted<numsSize-1; sorted++){
    noSwapFlg = 1;
    for(int j=0; j<(numsSize-sorted)-1; j++){      
      if(nums[j] > nums[j+1]){
        noSwapFlg = 0;
        int temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
    if(noSwapFlg) break;
  }
}

void bubbleSort2(int *nums, int numsSize){
  int noSwapFlg;
  do{
    noSwapFlg = 1;
    for(int j=0; j<numsSize-1; j++){
      if(nums[j] > nums[j+1]){
        noSwapFlg = 0;
        int temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
    numsSize--;
  }while(numsSize>1 && !noSwapFlg);
}

void print(int *nums, int numsSize){
  while(numsSize!=0){
    printf("%d ", *nums);
    nums++;
    numsSize--;
  }
}

int main(void){
  int a[] = {5,1,4,2,8};
  bubbleSort(a, 5);
  print(a, 5);
  
  return 0;
}
