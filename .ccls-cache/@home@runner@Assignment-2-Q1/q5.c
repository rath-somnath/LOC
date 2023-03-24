
#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int arr1[MAX_SIZE], arr2[MAX_SIZE], i, n;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
  }

  for (i = 0; i < n; i++) {
    arr2[i] = arr1[i];
  }

  printf("Elements of copied array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr2[i]);
  }

  return 0;
}