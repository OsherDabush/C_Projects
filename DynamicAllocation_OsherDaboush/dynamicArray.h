#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <stdbool.h>

#define MAX_ARRAY_SIZE 100
#define SUCCESS          0  /* Operation completed successfully. */
#define NULL_ERROR      -1  /* NULL pointer error: Invalid input or uninitialized array. */
#define OVERFLOW        -2  /* Array overflow: No space to grow or block size is 0. */
#define REALLOC_FAIL    -3  /* Memory reallocation failed during resizing. */
#define UNDERFLOW       -4  /* Array underflow: No elements to delete. */

// Structure representing the dynamic array
typedef struct DynamicArray {
    int *dArray;          /* Pointer to the dynamic array. */
    int dArraySize;       /* Current allocated size of the array. */
    int dArrayBlockSize;  /* Increment size for resizing. */
    int NumOfElements;    /* Current number of elements in the array. */
} dynamicArray_type;


/*
Create a dynamic array.
  INPUT:
    size - Initial size of the dynamic array.
    blockSize - Increment size for resizing the array.

OUTPUT:
   Returns a pointer to the created dynamic array, or NULL if memory allocation fails.

DESCRIPTION:
   Allocates memory for a dynamic array and initializes its managing structure.
   Ensures that the size and block size are valid (non-negative).
*/
 dynamicArray_type *DynamicArrayCreate(int size, int blockSize);


/*
Destroy the dynamic array.

 INPUT:
   DynamicArrayPtr - Pointer to the dynamic array struct.

 OUTPUT:
   None.

 DESCRIPTION:
   Frees the memory allocated for the dynamic array and the managing structure.
   Ensures no memory leaks by releasing resources in the correct order.
*/
 void DynamicArrayDestroy(dynamicArray_type *DynamicArrayPtr);


/*
Insert an element into the dynamic array.

 INPUT:
   DynamicArrayPtr - Pointer to the dynamic array struct.
   data - The integer to insert.

 OUTPUT:
   SUCCESS (0) - Element inserted successfully.
   NULL_ERROR (-1) - The array pointer or its internal array is NULL.
   OVERFLOW (-2) - Array cannot grow further because the block size is 0.
   REALLOC_FAIL (-3) - Memory reallocation failed during resizing.

 DESCRIPTION:
   Adds a new element to the dynamic array. If the array is full, attempts to resize
   the array by the block size. If resizing fails, returns an appropriate error code.
 */
  int DynamicArrayInsert(dynamicArray_type *DynamicArrayPtr, int data);


/*
 Delete an element from the dynamic array.

 INPUT:
   DynamicArrayPtr - Pointer to the dynamic array struct.
    data - Pointer to store the deleted element.
 
  OUTPUT:
    SUCCESS (0) - Element deleted successfully.
    NULL_ERROR (-1) - The array pointer, its internal array, or the output pointer is NULL.
    UNDERFLOW (-4) - Array is empty, no elements to delete.
 
  DESCRIPTION:
    Removes the last element from the dynamic array and stores it in the provided pointer.
    Ensures safety checks for empty arrays and invalid input.
 */
  int DynamicArrayDelete(dynamicArray_type *DynamicArrayPtr, int *data);

#endif

