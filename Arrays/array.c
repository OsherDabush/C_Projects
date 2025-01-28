#include <stdio.h>

void CountDigits(int arr[], int size);

int main() {
  int arr[] = {1, 1, 3, 3, 3, 5, 5, 8, 8, 8, 8, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  CountDigits(arr, size);

  return 0;
}

void CountDigits(int arr[], int size) {
  int count[10] = {0}; 

  for (int i = 0; i < size; ++i) {
    count[arr[i]]++;
  }

  printf("The amount of every element that appears in the array:\n");
  for (int i = 0; i < 10; ++i) {
    if (count[i] > 0) {
      printf("Element %d: %d times\n", i, count[i]);
    }
  }
}

