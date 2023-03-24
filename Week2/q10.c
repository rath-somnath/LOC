#include <ctype.h>
#include <stdio.h>

int main() {
  char str[100];
  int i, alpha, digit, special;
  alpha = digit = special = 0;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i]))
      alpha++;
    else if (isdigit(str[i]))
      digit++;
    else
      special++;
  }

  printf("\nAlphabets = %d\n", alpha);
  printf("Digits = %d\n", digit);
  printf("Special characters = %d\n", special);

  return 0;
}