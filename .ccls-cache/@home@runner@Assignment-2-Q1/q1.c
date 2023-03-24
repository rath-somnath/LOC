#include <stdio.h>

int count_occurrences(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 2;
    int num_occurrences = count_occurrences(arr, n, num);
    printf("The number of occurrences of %d in the array is %d", num, num_occurrences);
    return 0;
}