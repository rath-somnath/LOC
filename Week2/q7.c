
#include <stdio.h>

void move_negatives(int arr[], int n) {
  int i, j = 0;
  int temp;

  for (i = 0; i < n; i++) {
    if (arr[i] < 0) {
      if (i != j) {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      j++;
    }
  }
}

int main() {
  int arr[] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i;

  printf("Original array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  move_negatives(arr, n);

  printf("\nArray after moving negative elements to one side: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}