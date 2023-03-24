
#include <stdio.h>

int main() {
  int arr[100], freq[100];
  int n, i, j, max_num, max_freq;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    freq[i] = -1;
  }

  for (i = 0; i < n; i++) {
    int count = 1;
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
        freq[j] = 0;
      }
    }
    if (freq[i] != 0) {
      freq[i] = count;
    }
  }

  max_freq = 0;
  for (i = 0; i < n; i++) {
    if (freq[i] > max_freq) {
      max_freq = freq[i];
      max_num = arr[i];
    }
  }

  printf("The maximum occurring integer is %d, which occurs %d times.\n",
         max_num, max_freq);

  return 0;
}