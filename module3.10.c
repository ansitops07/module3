#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 8, 3, 1};
    int i, j, temp;

      for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
