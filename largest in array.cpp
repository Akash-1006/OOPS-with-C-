#include <stdio.h>
int main() {
  int n,arr[100],small=0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
    if (arr[0] > arr[i]) {
      small = arr[i];
    }
  }
  

  printf("Largest element = %d", arr[0]);
  printf("smallest element = %d", small);
  return 0;
}

