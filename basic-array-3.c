#include <stdio.h>

int main(void){
  int a[100];
  int n; 
  
  printf("Enter no.of elements: ");
  scanf("%d", &n);
  print("Enter elements: ");
  for(int i=0; i<n; i++){    
    scanf("%d", &a[i]);
  }
  for(int i=0; i<n; i++){    
    print("%d", a[i]);
  }
  
  int insert_idx;
  int insert_val;
  printf("Insert ELement. Input Index and Value: ");
  scanf("%d %d", &insert_idx, &insert_val);
  if(insert_idx<0 || insert_idx>=n) return 1;
  if(n==100) return 1;
  for(int i=n-1; i>=insert_idx; i--){
    a[i+1] = a[i];
  }
  a[insert_idx] = insert_val;
  n++;
  
  int delete_idx;
  printf("Delete ELement. Input Index: ");
  scanf("%d", &delete_idx);
  if(delete_idx<0 || delete_idx>=n) return 1;
  if(n==0) return 1;
  for(int i=delete_idx; i<n; i++){
    a[i] = a[i+1];
  }
  a[n-1] = 0;
  n--;
  
  int search_val;
  int flag = -1;
  printf("Enter element to search: ");
  scanf("%d", &search_val);  
  for(int i=0; i<n; i++){
    if(a[i] == search_val){
      flag = i;
      break;
    }
  }
  if(flag == -1) printf("ELement not found.");
  else printf("Element found at index %d", flag);
  
  for(int i=0; i<n; i++){
    printf("%d", a[i]);
  }
  
  return 0;
}
