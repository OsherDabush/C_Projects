#include <stdio.h>
#include "dynamicArray.h"

int main() {
  dynamicArray_type *myArray = DynamicArrayCreate(5, 3);
  if (myArray == NULL) {
    printf("Failed to create dynamic array.\n");
    return 1;
  }

  for (int i = 1; i <= 10; ++i) {
    int status = DynamicArrayInsert(myArray, i);
    if (status == SUCCESS) {
      printf("Inserted: %d\n", i);
    } else {
      printf("Insert failed with status: %d\n", status);
    }
  }

  printf("Array contents: ");
  for (int i = 0; i < myArray->NumOfElements; ++i) {
    printf("%d ", myArray->dArray[i]);
  }
  printf("\n");

  int deletedValue;
  for (int i = 0; i < 5; ++i) {
    int status = DynamicArrayDelete(myArray, &deletedValue);
    if (status == SUCCESS) {
      printf("Deleted: %d\n", deletedValue);
    } else {
      printf("Delete failed with status: %d\n", status);
      }
    }

    printf("Array contents after deletion: ");
    for (int i = 0; i < myArray->NumOfElements; ++i) {
        printf("%d ", myArray->dArray[i]);
    }
    printf("\n");
    
    DynamicArrayDestroy(myArray);
    
  return 0;
}

