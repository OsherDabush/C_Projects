#ifndef INTEGERS_H
#define INTEGERS_H

#include <stdbool.h>

#define MAX_FACTORIAL_NUMBER 12
#define MIN_RESULT -2147483648 
#define MAX_RESULT 2147483647  
#define SUCCESS 0
#define NEGATIVE_NUMBER -1
#define OVERFLOW -2
#define TOO_SMALL_NUMBER -3

int Factorial(int _num);
/*
INPUT: 
  _num - Integer input for which the factorial is to be calculated.
OUTPUT:
  The factorial of the given number.
RETURN:
  SUCCESS - For valid integer. 
  NEGATIVE_NUMBER - For negative integer.
  OVERFLOW - If the result exceeds the limits of an integer.
*/

bool Palindrome(int _num);
/*
INPUT: 
  _num - Integer input to check if it is a palindrome.
OUTPUT:
  True (1) - If the number is a palindrome.
  False (0) - If it is not a palindrome.
RETURN:
  No error codes; returns boolean.
*/

bool AscendingOrder(int _num);
/*
INPUT: 
  _num - Integer input to check if its digits are in ascending order.
OUTPUT:
  True (1) - If the digits are in ascending order.
  False (0) - If the digits are not in ascending order.
RETURN:
  No error codes; returns boolean.
*/

bool IsPrime(int _num);
/*
INPUT: 
  _num - Integer input to check if it is a prime number.
OUTPUT:
  True (1) - If the number is a prime number.
  False (0) - If it is not a prime number.
RETURN:
  No error codes; returns boolean.
*/

int ReverseNum(int _num);
/*
INPUT: 
  _num - Integer input whose digits are to be reversed.
OUTPUT:
  The reversed integer.
RETURN:
  SUCCESS - For valid integer. 
  NEGATIVE_NUMBER - For negative integer.
*/

int CountRepeatedDigits(int _base, int _check);
/*
INPUT: 
  _base - The first integer for comparison.
  _check - The second integer for comparison.
OUTPUT:
  The count of digits repeated in both integers.
RETURN:
  SUCCESS - For valid integers.
  NEGATIVE_NUMBER - For negative integers.
*/

int CompareSamePlaceDigits(int _base, int _check);
/*
INPUT: 
  _base - The first integer for comparison.
  _check - The second integer for comparison.
OUTPUT:
  The count of digits matching in the same place.
RETURN:
  No error codes.
*/

int CompareDifferentPlaceDigits(int baseDigit[], int checkDigit[]);
/*
INPUT: 
  baseDigit[] - Array of digits from the first integer.
  checkDigit[] - Array of digits from the second integer.
OUTPUT:
  The count of digits matching in different places.
RETURN:
  No error codes.
*/

#endif 

