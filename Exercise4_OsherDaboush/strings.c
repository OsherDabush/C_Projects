#include <stdio.h>
#include <string.h>
#include "strings.h"

// Check string length
int CheckStringLength(int _length) {
  if (_length < MIN_STR_LENGTH || _length > MAX_STR_LENGTH) {
    return INVALID_LENGTH;
  }
  return SUCCESS;
}

// Check for NULL
int CheckNULL(char *_str) {
  if (_str == NULL) {
    return NULL_ERROR;
  }
  return SUCCESS;
}

// Copy string
int MyStrCpy(char *_str1, char *_str2) {
  int nullCheck = CheckNULL(_str1) || CheckNULL(_str2);
  if (nullCheck != SUCCESS) {
    return nullCheck;
  }

  int lengthCheck = CheckStringLength(strlen(_str1));
  if (lengthCheck != SUCCESS) {
    return lengthCheck;
  }

  int i = 0;
  while (_str1[i] != '\0') {
    _str2[i] = _str1[i];
    ++i;
  }
  _str2[i] = '\0';

  return SUCCESS;
}

// Compare strings
int MyStrCmp(char *_str1, char *_str2) {
  int nullCheck = CheckNULL(_str1) || CheckNULL(_str2);
  if (nullCheck != SUCCESS) {
    return nullCheck;
  }

  int i = 0;
  while (_str1[i] != '\0' && _str2[i] != '\0') {
    if (_str1[i] != _str2[i]) {
      return _str1[i] - _str2[i];
    }
    ++i;
  }

  return _str1[i] - _str2[i];
}

// Merge sorted arrays
void MergeSortedArrays(int *_arr1, int _size1, int *_arr2, int _size2, int *_result) {
  int i = 0, j = 0, k = 0;

  while (i < _size1 && j < _size2) {
    if (_arr1[i] <= _arr2[j]) {
      _result[k++] = _arr1[i++];
    } else {
      _result[k++] = _arr2[j++];
    }
  }

  while (i < _size1) {
    _result[k++] = _arr1[i++];
  }

  while (j < _size2) {
    _result[k++] = _arr2[j++];
  }
}

// Remove characters in _str2 from _str1
void Squeeze(char *_str1, char *_str2) {
  int nullCheck = CheckNULL(_str1) || CheckNULL(_str2);
  if (nullCheck != SUCCESS) {
    return;
  }

  int i, j, index = 0;
  for (i = 0; _str1[i] != '\0'; ++i) {
    int found = 0;
    for (j = 0; _str2[j] != '\0'; ++j) {
      if (_str1[i] == _str2[j]) {
        found = 1;
        break;
      }
    }

    if (!found) {
      _str1[index++] = _str1[i];
    }
  }
  _str1[index] = '\0';
}

// Find substring location
int Location(char *_str1, char *_str2) {
  int nullCheck = CheckNULL(_str1) || CheckNULL(_str2);
  if (nullCheck != SUCCESS) {
    return nullCheck;
  }

  int len1 = strlen(_str1);
  int len2 = strlen(_str2);

  for (int i = 0; i <= len1 - len2; ++i) {
    if (strncmp(&_str1[i], _str2, len2) == 0) {
      return i;
    }
  }

  return -1;
}

// Perform binary search
int BinarySearch(int *_arr, int _size, int _target) {
  if (_arr == NULL) {
    return NULL_ERROR;
  }

  int left = 0, right = _size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (_arr[mid] == _target) {
      return mid;
    } else if (_arr[mid] < _target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

