#include <stdio.h>

int main() {
    int arr[] = {12, 45, 1, 67, 34, 9, 81};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    int i;

    if (n == 0) {
        printf("Array is empty.\\n");
        return 1;
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is: %d\\n", max);
    printf("Minimum element is: %d\\n", min);

    return 0;
}
