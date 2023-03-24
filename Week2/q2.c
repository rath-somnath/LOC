#include <stdio.h>
#define MAX_SIZE 100

int main() {
  int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
  int size1, size2, i, j, k;

  printf("Enter the size of array 1 (up to %d): ", MAX_SIZE);
  scanf("%d", &size1);
  printf("Enter the elements of array 1: ");
  for (i = 0; i < size1; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the size of array 2 (up to %d): ", MAX_SIZE);
  scanf("%d", &size2);
  printf("Enter the elements of array 2: ");
  for (i = 0; i < size2; i++) {
    scanf("%d", &arr2[i]);
  }

  for (i = 0; i < size1; i++) {
    merged[i] = arr1[i];
  }
  for (j = 0; j < size2; j++) {
    merged[i + j] = arr2[j];
  }
  int merged_size = i + j;
  printf("Merged array in reverse order: ");
  for (k = merged_size - 1; k >= 0; k--) {
    printf("%d ", merged[k]);
  }
  printf("\n");

  return 0;
}