#include <stdio.h>
#include <string.h>

void removeChar(char *str, char c) {
    int j, n = strlen(str);
    for (int i = j = 0; i < n; i++)
        if (str[i] != c)
            str[j++] = str[i];
    str[j] = '\0';
}

int main() {
    char str[100], c;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter a character to remove: ");
    scanf(" %c", &c);
    removeChar(str, c);
    printf("Result: %s\n", str);
    return 0;
}