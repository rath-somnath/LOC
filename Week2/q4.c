#include <stdio.h>

int main() {
  int i, j, n = 5;
  int count = 1;

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%3d", count++);
    }
    printf("\n");
  }

  return 0;
}
