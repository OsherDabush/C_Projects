#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "integers.h"

int main() {
  int num, base, check;

  printf("Enter your number: ");
  if (scanf("%d", &num) != 1) {
    printf("Invalid input! Please enter an integer.\n");
    return NEGATIVE_NUMBER;
  }

  int factor = Factorial(num);
  if (factor == OVERFLOW) {
    printf("Factorial overflow.\n");
  } else if (factor == NEGATIVE_NUMBER) {
    printf("Invalid input for factorial.\n");
  } else {
    printf("Factorial: %d\n", factor);
  }

  printf("Is Palindrome: %s\n", Palindrome(num) ? "Yes" : "No");
  printf("Ascending Order: %s\n", AscendingOrder(num) ? "Yes" : "No");
  printf("Is Prime: %s\n", IsPrime(num) ? "Yes" : "No");
  printf("Reversed Number: %d\n", ReverseNum(num));

  printf("Enter base number: ");
  if (scanf("%d", &base) != 1) {
    printf("Invalid input for base.\n");
    return NEGATIVE_NUMBER;
  }

  printf("Enter check number: ");
  if (scanf("%d", &check) != 1) {
    printf("Invalid input for check.\n");
    return NEGATIVE_NUMBER;
  }

  int repeatedDigits = CountRepeatedDigits(base, check);
  if (repeatedDigits == NEGATIVE_NUMBER) {
    printf("Invalid input for repeated digits.\n");
  } else {
    printf("Repeated Digits: %d\n", repeatedDigits);
  }

  return 0;
}

