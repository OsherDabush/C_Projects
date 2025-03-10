#ifndef STRINGS_H
#define STRINGS_H

#define MIN_STR_LENGTH 1
#define MAX_STR_LENGTH 100
#define SUCCESS 0
#define INVALID_LENGTH -1
#define NULL_ERROR -2
#define INVALID_NUMBER -3

int MyStrCpy(char *_str1, char *_str2);
/*
INPUT:
  *_str1 - Source string to be copied.
  *_str2 - Destination string where the source string will be copied.

OUTPUT:
  *_str2 will contain the copied content of *_str1.

DESCRIPTION:
  Copies the contents of *_str1 into *_str2, including the null terminator.
*/

int MyStrCmp(char *_str1, char *_str2);
/*
INPUT:
  *_str1 - First string for comparison.
  *_str2 - Second string for comparison.

OUTPUT:
  0 - If both strings are equal.
  < 0 - If *_str1 < *_str2 lexicographically.
  > 0 - If *_str1 > *_str2 lexicographically.

DESCRIPTION:
  Compares two strings lexicographically.
*/

void MergeSortedArrays(int *_arr1, int _size1, int *_arr2, int _size2, int *_result);
/*
INPUT:
  *_arr1 - First sorted array.
  _size1 - Size of the first array.
  *_arr2 - Second sorted array.
  _size2 - Size of the second array.
  *_result - Array to store the merged sorted result.

OUTPUT:
  *_result contains the merged sorted array.

DESCRIPTION:
  Merges two sorted arrays into a single sorted array.
*/

void Squeeze(char *_str1, char *_str2);
/*
INPUT:
  *_str1 - The base string to modify.
  *_str2 - String containing characters to remove from *_str1.

OUTPUT:
  *_str1 is modified to exclude characters from *_str2.

DESCRIPTION:
  Removes all characters from *_str1 that are present in *_str2.
*/

int Location(char *_str1, char *_str2);
/*
INPUT:
  *_str1 - The main string.
  *_str2 - The substring to search for.

OUTPUT:
  Returns the starting index of the first occurrence of *_str2 in *_str1.
  Returns -1 if *_str2 is not found.

DESCRIPTION:
  Searches for *_str2 within *_str1 and returns the starting index.
*/

int BinarySearch(int *_arr, int _size, int _target);
/*
INPUT:
  *_arr - Sorted array.
  _size - Size of the array.
  _target - Element to find.

OUTPUT:
  Returns the index of the target if found.
  Returns -1 if not found.

DESCRIPTION:
  Performs binary search on a sorted array.
*/

#endif

