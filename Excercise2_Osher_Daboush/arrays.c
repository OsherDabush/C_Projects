#include <stdio.h>
#include "arrays.h"

// Check array size
int CheckSize(int _size) {
    if (_size < MIN_ARR_SIZE || _size > MAX_ARR_SIZE) {
        return INVALID_SIZE;
    }
    return SUCCESS;
}

// Move even numbers to the front
int EvenFirst(int _arr[], int _size) {
    if (CheckSize(_size) == INVALID_SIZE) {
        return INVALID_SIZE;
    }

    int countEvenNumbers = 0;
    int evenNumberIndex = 0;

    for (int i = 0; i < _size; i++) {
        if (_arr[i] % 2 == 0) {
            countEvenNumbers++;
            int temp = _arr[i];
            ShiftRight(_arr, evenNumberIndex, i);
            _arr[evenNumberIndex] = temp;
            evenNumberIndex++;
        }
    }

    return countEvenNumbers;
}

// Shift elements right
void ShiftRight(int _arr[], int _start, int _end) {
    for (int k = _end; k > _start; --k) {
        _arr[k] = _arr[k - 1];
    }
}

// Sort array in ascending order
void AscendingOrder(int _arr[], int _size) {
    if (CheckSize(_size) == INVALID_SIZE) {
        return;
    }

    for (int i = 0; i < _size - 1; ++i) {
        for (int j = 0; j < _size - i - 1; ++j) {
            if (_arr[j] > _arr[j + 1]) {
                int temp = _arr[j];
                _arr[j] = _arr[j + 1];
                _arr[j + 1] = temp;
            }
        }
    }
}

// Move zeros to the front, ones to the back
void ZerosFirstOnesAfter(int _arr[], int _size) {
    if (CheckSize(_size) == INVALID_SIZE) {
        return;
    }

    int zeroIndex = 0;

    for (int i = 0; i < _size; i++) {
        if (_arr[i] == 0) {
            int temp = _arr[i];
            ShiftRight(_arr, zeroIndex, i);
            _arr[zeroIndex] = temp;
            zeroIndex++;
        }
    }
}

