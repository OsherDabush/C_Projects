#include <stdio.h>
#include <string.h>
#include "strings.h"

int main() {
  char str[MAX_STR_LENGTH + 1];
  char numericStr[MAX_STR_LENGTH + 1];
  int num;

  printf("Enter your string (up to %d characters): ", MAX_STR_LENGTH);
  if (fgets(str, sizeof(str), stdin) == NULL) {
    printf("Error reading input.\n");
    return NULL_ERROR;
  }

  int length = strlen(str);
  if (length > 0 && str[length - 1] == '\n') {
    str[length - 1] = '\0';
  }

  // Reverse string
  int result = ReverseStr(str);
  if (result != SUCCESS) {
    printf("Error reversing the string. Code: %d\n", result);
    return result;
  }
  printf("Reversed string: %s\n", str);

  // Palindrome string
  result = IsPalindrome(str);
  if (result == SUCCESS) {
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }

  printf("Enter a numeric string (up to %d characters): ", MAX_STR_LENGTH);
  if (fgets(numericStr, sizeof(numericStr), stdin) == NULL) {
    printf("Error reading input.\n");
    return NULL_ERROR;
  }

  int len = strlen(numericStr);
  if (len > 0 && numericStr[len - 1] == '\n') {
    numericStr[len - 1] = '\0';
  }

  // Convert numeric string to integer
  result = MyAToI(numericStr, &num);
  if (result == SUCCESS) {
    printf("The number is: %d\n", num);
  } else {
    printf("Error: Input contains non-numeric characters or is invalid.\n");
  }

  // Convert integer to numeric string
  char buffer[MAX_STR_LENGTH + 1];
  result = MyIToA(num, buffer);
  if (result == SUCCESS) {
    printf("The numeric string is: %s\n", buffer);
  } else {
    printf("Error: Failed to convert integer to string.\n");
  }
  
  return SUCCESS;
}

