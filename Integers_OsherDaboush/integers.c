#include <stdio.h>
#include <stdlib.h>  
#include <stdbool.h>
#include "integers.h"

/* Check if the factorial of the number can be calculated */
int MaxNumberForFactorial(int _num) {
  if (_num > MAX_FACTORIAL_NUMBER) {
    return OVERFLOW;
  }
  return SUCCESS; 
}

/* Check if the result exceeds the range of int */
int CheckResultValue(int _result) {
  if (_result < MIN_RESULT || _result > MAX_RESULT) {
    return OVERFLOW;
  }
  return SUCCESS;
}

/* Check if a number is negative */
int CheckNegativeInteger(int _num) {
  if (_num < 0) {
    return NEGATIVE_NUMBER;
  }
  return SUCCESS;
}

/* Check if the number is less than or equal to 1 */
int OneOrLess(int _num) { 
  if (_num <= 1) {
    return false;
  }
  return true;
}

/* Calculate Factorial of Integer */
int Factorial(int _num) {
  int maxFactorialNumber = MaxNumberForFactorial(_num);
  if (maxFactorialNumber != SUCCESS) {
    return maxFactorialNumber;
  }

  int result = 1;
  for (int i = 1; i <= _num; ++i) {
    if (CheckResultValue(result * i) == OVERFLOW) {
      return OVERFLOW;
    }
    result *= i;
  }
  return result;
}

/* Check if integer is a palindrome */
bool Palindrome(int _num) {
  if (_num < 0) {
    return false;
  }

  int original = _num;
  int reversed = 0;

  while (_num != 0) {
    int digit = _num % 10;
    reversed = reversed * 10 + digit;
    _num /= 10;
  }

  return original == reversed;
}

/* Check if digits of integer are in ascending order */
bool AscendingOrder(int _num) {
  if (_num < 0) {
    return false;
  }

  while (_num >= 10) {
    int current_digit = _num % 10;
    int previous_digit = (_num / 10) % 10;

    if (current_digit <= previous_digit) {
      return false;
    }

    _num /= 10;
  }

  return true;
}

/* Check if integer is a prime number */
bool IsPrime(int _num) {
  bool result = OneOrLess(_num);
  if (!result) {
    return result;
  }

  for (int i = 2; i * i <= _num; ++i) {
    if (_num % i == 0) {
      return false;
    }
  }

  return true;
}

/* Reverse the digits of an integer */
int ReverseNum(int _num) {
  int reverseNum = 0;
  int sign = (_num < 0) ? -1 : 1;

  _num = abs(_num);

  while (_num != 0) {
    int digit = _num % 10;
    reverseNum = reverseNum * 10 + digit;
    _num /= 10;
  }

  return sign * reverseNum;
}

/* Count Repeated Digits */
int CountRepeatedDigits(int _base, int _check) {
  int result = CheckNegativeInteger(_base);
  if (result != SUCCESS) {
    return result;
  }

  result = CheckNegativeInteger(_check);
  if (result != SUCCESS) {
    return result;
  }

  int baseDigit[10] = {0};
  int checkDigit[10] = {0};
  
  int originalBase = _base;
  int originalCheck = _check;

  while (_base > 0) {
    int digit = _base % 10;
    if (baseDigit[digit] > 0) {
      return -1;
    }
    ++baseDigit[digit];
    _base /= 10;
  }

  while (_check > 0) {
    int digit = _check % 10;
    if (checkDigit[digit] > 0) {
      return -1;
    }
    ++checkDigit[digit];
    _check /= 10;
  }

  int tens = CompareSamePlaceDigits(originalBase, originalCheck);
  int ones = CompareDifferentPlaceDigits(baseDigit, checkDigit) - tens;

  return tens * 10 + ones;
}

/* Compare Digits in the Same Place */
int CompareSamePlaceDigits(int _base, int _check) {
  int samePlaceCount = 0;

  while (_base > 0 && _check > 0) {
    int baseDigit = _base % 10;
    int checkDigit = _check % 10;

    if (baseDigit == checkDigit) {
      ++samePlaceCount;
    }

    _base /= 10;
    _check /= 10;
  }

  return samePlaceCount;
}

/* Compare Digits in Different Places */
int CompareDifferentPlaceDigits(int baseDigit[], int checkDigit[]) {
  int differentPlaceCount = 0;

  for (int i = 0; i < 10; ++i) {
    if (baseDigit[i] > 0 && checkDigit[i] > 0) {
      ++differentPlaceCount;
    }
  }

  return differentPlaceCount;
}

