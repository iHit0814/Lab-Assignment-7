#include <stdio.h>

void bubble_sort(int arr[], int n, int swaps[]) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[j]++;
            }
        }
    }
}

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr)/sizeof(arr[0]);
    int swaps[n];
    for (int i = 0; i < n; i++) {
        swaps[i] = 0;
    }
    bubble_sort(arr, n, swaps);
    for (int i = 0; i < n; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += swaps[i];
    }
    printf("Total swaps: %d", total);

    return 0;
}
