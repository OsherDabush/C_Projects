#include <stdio.h>
#include "arrays.h"

int main() {
    int arr[] = {2, 21, -8, 6, 9, -7, 10, 11};
    int _size = sizeof(arr) / sizeof(arr[0]);

    // Test EvenFirst
    int evenCount = EvenFirst(arr, _size);
    if (evenCount != INVALID_SIZE) {
        printf("Array after EvenFirst: ");
        for (int i = 0; i < _size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nEven numbers count: %d\n", evenCount);
    } else {
        printf("Invalid array size for EvenFirst\n");
    }

    // Test AscendingOrder
    AscendingOrder(arr, _size);
    printf("Array after AscendingOrder: ");
    for (int i = 0; i < _size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Test ZerosFirstOnesAfter
    int binaryArr[] = {0, 1, 0, 0, 1, 0, 1};
    int binarySize = sizeof(binaryArr) / sizeof(binaryArr[0]);
    ZerosFirstOnesAfter(binaryArr, binarySize);
    printf("Array after ZerosFirstOnesAfter: ");
    for (int i = 0; i < binarySize; i++) {
        printf("%d ", binaryArr[i]);
    }
    printf("\n");

    return 0;
}

