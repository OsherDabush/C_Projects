#include <stdio.h>

int maxSum(int arr[], int n, int k) {
    int max_sum = 0, window_sum = 0;

    // Compute the sum of the first window
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // Add the next element, remove the first element of the window
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main() {
    int arr[] = {1, 3, 2, 5, 7, 2, 4, 6};
    int k = 3; // Window size
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum sum of subarray of size %d: %d\n", k, maxSum(arr, n, k));

    return 0;
}
