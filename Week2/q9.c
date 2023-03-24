#include <stdio.h>

int main() {
  int rows = 5;
  int cols = 5;

  for (int i = 0; i < rows; i++) {
    for (int j = cols - i; j > 0; j--) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}