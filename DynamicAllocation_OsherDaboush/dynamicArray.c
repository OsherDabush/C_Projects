#include <stdio.h>
#include <stdlib.h>
#include "dynamicArray.h"

// Create a dynamic array
dynamicArray_type *DynamicArrayCreate(int size, int blockSize) {
  if (size < 0 || blockSize < 0) {
    return NULL; 
  }

  dynamicArray_type *arrayPtr = (dynamicArray_type *)malloc(sizeof(dynamicArray_type));
  if (arrayPtr == NULL) {
    return NULL; 
  }

  arrayPtr->dArray = (int *)malloc(size * sizeof(int));
  if (arrayPtr->dArray == NULL) {
    free(arrayPtr); 
    return NULL;
  }

  arrayPtr->dArraySize = size;
  arrayPtr->dArrayBlockSize = blockSize;
  arrayPtr->NumOfElements = 0;

  return arrayPtr;
}

// Destroy the dynamic array
void DynamicArrayDestroy(dynamicArray_type *DynamicArrayPtr) {
  if (DynamicArrayPtr == NULL) {
    return; // Nothing to destroy
  }

  free(DynamicArrayPtr->dArray);
  free(DynamicArrayPtr);
}

// Insert an element into the dynamic array
int DynamicArrayInsert(dynamicArray_type *DynamicArrayPtr, int data) {
  if (DynamicArrayPtr == NULL || DynamicArrayPtr->dArray == NULL) {
    return NULL_ERROR;
  }

  if (DynamicArrayPtr->NumOfElements == DynamicArrayPtr->dArraySize) {
    if (DynamicArrayPtr->dArrayBlockSize == 0) {
      return OVERFLOW;
    }

    int newSize = DynamicArrayPtr->dArraySize + DynamicArrayPtr->dArrayBlockSize;
    int *newArray = (int *)realloc(DynamicArrayPtr->dArray, newSize * sizeof(int));
    if (newArray == NULL) {
      return REALLOC_FAIL;
    }

    DynamicArrayPtr->dArray = newArray;
    DynamicArrayPtr->dArraySize = newSize;
  }

  DynamicArrayPtr->dArray[DynamicArrayPtr->NumOfElements++] = data;
  return SUCCESS;
}

// Delete an element from the dynamic array
int DynamicArrayDelete(dynamicArray_type *DynamicArrayPtr, int *data) {
  if (DynamicArrayPtr == NULL || DynamicArrayPtr->dArray == NULL || data == NULL) {
    return NULL_ERROR;
  }

  if (DynamicArrayPtr->NumOfElements == 0) {
    return UNDERFLOW;
  }

  *data = DynamicArrayPtr->dArray[--DynamicArrayPtr->NumOfElements];
  
  return SUCCESS;
}

