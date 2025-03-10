#ifndef ARRAYS_H
#define ARRAYS_H

#define MIN_ARR_SIZE 2
#define MAX_ARR_SIZE 50
#define SUCCESS 0
#define INVALID_SIZE -1

int EvenFirst(int _arr[], int _size);
void ShiftRight(int _arr[], int _start, int _end);
void AscendingOrder(int _arr[], int _size);
void ZerosFirstOnesAfter(int _arr[], int _size);

/*
INPUT:
  _arr[] - Input array of integers.
  _size - The size of the integers array.

OUTPUT:
  SUCCESS - For valid input.
  INVALID_SIZE - For array size less than 2 or greater than 50.

DESCRIPTION:
  Provides functions for rearranging, sorting, and modifying arrays in place.
*/

#endif 

