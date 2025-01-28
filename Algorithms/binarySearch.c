#include <stdio.h>

int BinarySearch(int arr[], int size, int target);

int main() {
    int arr[] = {10, 20, 30, 40, 50, 55, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 55;

    int result = BinarySearch(arr, size, target);

    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found.\n", target);
    }

    return 0;
}

int BinarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found, return index
        } else if (arr[mid] < target) {
            low = mid + 1; // Focus on the right half
        } else {
            high = mid - 1; // Focus on the left half
        }
    }

    return -1; // Target not found
}