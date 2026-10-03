#include <stdio.h>

void reverse(int *nums, int numsSize){
  int left = 0;
  int right = numsSize-1;
  
  while(left<right){
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;
    
    left++;
    right--;
  }
}

void zeros2End(int *nums, int numsSize){
  for(int i=0; i<numsSize; i++){
    if(nums[i] == 0){
      for(int j=i+1; j<numsSize; j++){
        nums[j-1] = nums[j]; 
      }
      nums[numsSize-1] = 0;
      numsSize--;
      i--;
    }   
  }
  /*
  for(int r=0, w=0; r<numsSize; r++){
        if(nums[r] != 0){
            if(r > w){                
                nums[w] = nums[r];
                nums[r] = 0;
            }
            w++;           
        }    
    }
  */
  /*
  for(int i=0, zStart=-1; i<numsSize; i++){
        if(nums[i] == 0 && zStart == -1){
            zStart = i;
        }
        else if(nums[i] != 0 && zStart != -1){
            nums[zStart] = nums[i];
            nums[i] = 0;
            zStart++;            
        }            
    }
  */
}

void isPalindrome(int *nums, int numsSize){
  int left = 0;
  int right = numsSize-1;
  
  while(left < right){
    if(nums[left] != nums[right]){
      printf("Not Palindrome!");
      return;
    }
    left++;
    right--;
  }
  printf("Palindrome!");
}

void print(int *nums, int numsSize){
  while(numsSize!=0){
    printf("%d", *nums);
    nums++;
    numsSize--;
  }
}

int main(void){
  int a[] = {1,2,3,4,5,6};
  
  reverse(a, 6);
  print(a, 6);
  printf("\n");
  
  int b[] = {0,1,0,3,12};
  
  zeros2End(b, 5);
  print(b, 5);
  printf("\n");
  
  int c[] = {1,2,3,2,1};
  int d[] = {1,2,3,4,1};
  
  isPalindrome(c, 5);
  isPalindrome(d, 5);  
  printf("\n");
  
  return 0;
}
