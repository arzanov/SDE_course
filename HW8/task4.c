#include <stdio.h>
#include <stdbool.h>
#define TOTAL 10

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool isSwapped(int arr[TOTAL]) {
    for (int j = 0; j < TOTAL - 1; ++j)
        if (arr[j]%10 > arr[j+1]%10) {
            swap(&arr[j], &arr[j+1]);
            return true;
        }
    return false;
}

int main(void) {
    int arr[TOTAL];

    for (int i = 0; i < TOTAL; ++i)
        scanf("%d", &arr[i]);

    bool swapped;
    do {
        swapped = isSwapped(arr);
    } while (swapped);

    for (int i = 0; i < TOTAL; ++i)
        printf("%d ", arr[i]);

    return 0;
}
