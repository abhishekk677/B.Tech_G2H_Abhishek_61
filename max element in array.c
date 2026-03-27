#include <stdio.h>

int main() {
    int n, i;
    int array[100];
    int max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Maximum element is: %d\\n", max);

    return 0;
}
