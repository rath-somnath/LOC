#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    int freq[256] = {0};
    int i, len;

    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        freq[(int)str[i]]++;
    }

    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && (char)i != '\n') {
            printf("%c: %d\n", (char)i, freq[i]);
        }
    }

    return 0;
}